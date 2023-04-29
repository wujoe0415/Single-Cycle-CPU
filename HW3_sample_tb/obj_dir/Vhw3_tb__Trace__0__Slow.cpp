// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhw3_tb__Syms.h"


VL_ATTR_COLD void Vhw3_tb___024root__trace_init_sub__TOP__0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBit(c+150,"finish", false,-1);
    tracep->pushNamePrefix("hw3_tb ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBit(c+150,"finish", false,-1);
    tracep->declBus(c+151,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"i", false,-1, 31,0);
    tracep->declBus(c+152,"tmp", false,-1, 31,0);
    tracep->declBus(c+19,"cycle_count", false,-1, 31,0);
    tracep->declBus(c+153,"cycle_for_ans", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,"golden_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+52+i*1,"golden_dmem", true,(i+0), 31,0);
    }
    tracep->declBit(c+68,"start", false,-1);
    tracep->pushNamePrefix("core_top_inst ");
    tracep->declBus(c+151,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+154,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+155,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+156,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+157,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+158,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"pc_in", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+151,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"op", false,-1, 3,0);
    tracep->declBus(c+72,"rs1", false,-1, 31,0);
    tracep->declBus(c+73,"rs2", false,-1, 31,0);
    tracep->declBus(c+74,"rd", false,-1, 31,0);
    tracep->declBit(c+75,"zero", false,-1);
    tracep->declBit(c+76,"overflow", false,-1);
    tracep->declBus(c+74,"ALU_Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_adder_inst ");
    tracep->declBus(c+77,"pc", false,-1, 31,0);
    tracep->declBus(c+78,"decode", false,-1, 31,0);
    tracep->declBus(c+79,"result", false,-1, 31,0);
    tracep->declBus(c+80,"decode_shift", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBus(c+151,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+81,"instr", false,-1, 31,0);
    tracep->declBus(c+71,"op", false,-1, 3,0);
    tracep->declBit(c+82,"ssel", false,-1);
    tracep->declBus(c+78,"imm", false,-1, 31,0);
    tracep->declBus(c+83,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+84,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+85,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+86,"jump_type", false,-1, 2,0);
    tracep->declBus(c+87,"jump_addr", false,-1, 31,0);
    tracep->declBit(c+88,"we_dmem", false,-1);
    tracep->declBit(c+89,"we_regfile", false,-1);
    tracep->declBit(c+90,"is_load", false,-1);
    tracep->declBus(c+159,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+160,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+161,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+162,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+163,"OP_NOR", false,-1, 3,0);
    tracep->declBus(c+164,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+165,"OP_JR", false,-1, 3,0);
    tracep->declBus(c+166,"OP_NOT_DEFINED", false,-1, 3,0);
    tracep->declBus(c+91,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmem_inst ");
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBus(c+92,"addr", false,-1, 5,0);
    tracep->declBit(c+88,"we", false,-1);
    tracep->declBus(c+93,"wdata", false,-1, 31,0);
    tracep->declBus(c+94,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+95+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"idx", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_inst ");
    tracep->declBus(c+111,"addr", false,-1, 5,0);
    tracep->declBus(c+81,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2_1_inst ");
    tracep->declBus(c+74,"alu_rd", false,-1, 31,0);
    tracep->declBus(c+94,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+112,"decode_lw", false,-1, 31,0);
    tracep->declBus(c+113,"reg_rdst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux4_1_inst ");
    tracep->declBus(c+114,"decode_ssel", false,-1, 1,0);
    tracep->declBus(c+78,"decode_imm", false,-1, 31,0);
    tracep->declBus(c+77,"addr_ra", false,-1, 31,0);
    tracep->declBus(c+93,"reg_rs2", false,-1, 31,0);
    tracep->declBus(c+73,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux5_1_inst ");
    tracep->declBit(c+75,"is_zero", false,-1);
    tracep->declBus(c+86,"jump_type", false,-1, 2,0);
    tracep->declBus(c+77,"adder_result1", false,-1, 31,0);
    tracep->declBus(c+87,"jump_address", false,-1, 31,0);
    tracep->declBus(c+79,"adder_result2", false,-1, 31,0);
    tracep->declBus(c+72,"jr_address", false,-1, 31,0);
    tracep->declBus(c+70,"pc_result", false,-1, 31,0);
    tracep->declBus(c+167,"select", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_adder_inst ");
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBus(c+77,"result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    tracep->declBus(c+151,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+148,"clk", false,-1);
    tracep->declBit(c+149,"rst", false,-1);
    tracep->declBus(c+83,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+84,"rs2_id", false,-1, 4,0);
    tracep->declBit(c+89,"we", false,-1);
    tracep->declBus(c+85,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+113,"rdst", false,-1, 31,0);
    tracep->declBus(c+72,"rs1", false,-1, 31,0);
    tracep->declBus(c+93,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+115+i*1,"R", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+147,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_init_top(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_init_top\n"); );
    // Body
    Vhw3_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vhw3_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vhw3_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vhw3_tb___024root__trace_register(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vhw3_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vhw3_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vhw3_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_full_top_0\n"); );
    // Init
    Vhw3_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhw3_tb___024root*>(voidSelf);
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vhw3_tb___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vhw3_tb___024root__trace_full_sub_0(Vhw3_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx),32);
    tracep->fullIData(oldp+2,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0]),32);
    tracep->fullIData(oldp+3,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[1]),32);
    tracep->fullIData(oldp+4,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[2]),32);
    tracep->fullIData(oldp+5,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[3]),32);
    tracep->fullIData(oldp+6,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[4]),32);
    tracep->fullIData(oldp+7,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[5]),32);
    tracep->fullIData(oldp+8,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[6]),32);
    tracep->fullIData(oldp+9,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[7]),32);
    tracep->fullIData(oldp+10,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[8]),32);
    tracep->fullIData(oldp+11,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[9]),32);
    tracep->fullIData(oldp+12,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[10]),32);
    tracep->fullIData(oldp+13,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[11]),32);
    tracep->fullIData(oldp+14,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[12]),32);
    tracep->fullIData(oldp+15,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[13]),32);
    tracep->fullIData(oldp+16,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[14]),32);
    tracep->fullIData(oldp+17,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[15]),32);
    tracep->fullIData(oldp+18,(vlSelf->hw3_tb__DOT__i),32);
    tracep->fullIData(oldp+19,(vlSelf->hw3_tb__DOT__cycle_count),32);
    tracep->fullIData(oldp+20,(vlSelf->hw3_tb__DOT__golden_reg[0]),32);
    tracep->fullIData(oldp+21,(vlSelf->hw3_tb__DOT__golden_reg[1]),32);
    tracep->fullIData(oldp+22,(vlSelf->hw3_tb__DOT__golden_reg[2]),32);
    tracep->fullIData(oldp+23,(vlSelf->hw3_tb__DOT__golden_reg[3]),32);
    tracep->fullIData(oldp+24,(vlSelf->hw3_tb__DOT__golden_reg[4]),32);
    tracep->fullIData(oldp+25,(vlSelf->hw3_tb__DOT__golden_reg[5]),32);
    tracep->fullIData(oldp+26,(vlSelf->hw3_tb__DOT__golden_reg[6]),32);
    tracep->fullIData(oldp+27,(vlSelf->hw3_tb__DOT__golden_reg[7]),32);
    tracep->fullIData(oldp+28,(vlSelf->hw3_tb__DOT__golden_reg[8]),32);
    tracep->fullIData(oldp+29,(vlSelf->hw3_tb__DOT__golden_reg[9]),32);
    tracep->fullIData(oldp+30,(vlSelf->hw3_tb__DOT__golden_reg[10]),32);
    tracep->fullIData(oldp+31,(vlSelf->hw3_tb__DOT__golden_reg[11]),32);
    tracep->fullIData(oldp+32,(vlSelf->hw3_tb__DOT__golden_reg[12]),32);
    tracep->fullIData(oldp+33,(vlSelf->hw3_tb__DOT__golden_reg[13]),32);
    tracep->fullIData(oldp+34,(vlSelf->hw3_tb__DOT__golden_reg[14]),32);
    tracep->fullIData(oldp+35,(vlSelf->hw3_tb__DOT__golden_reg[15]),32);
    tracep->fullIData(oldp+36,(vlSelf->hw3_tb__DOT__golden_reg[16]),32);
    tracep->fullIData(oldp+37,(vlSelf->hw3_tb__DOT__golden_reg[17]),32);
    tracep->fullIData(oldp+38,(vlSelf->hw3_tb__DOT__golden_reg[18]),32);
    tracep->fullIData(oldp+39,(vlSelf->hw3_tb__DOT__golden_reg[19]),32);
    tracep->fullIData(oldp+40,(vlSelf->hw3_tb__DOT__golden_reg[20]),32);
    tracep->fullIData(oldp+41,(vlSelf->hw3_tb__DOT__golden_reg[21]),32);
    tracep->fullIData(oldp+42,(vlSelf->hw3_tb__DOT__golden_reg[22]),32);
    tracep->fullIData(oldp+43,(vlSelf->hw3_tb__DOT__golden_reg[23]),32);
    tracep->fullIData(oldp+44,(vlSelf->hw3_tb__DOT__golden_reg[24]),32);
    tracep->fullIData(oldp+45,(vlSelf->hw3_tb__DOT__golden_reg[25]),32);
    tracep->fullIData(oldp+46,(vlSelf->hw3_tb__DOT__golden_reg[26]),32);
    tracep->fullIData(oldp+47,(vlSelf->hw3_tb__DOT__golden_reg[27]),32);
    tracep->fullIData(oldp+48,(vlSelf->hw3_tb__DOT__golden_reg[28]),32);
    tracep->fullIData(oldp+49,(vlSelf->hw3_tb__DOT__golden_reg[29]),32);
    tracep->fullIData(oldp+50,(vlSelf->hw3_tb__DOT__golden_reg[30]),32);
    tracep->fullIData(oldp+51,(vlSelf->hw3_tb__DOT__golden_reg[31]),32);
    tracep->fullIData(oldp+52,(vlSelf->hw3_tb__DOT__golden_dmem[0]),32);
    tracep->fullIData(oldp+53,(vlSelf->hw3_tb__DOT__golden_dmem[1]),32);
    tracep->fullIData(oldp+54,(vlSelf->hw3_tb__DOT__golden_dmem[2]),32);
    tracep->fullIData(oldp+55,(vlSelf->hw3_tb__DOT__golden_dmem[3]),32);
    tracep->fullIData(oldp+56,(vlSelf->hw3_tb__DOT__golden_dmem[4]),32);
    tracep->fullIData(oldp+57,(vlSelf->hw3_tb__DOT__golden_dmem[5]),32);
    tracep->fullIData(oldp+58,(vlSelf->hw3_tb__DOT__golden_dmem[6]),32);
    tracep->fullIData(oldp+59,(vlSelf->hw3_tb__DOT__golden_dmem[7]),32);
    tracep->fullIData(oldp+60,(vlSelf->hw3_tb__DOT__golden_dmem[8]),32);
    tracep->fullIData(oldp+61,(vlSelf->hw3_tb__DOT__golden_dmem[9]),32);
    tracep->fullIData(oldp+62,(vlSelf->hw3_tb__DOT__golden_dmem[10]),32);
    tracep->fullIData(oldp+63,(vlSelf->hw3_tb__DOT__golden_dmem[11]),32);
    tracep->fullIData(oldp+64,(vlSelf->hw3_tb__DOT__golden_dmem[12]),32);
    tracep->fullIData(oldp+65,(vlSelf->hw3_tb__DOT__golden_dmem[13]),32);
    tracep->fullIData(oldp+66,(vlSelf->hw3_tb__DOT__golden_dmem[14]),32);
    tracep->fullIData(oldp+67,(vlSelf->hw3_tb__DOT__golden_dmem[15]),32);
    tracep->fullBit(oldp+68,(vlSelf->hw3_tb__DOT__start));
    tracep->fullIData(oldp+69,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc),32);
    tracep->fullIData(oldp+70,(((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                 ? ((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                                 : (((1U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select) 
                                     & ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                                         ? 1U : 0U))
                                     ? ((IData)(4U) 
                                        + (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                                           + (vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                                              << 2U)))
                                     : ((2U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                         ? vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA
                                         : ((3U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                             ? vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1
                                             : vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA))))),32);
    tracep->fullCData(oldp+71,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP),4);
    tracep->fullIData(oldp+72,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1),32);
    tracep->fullIData(oldp+73,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2),32);
    tracep->fullIData(oldp+74,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result),32);
    tracep->fullBit(oldp+75,(((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                               ? 1U : 0U)));
    tracep->fullBit(oldp+76,((((((2U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP)) 
                                 & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                    >> 0x1fU)) & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2 
                                                  >> 0x1fU)) 
                               & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                                     >> 0x1fU))) ? 1U
                               : (((((2U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP)) 
                                     & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                           >> 0x1fU))) 
                                    & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2 
                                          >> 0x1fU))) 
                                   & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                                      >> 0x1fU)) ? 1U
                                   : (((((6U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP)) 
                                         & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                            >> 0x1fU)) 
                                        & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2 
                                              >> 0x1fU))) 
                                       & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                                             >> 0x1fU)))
                                       ? 1U : (((((6U 
                                                   == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP)) 
                                                  & (~ 
                                                     (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                                      >> 0x1fU))) 
                                                 & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2 
                                                    >> 0x1fU)) 
                                                & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                                                   >> 0x1fU))
                                                ? 1U
                                                : 0U))))));
    tracep->fullIData(oldp+77,(((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),32);
    tracep->fullIData(oldp+78,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM),32);
    tracep->fullIData(oldp+79,(((IData)(4U) + (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                                               + (vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                                                  << 2U)))),32);
    tracep->fullIData(oldp+80,((vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                                << 2U)),32);
    tracep->fullIData(oldp+81,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA),32);
    tracep->fullBit(oldp+82,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL));
    tracep->fullCData(oldp+83,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID),5);
    tracep->fullCData(oldp+84,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID),5);
    tracep->fullCData(oldp+85,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID),5);
    tracep->fullCData(oldp+86,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT),3);
    tracep->fullIData(oldp+87,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA),32);
    tracep->fullBit(oldp+88,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD));
    tracep->fullBit(oldp+89,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR));
    tracep->fullBit(oldp+90,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW));
    tracep->fullCData(oldp+91,((vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                >> 0x1aU)),7);
    tracep->fullCData(oldp+92,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)),6);
    tracep->fullIData(oldp+93,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2),32);
    tracep->fullIData(oldp+94,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                               [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                                         >> 2U))]),32);
    tracep->fullIData(oldp+95,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0]),32);
    tracep->fullIData(oldp+96,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[1]),32);
    tracep->fullIData(oldp+97,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[2]),32);
    tracep->fullIData(oldp+98,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[3]),32);
    tracep->fullIData(oldp+99,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[4]),32);
    tracep->fullIData(oldp+100,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[5]),32);
    tracep->fullIData(oldp+101,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[6]),32);
    tracep->fullIData(oldp+102,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[7]),32);
    tracep->fullIData(oldp+103,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[8]),32);
    tracep->fullIData(oldp+104,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[9]),32);
    tracep->fullIData(oldp+105,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[10]),32);
    tracep->fullIData(oldp+106,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[11]),32);
    tracep->fullIData(oldp+107,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[12]),32);
    tracep->fullIData(oldp+108,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[13]),32);
    tracep->fullIData(oldp+109,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[14]),32);
    tracep->fullIData(oldp+110,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[15]),32);
    tracep->fullCData(oldp+111,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),6);
    tracep->fullIData(oldp+112,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW),32);
    tracep->fullIData(oldp+113,(((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW)
                                  ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                                 [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                                           >> 2U))]
                                  : vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)),32);
    tracep->fullCData(oldp+114,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL),2);
    tracep->fullIData(oldp+115,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0]),32);
    tracep->fullIData(oldp+116,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[1]),32);
    tracep->fullIData(oldp+117,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[2]),32);
    tracep->fullIData(oldp+118,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[3]),32);
    tracep->fullIData(oldp+119,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[4]),32);
    tracep->fullIData(oldp+120,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[5]),32);
    tracep->fullIData(oldp+121,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[6]),32);
    tracep->fullIData(oldp+122,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[7]),32);
    tracep->fullIData(oldp+123,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[8]),32);
    tracep->fullIData(oldp+124,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[9]),32);
    tracep->fullIData(oldp+125,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[10]),32);
    tracep->fullIData(oldp+126,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[11]),32);
    tracep->fullIData(oldp+127,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[12]),32);
    tracep->fullIData(oldp+128,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[13]),32);
    tracep->fullIData(oldp+129,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[14]),32);
    tracep->fullIData(oldp+130,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[15]),32);
    tracep->fullIData(oldp+131,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[16]),32);
    tracep->fullIData(oldp+132,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[17]),32);
    tracep->fullIData(oldp+133,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[18]),32);
    tracep->fullIData(oldp+134,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[19]),32);
    tracep->fullIData(oldp+135,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[20]),32);
    tracep->fullIData(oldp+136,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[21]),32);
    tracep->fullIData(oldp+137,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[22]),32);
    tracep->fullIData(oldp+138,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[23]),32);
    tracep->fullIData(oldp+139,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[24]),32);
    tracep->fullIData(oldp+140,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[25]),32);
    tracep->fullIData(oldp+141,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[26]),32);
    tracep->fullIData(oldp+142,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[27]),32);
    tracep->fullIData(oldp+143,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[28]),32);
    tracep->fullIData(oldp+144,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[29]),32);
    tracep->fullIData(oldp+145,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[30]),32);
    tracep->fullIData(oldp+146,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[31]),32);
    tracep->fullIData(oldp+147,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+148,(vlSelf->clk));
    tracep->fullBit(oldp+149,(vlSelf->rst));
    tracep->fullBit(oldp+150,(vlSelf->finish));
    tracep->fullIData(oldp+151,(0x20U),32);
    tracep->fullIData(oldp+152,(vlSelf->hw3_tb__DOT__tmp),32);
    tracep->fullIData(oldp+153,(8U),32);
    tracep->fullCData(oldp+154,(0U),3);
    tracep->fullCData(oldp+155,(1U),3);
    tracep->fullCData(oldp+156,(2U),3);
    tracep->fullCData(oldp+157,(3U),3);
    tracep->fullCData(oldp+158,(4U),3);
    tracep->fullCData(oldp+159,(0U),4);
    tracep->fullCData(oldp+160,(1U),4);
    tracep->fullCData(oldp+161,(2U),4);
    tracep->fullCData(oldp+162,(6U),4);
    tracep->fullCData(oldp+163,(0xcU),4);
    tracep->fullCData(oldp+164,(7U),4);
    tracep->fullCData(oldp+165,(8U),4);
    tracep->fullCData(oldp+166,(0xfU),4);
    tracep->fullIData(oldp+167,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select),32);
}
