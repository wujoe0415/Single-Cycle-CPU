module core_top #(
    parameter DWIDTH = 32
)(
    input                 clk,
    input                 rst
);

    // Jump type
    localparam [2:0] J_TYPE_NOP = 3'b000,
                     J_TYPE_BEQ = 3'b001,
                     J_TYPE_JAL = 3'b010,
                     J_TYPE_JR  = 3'b011,
                     J_TYPE_J   = 3'b100;

    // Program Counter signals
    reg  [DWIDTH-1:0] pc;
    wire [31 : 0] pc_in;
    always @(posedge clk) begin
        if (rst)
            pc <= 0;
        else
            pc <= pc_in;
    end

    wire [31 : 0] _RDATA;
    imem imem_inst(
        .addr(pc),
        .rdata(_RDATA)
    );
    wire [31 : 0] _IMM, _JA;
    wire [ 2 : 0] _JT;
    wire [ 3 : 0] _OP;
    wire [ 1 : 0] _SSEL;
    wire _WD, _WR;
    wire [4 : 0] _RS1_ID, _RS2_ID, _RDST_ID;
    wire _LW;
    decode decode_inst (
        // input
        .instr(_RDATA),

        // output  
        .jump_type(_JT),
        .jump_addr(_JA),
        .we_regfile(_WR),
        .we_dmem(_WD),

        .op(_OP),
        .ssel(_SSEL),
        .imm(_IMM),
        .rs1_id(_RS1_ID),
        .rs2_id(_RS2_ID),
        .rdst_id(_RDST_ID),

        .is_load(_LW)
    );
    wire [31 : 0] _RS1, _RS2, _REG_RDST;
    reg_file reg_file_inst (
        // input
        .clk(clk),
        .rst(rst),

        .rs1_id(_RS1_ID),
        .rs2_id(_RS2_ID),

        .we(_WR),
        .rdst_id(_RDST_ID),
        .rdst(_REG_RDST),

        // output 
        .rs1(_RS1), // rs
        .rs2(_RS2)  // rt
    );
    wire [31 : 0] _RD, _ALU_RS2;
    wire _ZERO;
    alu alu_inst (
        // input
        .op(_OP),
        .rs1(_RS1),
        .rs2(_ALU_RS2),

        // output
        .rd(_RD),
        .zero(_ZERO),
        .overflow()
    );
    wire [31 : 0] _DMEM_RDATA;
    // Dmem
    dmem dmem_inst (
        .clk(clk),
        .addr(_RD),
        .we(_WD),
        .wdata(_RS2),
        .rdata(_DMEM_RDATA)
    );

    wire [31 : 0] _PC_ADDER_RESULT;
    pc_adder pc_adder_inst(
        .pc(pc),
        .result(_PC_ADDER_RESULT)
    );
    wire [31 : 0]_DECODE_ADDER;
    
    decode_adder decode_adder_inst(
        .pc(_PC_ADDER_RESULT),
        .decode(_IMM),
        .result(_DECODE_ADDER)
    );
    mux2_1 mux2_1_inst(
        .alu_rd(_RD),
        .dmem_rdata(_DMEM_RDATA), 
        .decode_lw(_LW),
        .reg_rdst(_REG_RDST)
    );
    mux5_1 mux5_1_inst(
        .jump_type(_JT),
        .adder_result1(_PC_ADDER_RESULT),
        .jump_address(_JA),
        .adder_result2(_DECODE_ADDER),
        .jr_address(_RS1),
        .pc_result(pc_in),
        .is_zero(_ZERO)
    );
    mux4_1 mux4_1_inst(
        .decode_ssel(_SSEL),
        .decode_imm(_IMM),
        .addr_ra(_PC_ADDER_RESULT),
        .reg_rs2(_RS2),
        .alu_rs2(_ALU_RS2)
    );

endmodule