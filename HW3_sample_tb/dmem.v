module dmem (
    input           clk,
    input  [ 5 : 0] addr,  // byte address
    input           we,    // write-enable
    input  [31 : 0] wdata, // write data
    output [31 : 0] rdata  // read data
);

    reg [31 : 0] RAM [15 : 0];

    integer idx;

    initial begin
        for (idx = 0; idx < 16; idx = idx+1) RAM[idx] = 32'h0;
    end

    // Read operation
    assign rdata = RAM[addr[5:2]];

    // Write operation
    always @(posedge clk) begin
        if (we)
        begin
            RAM[addr[5:2]] <= wdata;
        end
        //$display("Data Memory after ", RAM[addr[5:2]]);
    end

endmodule