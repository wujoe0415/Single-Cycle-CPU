module jump_addr(
    input  [31 : 0] pc,
    input  [31 : 0] jump_addr,
    output [31 : 0] answer_jump
);
    
    reg  [31:0] decode_shift;
    assign answer_jump = decode_shift;
    assign answer_jump[31:28] = pc[31:28];
    assign answer_jump[27:2] = jump_addr[25:0];
    assign answer_jump[1:0] = 2'b00;

endmodule