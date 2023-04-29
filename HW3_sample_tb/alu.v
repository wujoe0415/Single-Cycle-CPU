module alu #(parameter DWIDTH = 32)
(
    input [3:0] op, // Operation to perform
    input signed [DWIDTH-1:0] rs1, // Input data 1
    input signed [DWIDTH-1:0] rs2, // Input data 2

    output signed [DWIDTH - 1 :0] rd, // Result of computation
    output signed zero, // zero = 1 if rd is 0, 0 otherwise.
    output signed overflow // overflow = 1, if overflow happens
);

    reg[DWIDTH - 1:0] ALU_Result;
    assign rd = ALU_Result;
    assign zero = (rd == 0)? 1 : 0;
    assign overflow = ( (op==4'b0010) & rs1[DWIDTH-1] & rs2[DWIDTH-1] & ~ALU_Result[DWIDTH-1]) ? 1 
                      :( (op==4'b0010) & ~rs1[DWIDTH-1] & ~rs2[DWIDTH-1] & ALU_Result[DWIDTH-1]) ? 1 
                      :( (op==4'b0110) & rs1[DWIDTH-1] & ~rs2[DWIDTH-1] & ~(ALU_Result[DWIDTH-1])) ? 1 
                      :( (op==4'b0110) & ~rs1[DWIDTH-1] & rs2[DWIDTH-1] & ALU_Result[DWIDTH-1]) ? 1 
                      : 0;

    //always_latch //@(op, rs1, rs2)
    /* verilator lint_off LATCH */
    always @(*)
    begin
        case(op)
            4'b0000: // Logical And
                ALU_Result = rs1 & rs2;
            4'b0001: // Logical Or
                ALU_Result = rs1 | rs2;
            4'b0010: 
                begin// Signed Addition
                    ALU_Result = rs1 + rs2;
                    //overflow = ((rs1[DWIDTH-1] == rs2[DWIDTH-1]) && (rd[DWIDTH-1] != rs1[DWIDTH-1]));
               end
            4'b0110: begin// Signed Substraction
                ALU_Result = rs1 - rs2;
                //overflow = ((rs1[DWIDTH-1] != rs2[DWIDTH-1]) && (rd[DWIDTH-1] != rs1[DWIDTH-1]));
            end
            4'b1100: // Logical Nor
                ALU_Result = ~(rs1 | rs2);
            4'b0111: // slt
                begin
                    ALU_Result = (rs1<rs2)?32'h1:32'h0;
                    //overflow = 0;
                end
            default:
                begin
                    ALU_Result = 0;
                    //overflow = 0;
                    //zero = 0;
                //assign overflow = 0;
            end
        endcase
        //assign zero = (rd == 0)?1:0;
    end
    
endmodule