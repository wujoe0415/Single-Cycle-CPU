from assembly_gen import assem_generator
from assembly_gen import REGFILE_SIZE, DMEM_SIZE, INSTR
from code_gen import code_generator

import re

REGFILE = [0 for i in range(REGFILE_SIZE)]
DMEM = [0 for i in range(DMEM_SIZE)]

log_file = open('steps.log', 'w')

def branch_check(st: int, dest: int, visited: list) -> int:
    if st == dest: return 1 # self-jump
    if dest in visited: return -1 # loop
    return 0 # good

def execute(instr_mem: list) -> bool:
    PC = 0 # word-address
    # Terminate whenever self-jump arises.
    # Eliminate loops.

    visited = []
    while True:
        branched = False
        data = instr_mem[PC]
        format, instr = data[0], data[1]

        log_file.write(f'current: {instr_mem.index(data)}: {data}\n')

        if format == 0:
            if instr == 'jr':
                rdst_id = 31 # $ra
                dest = REGFILE[rdst_id]
                br_condition = branch_check(PC, dest, visited)

                # print(f'br_condition: {br_condition}')

                if br_condition == 1: return True
                if br_condition == -1: return False

                PC = dest
                branched = True
            else:
                RD, RS, RT = data[2:]
                rdst_id, rs1_id, rs2_id = RD[1], RS[1], RT[1]
                match instr:
                    case 'add': 
                        REGFILE[rdst_id] = REGFILE[rs1_id] + REGFILE[rs2_id]
                    case 'sub':
                        REGFILE[rdst_id] = REGFILE[rs1_id] - REGFILE[rs2_id]
                    case 'and':
                        REGFILE[rdst_id] = REGFILE[rs1_id] & REGFILE[rs2_id]
                    case 'or':
                        REGFILE[rdst_id] = REGFILE[rs1_id] | REGFILE[rs2_id]
                    case 'nor':
                        REGFILE[rdst_id] = ~(REGFILE[rs1_id] | REGFILE[rs2_id])
                    case 'slt':
                        REGFILE[rdst_id] = 1 if REGFILE[rs1_id] < REGFILE[rs2_id] else 0
        elif format == 1:
            RD, RS, imm = data[2:]
            rdst_id, rs1_id = RD[1], RS[1]
            if instr == 'beq':
                if REGFILE[rdst_id] == REGFILE[rs1_id]:
                    # dest = PC + 1 + imm
                    dest = imm
                    br_condition = branch_check(PC, dest, visited)

                    # print(f'br_condition: {br_condition}')


                    if br_condition == 1: return True
                    if br_condition == -1: return False

                    PC = dest
                    branched = True
            else:
                match instr:
                    case 'addi':
                        REGFILE[rdst_id] = REGFILE[rs1_id] + imm
                    # case 'slti':
                    #     REGFILE[rdst_id] = 1 if REGFILE[rs1_id] < imm else 0
                    case 'lw':
                        dest_addr = (REGFILE[rs1_id] + imm) // 4
                        if 0 <= dest_addr < DMEM_SIZE: # otherwise, ignore
                            REGFILE[rdst_id] = DMEM[dest_addr]
                    case 'sw':
                        dest_addr = (REGFILE[rs1_id] + imm) // 4
                        if 0 <= dest_addr < DMEM_SIZE: # otherwise, ignore
                            DMEM[dest_addr] = REGFILE[rdst_id]
        else:
            target_pc, ra = data[2:]
            if instr == 'jal':
                REGFILE[31] = ra << 2

            dest = target_pc
            br_condition = branch_check(PC, dest, visited)

            # print(f'br_condition: {br_condition}')

            if br_condition == 1: return True
            if br_condition == -1: return False

            PC = dest
            branched = True
        
        visited.append(instr_mem.index(data))
        if not branched: PC += 1


def write_to_imem(machine_code):
    imemV = open('imem.v', 'r')
    CODE = imemV.read()
    # print(f'CODE: {CODE}')
    for i in range(0, len(machine_code), 2):
        code0, code1 = machine_code[i], machine_code[i+1]
        old_line = f'RAM\[{i}\]\s*=\s*32\'h.*;\s*RAM\[{i+1}\]\s*=\s*32\'h.*;'
        new_line = f'RAM[{i}]  = 32\'h{code0}; RAM[{i+1}]  = 32\'h{code1};'
        # print(f'old: {old_line}')
        # print(f'new: {new_line}')
        CODE = re.sub(old_line, new_line, CODE)

    new_imemV = open('imem.new.v', 'w')
    new_imemV.write(CODE)


def write_to_hw3_tb():
    hw3_tb = open('hw3_tb.v', 'r')
    CODE = hw3_tb.read()
    for i in range(REGFILE_SIZE):
        reg = REGFILE[i]
        old_line = f'golden_reg\[{i}\]\s*=.*;'
        new_line = f'golden_reg[{i}] = {reg};'
        # print(f'old: {old_line}')
        # print(f'new: {new_line}')
        CODE = re.sub(old_line, new_line, CODE)

    for i in range(DMEM_SIZE):
        dmem = DMEM[i]
        old_line = f'golden_dmem\[{i}\]\s*=.*;'
        new_line = f'golden_dmem[{i}] = {dmem};'
        # print(f'old: {old_line}')
        # print(f'new: {new_line}')
        CODE = re.sub(old_line, new_line, CODE)

    # Change simulation cycles.
    old_line = 'integer cycle_for_ans =.*;'
    new_line = 'integer cycle_for_ans = 25;'
    CODE = re.sub(old_line, new_line, CODE)

    new_imemV = open('hw3_tb.new.v', 'w')
    new_imemV.write(CODE)



ff = open('assem.txt', 'w')
ff_back = open('./assem.back.txt', 'w')

T = 1 
for _t in range(T):
    instr_mem, instr = assem_generator()

    whole_instr = ''
    for id, x in enumerate(instr):
            whole_instr += f'{id}: {x}\n'
        
    ff_back.write(whole_instr)

    status = execute(instr_mem)
    print(f'success?: {status}')

    if status: ff.write(whole_instr)
    else: break

    code_and_tag = code_generator(whole_instr)
    machine_code = []
    for code in code_and_tag:
        if len(code) == 8:
            machine_code.append(code)          
    if len(machine_code) & 1: # padding
        machine_code.append('00000000')


    log_file.write('--------------------\n')
    log_file.write('machine code:\n')
    for code in machine_code:
        log_file.write(f'{code}\n')

    write_to_imem(machine_code)
    write_to_hw3_tb()