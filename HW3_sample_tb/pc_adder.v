module pc_adder(
    pc,
    result
);
    input  [31:0]  pc;
    output [31:0]  result;
    
    wire [31:0]    result;
    assign result = pc + 32'd4;
endmodule