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
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"rst", false,-1);
    tracep->declBit(c+167,"finish", false,-1);
    tracep->pushNamePrefix("hw3_tb ");
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"rst", false,-1);
    tracep->declBit(c+167,"finish", false,-1);
    tracep->declBus(c+168,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"i", false,-1, 31,0);
    tracep->declBus(c+169,"tmp", false,-1, 31,0);
    tracep->declBus(c+19,"cycle_count", false,-1, 31,0);
    tracep->declBus(c+170,"cycle_for_ans", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+20+i*1,"golden_reg", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+52+i*1,"golden_dmem", true,(i+0), 31,0);
    }
    tracep->declBit(c+68,"start", false,-1);
    tracep->pushNamePrefix("core_top_inst ");
    tracep->declBus(c+168,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"rst", false,-1);
    tracep->declBus(c+171,"J_TYPE_NOP", false,-1, 2,0);
    tracep->declBus(c+172,"J_TYPE_BEQ", false,-1, 2,0);
    tracep->declBus(c+173,"J_TYPE_JAL", false,-1, 2,0);
    tracep->declBus(c+174,"J_TYPE_JR", false,-1, 2,0);
    tracep->declBus(c+175,"J_TYPE_J", false,-1, 2,0);
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBit(c+70,"pc_in", false,-1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+168,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"op", false,-1, 3,0);
    tracep->declBus(c+72,"rs1", false,-1, 31,0);
    tracep->declBus(c+73,"rs2", false,-1, 31,0);
    tracep->declBus(c+74,"rd", false,-1, 31,0);
    tracep->declBit(c+75,"zero", false,-1);
    tracep->declBit(c+176,"overflow", false,-1);
    tracep->declBus(c+74,"ALU_Result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_adder_inst ");
    tracep->declBus(c+76,"pc", false,-1, 31,0);
    tracep->declBus(c+77,"decode", false,-1, 31,0);
    tracep->declBus(c+78,"result", false,-1, 31,0);
    tracep->declBus(c+79,"decode_shift", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_inst ");
    tracep->declBus(c+168,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+80,"instr", false,-1, 31,0);
    tracep->declBus(c+81,"op", false,-1, 3,0);
    tracep->declBit(c+82,"ssel", false,-1);
    tracep->declBus(c+83,"imm", false,-1, 31,0);
    tracep->declBus(c+84,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+85,"rs2_id", false,-1, 4,0);
    tracep->declBus(c+86,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+87,"jump_type", false,-1, 2,0);
    tracep->declQuad(c+88,"jump_addr", false,-1, 32,0);
    tracep->declBit(c+90,"we_dmem", false,-1);
    tracep->declBit(c+91,"we_regfile", false,-1);
    tracep->declBit(c+92,"is_load", false,-1);
    tracep->declBus(c+177,"OP_AND", false,-1, 3,0);
    tracep->declBus(c+178,"OP_OR", false,-1, 3,0);
    tracep->declBus(c+179,"OP_ADD", false,-1, 3,0);
    tracep->declBus(c+180,"OP_SUB", false,-1, 3,0);
    tracep->declBus(c+181,"OP_NOR", false,-1, 3,0);
    tracep->declBus(c+182,"OP_SLT", false,-1, 3,0);
    tracep->declBus(c+183,"OP_JR", false,-1, 3,0);
    tracep->declBus(c+184,"OP_NOT_DEFINED", false,-1, 3,0);
    tracep->declBus(c+93,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmem_inst ");
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBus(c+94,"addr", false,-1, 5,0);
    tracep->declBit(c+90,"we", false,-1);
    tracep->declBus(c+95,"wdata", false,-1, 31,0);
    tracep->declBus(c+96,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+97+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"idx", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imem_inst ");
    tracep->declBus(c+113,"addr", false,-1, 5,0);
    tracep->declBus(c+114,"rdata", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+2+i*1,"RAM", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2_1_inst ");
    tracep->declBus(c+115,"alu_rd", false,-1, 31,0);
    tracep->declBus(c+116,"dmem_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"decode_lw", false,-1, 31,0);
    tracep->declBus(c+118,"reg_rdst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux4_1_inst ");
    tracep->declBus(c+119,"decode_ssel", false,-1, 1,0);
    tracep->declBus(c+77,"decode_imm", false,-1, 31,0);
    tracep->declBus(c+76,"addr_ra", false,-1, 31,0);
    tracep->declBus(c+95,"reg_rs2", false,-1, 31,0);
    tracep->declBus(c+120,"alu_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux5_1_inst ");
    tracep->declBit(c+75,"is_zero", false,-1);
    tracep->declBus(c+121,"jump_type", false,-1, 2,0);
    tracep->declBus(c+76,"adder_result1", false,-1, 31,0);
    tracep->declBus(c+122,"jump_address", false,-1, 31,0);
    tracep->declBus(c+76,"adder_result2", false,-1, 31,0);
    tracep->declBus(c+123,"jr_address", false,-1, 31,0);
    tracep->declBus(c+124,"pc_result", false,-1, 31,0);
    tracep->declBus(c+185,"select", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_adder_inst ");
    tracep->declBus(c+69,"pc", false,-1, 31,0);
    tracep->declBus(c+125,"result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_file_inst ");
    tracep->declBus(c+168,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+165,"clk", false,-1);
    tracep->declBit(c+166,"rst", false,-1);
    tracep->declBus(c+126,"rs1_id", false,-1, 4,0);
    tracep->declBus(c+127,"rs2_id", false,-1, 4,0);
    tracep->declBit(c+91,"we", false,-1);
    tracep->declBus(c+128,"rdst_id", false,-1, 4,0);
    tracep->declBus(c+129,"rdst", false,-1, 31,0);
    tracep->declBus(c+130,"rs1", false,-1, 31,0);
    tracep->declBus(c+131,"rs2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+132+i*1,"R", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+164,"i", false,-1, 31,0);
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
    tracep->fullBit(oldp+70,((1U & ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                     ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                                     : (((1U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select) 
                                         & ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                                             ? 1U : 0U))
                                         ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                                         : ((2U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                             ? (1U 
                                                & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr))
                                             : ((3U 
                                                 == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                                 ? 
                                                (1U 
                                                 & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1)
                                                 : 
                                                (1U 
                                                 & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr)))))))));
    tracep->fullCData(oldp+71,((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__op))),4);
    tracep->fullIData(oldp+72,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1)),32);
    tracep->fullIData(oldp+73,((1U & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                                       ? ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                                           ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                                           : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2))
                                       : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm)))),32);
    tracep->fullIData(oldp+74,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result),32);
    tracep->fullBit(oldp+75,(((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                               ? 1U : 0U)));
    tracep->fullIData(oldp+76,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),32);
    tracep->fullIData(oldp+77,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm)),32);
    tracep->fullIData(oldp+78,(((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc) 
                                + (4U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm 
                                         << 2U)))),32);
    tracep->fullIData(oldp+79,((4U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm 
                                      << 2U))),32);
    tracep->fullIData(oldp+80,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__imem_inst__rdata)),32);
    tracep->fullCData(oldp+81,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__op),4);
    tracep->fullBit(oldp+82,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL));
    tracep->fullIData(oldp+83,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm),32);
    tracep->fullCData(oldp+84,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs1_id),5);
    tracep->fullCData(oldp+85,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs2_id),5);
    tracep->fullCData(oldp+86,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rdst_id),5);
    tracep->fullCData(oldp+87,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_type),3);
    tracep->fullQData(oldp+88,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr),33);
    tracep->fullBit(oldp+90,(0U));
    tracep->fullBit(oldp+91,(0U));
    tracep->fullBit(oldp+92,(0U));
    tracep->fullCData(oldp+93,(0U),7);
    tracep->fullCData(oldp+94,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)),6);
    tracep->fullIData(oldp+95,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2)),32);
    tracep->fullIData(oldp+96,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                               [0U]),32);
    tracep->fullIData(oldp+97,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0]),32);
    tracep->fullIData(oldp+98,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[1]),32);
    tracep->fullIData(oldp+99,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[2]),32);
    tracep->fullIData(oldp+100,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[3]),32);
    tracep->fullIData(oldp+101,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[4]),32);
    tracep->fullIData(oldp+102,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[5]),32);
    tracep->fullIData(oldp+103,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[6]),32);
    tracep->fullIData(oldp+104,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[7]),32);
    tracep->fullIData(oldp+105,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[8]),32);
    tracep->fullIData(oldp+106,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[9]),32);
    tracep->fullIData(oldp+107,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[10]),32);
    tracep->fullIData(oldp+108,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[11]),32);
    tracep->fullIData(oldp+109,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[12]),32);
    tracep->fullIData(oldp+110,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[13]),32);
    tracep->fullIData(oldp+111,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[14]),32);
    tracep->fullIData(oldp+112,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[15]),32);
    tracep->fullCData(oldp+113,((0x3fU & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),6);
    tracep->fullIData(oldp+114,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__imem_inst__rdata),32);
    tracep->fullIData(oldp+115,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)),32);
    tracep->fullIData(oldp+116,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                                 [0U])),32);
    tracep->fullIData(oldp+117,(0U),32);
    tracep->fullIData(oldp+118,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)),32);
    tracep->fullCData(oldp+119,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL),2);
    tracep->fullIData(oldp+120,(((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                                  ? ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                                      ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                                      : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2))
                                  : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm))),32);
    tracep->fullCData(oldp+121,((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_type))),3);
    tracep->fullIData(oldp+122,((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr))),32);
    tracep->fullIData(oldp+123,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1)),32);
    tracep->fullIData(oldp+124,(((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                  ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                                  : (((1U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select) 
                                      & ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                                          ? 1U : 0U))
                                      ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                                      : ((2U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                          ? (1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr))
                                          : ((3U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                                              ? (1U 
                                                 & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1)
                                              : (1U 
                                                 & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr))))))),32);
    tracep->fullIData(oldp+125,(((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)),32);
    tracep->fullCData(oldp+126,((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs1_id))),5);
    tracep->fullCData(oldp+127,((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs2_id))),5);
    tracep->fullCData(oldp+128,((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rdst_id))),5);
    tracep->fullIData(oldp+129,((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)),32);
    tracep->fullIData(oldp+130,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1),32);
    tracep->fullIData(oldp+131,(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2),32);
    tracep->fullIData(oldp+132,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0]),32);
    tracep->fullIData(oldp+133,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[1]),32);
    tracep->fullIData(oldp+134,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[2]),32);
    tracep->fullIData(oldp+135,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[3]),32);
    tracep->fullIData(oldp+136,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[4]),32);
    tracep->fullIData(oldp+137,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[5]),32);
    tracep->fullIData(oldp+138,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[6]),32);
    tracep->fullIData(oldp+139,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[7]),32);
    tracep->fullIData(oldp+140,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[8]),32);
    tracep->fullIData(oldp+141,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[9]),32);
    tracep->fullIData(oldp+142,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[10]),32);
    tracep->fullIData(oldp+143,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[11]),32);
    tracep->fullIData(oldp+144,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[12]),32);
    tracep->fullIData(oldp+145,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[13]),32);
    tracep->fullIData(oldp+146,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[14]),32);
    tracep->fullIData(oldp+147,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[15]),32);
    tracep->fullIData(oldp+148,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[16]),32);
    tracep->fullIData(oldp+149,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[17]),32);
    tracep->fullIData(oldp+150,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[18]),32);
    tracep->fullIData(oldp+151,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[19]),32);
    tracep->fullIData(oldp+152,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[20]),32);
    tracep->fullIData(oldp+153,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[21]),32);
    tracep->fullIData(oldp+154,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[22]),32);
    tracep->fullIData(oldp+155,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[23]),32);
    tracep->fullIData(oldp+156,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[24]),32);
    tracep->fullIData(oldp+157,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[25]),32);
    tracep->fullIData(oldp+158,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[26]),32);
    tracep->fullIData(oldp+159,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[27]),32);
    tracep->fullIData(oldp+160,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[28]),32);
    tracep->fullIData(oldp+161,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[29]),32);
    tracep->fullIData(oldp+162,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[30]),32);
    tracep->fullIData(oldp+163,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[31]),32);
    tracep->fullIData(oldp+164,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i),32);
    tracep->fullBit(oldp+165,(vlSelf->clk));
    tracep->fullBit(oldp+166,(vlSelf->rst));
    tracep->fullBit(oldp+167,(vlSelf->finish));
    tracep->fullIData(oldp+168,(0x20U),32);
    tracep->fullIData(oldp+169,(vlSelf->hw3_tb__DOT__tmp),32);
    tracep->fullIData(oldp+170,(8U),32);
    tracep->fullCData(oldp+171,(0U),3);
    tracep->fullCData(oldp+172,(1U),3);
    tracep->fullCData(oldp+173,(2U),3);
    tracep->fullCData(oldp+174,(3U),3);
    tracep->fullCData(oldp+175,(4U),3);
    tracep->fullBit(oldp+176,(0U));
    tracep->fullCData(oldp+177,(0U),4);
    tracep->fullCData(oldp+178,(1U),4);
    tracep->fullCData(oldp+179,(2U),4);
    tracep->fullCData(oldp+180,(6U),4);
    tracep->fullCData(oldp+181,(0xcU),4);
    tracep->fullCData(oldp+182,(7U),4);
    tracep->fullCData(oldp+183,(8U),4);
    tracep->fullCData(oldp+184,(0xfU),4);
    tracep->fullIData(oldp+185,(vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select),32);
}
