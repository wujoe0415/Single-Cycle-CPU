module mux5_1(
    input reg is_zero,
    input  [ 1:0]   jump_type,
    input  [31:0]  adder_result1, jump_address, adder_result2, jr_address,
    output [31:0]  pc_result
);
    reg [1:0] select = jump_type;
    
    assign pc_result = (select == 3'b001 && is_zero) ? adder_result2:
                       (select == 3'b010) ? jump_address:
                       (select == 3'b011) ? jr_address: adder_result1; 
    
    // always @(*) begin
    //     $display("adder result2 : ", adder_result2);
    //     //$display("select = %b, is_zero = %b", select, is_zero);
    //     $display("Mux pc result : ", pc_result);
    // end
    // J_TYPE_NOP = 3'b000,
    // J_TYPE_BEQ = 3'b001,
    // J_TYPE_JAL = 3'b010,
    // J_TYPE_JR  = 3'b011,
    // J_TYPE_J   = 3'b100;

endmodule