module pc_adder(
    pc,
    result
);
    input  [31:0]  pc;
    output [31:0]  result;
    
    wire [31:0]    result;
    assign result = pc + 32'd4;
    // always @(*) begin
    //     $display(pc, "pc adder result : ", result);
    // end
endmodule