// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"

#include "Vhw3_tb___024root.h"

VL_ATTR_COLD void Vhw3_tb___024root___initial__TOP__1(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0U] = 0x20080017U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[1U] = 0x2109002dU;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[2U] = 0xac090008U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[3U] = 0x8c0a0008U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[4U] = 0x214bffd3U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[5U] = 0x110b0001U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[6U] = 0xac080000U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[7U] = 0x8100007U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[8U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[9U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xaU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xbU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xcU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xdU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xeU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[0xfU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[1U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[2U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[3U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[4U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[5U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[6U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[7U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[8U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[9U] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0xaU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0xbU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0xcU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0xdU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0xeU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[0xfU] = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx = 0x10U;
    vlSelf->hw3_tb__DOT__cycle_count = 0U;
    vlSelf->finish = 0U;
    vlSelf->hw3_tb__DOT__start = 1U;
}

VL_ATTR_COLD void Vhw3_tb___024root___settle__TOP__4(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__imem_inst__rdata 
        = vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM
        [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                  >> 2U))];
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rdst_id = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_type = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr = 0ULL;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__op = 0xfU;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 1U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs2_id = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs1_id = 0U;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2 
        = ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs2_id))
            ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
           [(1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs2_id))]
            : 0U);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1 
        = vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
        [(1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs1_id))];
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
        = ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__op))
            ? (1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1 
                     | ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                         ? ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                             ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                             : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2))
                         : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm))))
            : (1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1 
                     & ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                         ? ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                             ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                             : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2))
                         : (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm)))));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__mux5_1_inst__pc_result 
        = ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
            ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
            : (((1U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select) 
                & ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                    ? 1U : 0U)) ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                : ((2U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                    ? (1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr))
                    : ((3U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                        ? (1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1)
                        : (1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr))))));
}

VL_ATTR_COLD void Vhw3_tb___024root___eval_initial(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval_initial\n"); );
    // Body
    Vhw3_tb___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vhw3_tb___024root___eval_settle(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval_settle\n"); );
    // Body
    Vhw3_tb___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vhw3_tb___024root___final(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___final\n"); );
}

VL_ATTR_COLD void Vhw3_tb___024root___ctor_var_reset(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->finish = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__cycle_count = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->hw3_tb__DOT__golden_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->hw3_tb__DOT__golden_dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->hw3_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__imem_inst__rdata = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rdst_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs2_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs1_id = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__op = VL_RAND_RESET_I(4);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr = VL_RAND_RESET_Q(33);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_type = VL_RAND_RESET_I(3);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2 = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1 = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT____Vcellout__mux5_1_inst__pc_result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
