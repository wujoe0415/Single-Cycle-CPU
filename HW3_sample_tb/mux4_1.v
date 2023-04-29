module mux4_1(
    input  [1:0]     decode_ssel,
    input  [31:0]    decode_imm, addr_ra, reg_rs2,
    output [31:0]    alu_rs2
);
    assign alu_rs2 = (decode_ssel == 2'b00) ? decode_imm:
                     (decode_ssel == 2'b01) ? addr_ra : reg_rs2;

endmodule