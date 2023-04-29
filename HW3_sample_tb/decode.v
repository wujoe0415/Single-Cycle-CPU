/*
 *    Author : Che-Yu Wu @ EISL
 *    Date   : 2022-03-30
 */

module decode #(parameter DWIDTH = 32)
(
    input [DWIDTH-1:0]  instr,   // Input instruction.

    output reg [3 : 0]      op,      // Operation code for the ALU.
    output reg              ssel,    // Select the signal for either the immediate value or rs2.

    output reg [DWIDTH-1:0] imm,     // The immediate value (if used).
    output reg [4 : 0]      rs1_id,  // register ID for rs.
    output reg [4 : 0]      rs2_id,  // register ID for rt (if used).
    output reg [4 : 0]      rdst_id, // register ID for rd or rt (if used).

    output reg [2 : 0]      jump_type,
    output reg [31: 0]      jump_addr,
    output reg              we_dmem,
    output reg              we_regfile,

    output reg              is_load
);

/***************************************************************************************
    ---------------------------------------------------------------------------------
    | R_type |    |   opcode   |   rs   |   rt   |   rd   |   shamt   |    funct    |
    ---------------------------------------------------------------------------------
    | I_type |    |   opcode   |   rs   |   rt   |             immediate            |
    ---------------------------------------------------------------------------------
    | J_type |    |   opcode   |                     address                        |
    ---------------------------------------------------------------------------------
                   31        26 25    21 20    16 15    11 10        6 5           0
 ***************************************************************************************/

    localparam [3:0] OP_AND = 4'b0000,
                     OP_OR  = 4'b0001,
                     OP_ADD = 4'b0010,
                     OP_SUB = 4'b0110,
                     OP_NOR = 4'b1100,
                     OP_SLT = 4'b0111,
                     OP_JR  = 4'b1000,
                     OP_NOT_DEFINED = 4'b1111;
    reg[6:0] opcode;
    assign opcode = instr[31:26];
    /* verilator lint_off LATCH */
    always @(*) begin
        //$display(opcode);
    case (opcode)
        6'b000000: begin // R-Type instructions
            rs1_id  = instr[25:21];
            rs2_id  = instr[20:16];
            rdst_id = instr[15:11];
            ssel    = 1'b1;
            imm = 32'b0;
            jump_addr = 32'b0;
            jump_type = 2'b0;
            we_dmem = 1'b0;
            we_regfile = 1'b0;
            is_load = 1'b0;
            case (instr[5:0])
                6'b100000: op = OP_ADD;
                6'b100010: op = OP_SUB;
                6'b100100: op = OP_AND;
                6'b100101: op = OP_OR;
                6'b100111: op = OP_NOR;
                6'b101010: op = OP_SLT;
                6'b001000:
                    begin
                        op = OP_JR;
                        jump_type = 3'b011;
                    end
                default:    op = OP_NOT_DEFINED;
            endcase
        end
        6'b001000: begin // I-Type instructions (ADDI)
            rs1_id  = instr[25:21];
            rdst_id = instr[20:16];
            imm     = {{16{instr[15]}}, instr[15:0]};
            ssel    = 1'b0;
            op      = OP_ADD;
            rs2_id  = 5'b0;
            jump_addr = 32'b0;
            jump_type = 2'b0;
            we_dmem = 1'b0;
            we_regfile = 1'b0;
            is_load = 1'b0;
        end
        6'b001010: begin // I-Type instructions (SLTI)
            rs1_id  = instr[25:21];
            rdst_id = instr[20:16];
            imm     = {{16{instr[15]}}, instr[15:0]};
            ssel    = 1'b0;
            op      = OP_SLT;
            rs2_id  = 5'b0;
            jump_addr = 32'b0;
            jump_type = 2'b0;
            we_dmem = 1'b0;
            we_regfile = 1'b0;
            is_load = 1'b0;
        end
        6'b100011: begin // I-Type instructions (LW)
            rs1_id  = instr[25:21];
            rdst_id = instr[20:16];
            imm     = {{16{instr[15]}}, instr[15:0]};
            ssel    = 1'b0;
            op      = OP_ADD;
            rs2_id  = 5'b0;
            jump_addr = 32'b0;
            jump_type = 2'b0;
            we_dmem = 1'b0;
            we_regfile = 1'b0;
            is_load = 1'b1;
        end
        6'b101011: begin // I-Type instructions (SW)
            rs1_id  = instr[25:21];
            rdst_id = instr[20:16];
            imm     = {{16{instr[15]}}, instr[15:0]};
            ssel    = 1'b0;
            op      = OP_ADD;
            rs2_id  = 5'b0;
            jump_addr = 32'b0;
            jump_type = 2'b0;
            we_dmem = 1'b1;
            we_regfile = 1'b1;
            is_load = 1'b0;
            $display(rs1_id, rdst_id, imm);
        end
        6'b000100: begin // I-Type instructions (BEQ)
            rs1_id  = instr[25:21];
            rdst_id = instr[20:16];
            imm     = {{16{instr[15]}}, instr[15:0]};
            ssel    = 1'b0;
            op      = OP_SUB;
            rs2_id  = 5'b0;
            jump_addr = 32'b0;
            jump_type = 3'b001;
            we_dmem = 1'b0;
            we_regfile = 1'b0;
            is_load = 1'b0;
        end
        6'b000011: begin // J-Type instructions (JAL)
            rs1_id  = 5'b0;
            rdst_id = 5'b0;
            imm     = 32'b0;
            ssel    = 1'b0;
            op      = OP_NOT_DEFINED;
            rs2_id  = 5'b0;
            jump_addr = instr[25:0];
            jump_type = 3'b011;
            we_dmem = 1'b0;
            we_regfile = 1'b1;
            is_load = 1'b0;
        end
        6'b000010: begin // J-Type instructions (J)
            rs1_id  = 5'b0;
            rdst_id = 5'b0;
            imm     = 32'b0;
            ssel    = 1'b0;
            op      = OP_NOT_DEFINED;
            rs2_id  = 5'b0;
            jump_addr = instr[25:0];
            jump_type = 3'b100;
            we_dmem = 1'b0;
            we_regfile = 1'b0;
            is_load = 1'b0;
        end
        default: begin
            op      = OP_NOT_DEFINED;
            ssel    = 1'b0;
            rs1_id  = 5'b0;
            rs2_id  = 5'b0;
            rdst_id = 5'b0;
            imm     = 32'b0;
            jump_addr = 32'b0;
            jump_type = 3'b0;
            we_dmem = 1'b0;
            we_regfile = 1'b0;
            is_load = 0'b0;
        end
    endcase 
    /* verilator lint_on LATCH */
    end
endmodule