module decode_adder(
    pc, decode,
    result
);
    input  [31:0]  pc, decode;
    output [31:0]  result;
    
    
    wire [31:0] result;
    reg  [31:0] decode_shift;
    assign decode_shift[31:2] = decode[31-2:0] ;
    assign decode_shift[1:0] = 2'b00;
    assign result = pc + decode_shift;

endmodule