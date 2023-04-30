from random import randint

REGFILE_SIZE = 32
DMEM_SIZE = 16

# R / I / J
INSTR = [
    ['add', 'sub', 'and', 'or', 'nor', 'slt', 'jr'],
    ['addi', 'slti', 'lw', 'sw', 'beq'],
    ['jal', 'j']
]

# Every single line of assembly has a tag.
# At line x, the tag is x.
def assem_generator() -> tuple:
    CODE = []
    COUNT = -1
    N = randint(10, 16) # number of instr.

    tmp_reg_num = 2 # 2 temp registers are good for testing.
    tmp_regs = [f'$t{i}' for i in range(tmp_reg_num)] 
    tmp_regs_id = [i + 8 for i in range(tmp_reg_num)]
    # tmp_regs_id.extend([i + 24 for i in range(2)])

    zero_reg = '$zero'
    ra_reg = '$ra' # id = 31

    generated_instr = []
    used_instr = set()

    branch_count = 0

    for i in range(N - 1):
        COUNT += 1

        _rand = randint(0, 99)
        if _rand < 65: format = 1
        elif _rand < 90: format = 0
        else: format = 2

        _id = randint(0, len(INSTR[format]) - 1)
        instr = INSTR[format][_id]
        update = True
        while update:
            update = False
            while instr in ['beq', 'j', 'jal', 'jr'] and (branch_count >= 2 or i < N//3):
                format = 1
                _id = randint(0, len(INSTR[format]) - 1)
                instr = INSTR[format][_id]
                update = True

            while instr == 'jr' and 'jal' not in used_instr:
                _id = randint(0, len(INSTR[format]) - 1)
                instr = INSTR[format][_id]
                update = True

            while (instr == 'sw') and ('addi' not in used_instr):
                _id = randint(0, len(INSTR[format]) - 1)
                instr = INSTR[format][_id]
                update = True

            while (instr == 'lw') and ('sw' not in used_instr):
                _id = randint(0, len(INSTR[format]) - 1)
                instr = INSTR[format][_id]
                update = True

            # 'slti' is not supported by the Online assembler.
            while instr == 'slti':
                _id = randint(0, len(INSTR[format]) - 1)
                instr = INSTR[format][_id]
                update = True

        used_instr.add(instr)

        # R-type
        if format == 0:
            _r = randint(0, len(tmp_regs) - 1)
            rdst_id = tmp_regs_id[_r]
            rd = tmp_regs[_r]

            if instr != 'jr':
                if randint(0, 15) % 4 == 0:
                    rs1_id = 0
                    rs = zero_reg
                else:
                    _r = randint(0, len(tmp_regs) - 1)
                    rs1_id = tmp_regs_id[_r]
                    rs = tmp_regs[_r]
                if randint(0, 15) % 4 == 0:
                    rs2_id = 0
                    rt = zero_reg
                else:
                    _r = randint(0, len(tmp_regs) - 1)
                    rs2_id = tmp_regs_id[_r]
                    rt = tmp_regs[_r]
                generated_instr.append((format, instr, (rd, rdst_id), (rs, rs1_id), (rt, rs2_id)))
                CODE.append(f'{instr} {rd}, {rs}, {rt}')
            else:
                # Force to jump to 'ra'. (Since jumping with '$tx' does not guarantee validity.)
                generated_instr.append((format, instr, ('$ra')))
                CODE.append(f'{instr} $ra')                
        # I-type
        elif format == 1:
            _r = randint(0, len(tmp_regs) - 1)
            rdst_id = tmp_regs_id[_r]
            rd = tmp_regs[_r] # In MIPS, this is rt.

            if randint(0, 15) % 4 == 0:
                rs1_id = 0
                rs = zero_reg
            else:
                _r = randint(0, len(tmp_regs) - 1)
                rs1_id = tmp_regs_id[_r]
                rs = tmp_regs[_r]

            if instr == 'beq':
                # imm = (randint(0, N - 1) - COUNT - 1)
                imm = randint(1, N - 1)
            elif instr == 'lw' or instr == 'sw':
                imm = randint(0, DMEM_SIZE - 1) * 4
                rs1_id = 0
                rs = zero_reg
            # 'slti' is not supported by the Online assembler.
            # elif instr == 'slti':
            #     imm = randint(1, 31)
            else: 
                imm = randint(-2**15, 2**15 - 1)

            generated_instr.append((format, instr, (rd, rdst_id), (rs, rs1_id), imm))

            if instr == 'lw' or instr == 'sw':
                CODE.append(f'{instr} {rd}, {imm}({rs})')
            else:
                CODE.append(f'{instr} {rd}, {rs}, {imm}')
        # J-type
        else:
            if instr == 'jal':
                ra = COUNT + 1
            else: ra = -1
            target_pc = randint(1, N - 1)
            generated_instr.append((format, instr, target_pc, ra))
            CODE.append(f'{instr} {target_pc}')

    generated_instr.append((2, 'j', N - 1, -1))
    CODE.append(f'j {N - 1}')

    return (generated_instr, CODE)
    
if __name__ == '__main__':
    generated_instr, CODE = assem_generator()
    print(generated_instr)
    print('-------------------')
    print(CODE)

