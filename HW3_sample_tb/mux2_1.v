module mux2_1(
    input  [31:0]  alu_rd, dmem_rdata, decode_lw,
    output [31:0]  reg_rdst
);
    assign reg_rdst = decode_lw ? dmem_rdata : alu_rd;

endmodule