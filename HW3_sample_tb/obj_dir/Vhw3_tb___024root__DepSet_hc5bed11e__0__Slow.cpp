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
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
        = vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM
        [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                  >> 2U))];
    VL_WRITEF("%3#\n",7,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                         >> 0x1aU));
    if ((vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
         >> 0x1fU)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                         ? 0U : ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                  ? 0U : ((0x10000000U 
                                           & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                           ? 0U : (
                                                   (0x8000000U 
                                                    & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                     ? 
                                                    (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                                     >> 0x10U)
                                                     : 0U)
                                                    : 0U)))));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR 
            = (IData)((0xc000000U == (0x7c000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        if ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                = (0x1fU & 0U);
        } else if ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                    = (0x1fU & 0U);
            } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 2U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                        = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                    >> 0x15U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                    >> 0x10U));
                } else {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                        = (0x1fU & 0U);
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                        = (0x1fU & 0U);
                }
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & 0U);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                    = (0x1fU & 0U);
            }
        } else {
            if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & 0U);
            } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 2U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                        = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                    >> 0x15U));
                } else {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                        = (0x1fU & 0U);
                }
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & 0U);
            }
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                = (0x1fU & 0U);
        }
    } else if ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
            = (0x1fU & 0U);
    } else if ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                         ? 0U : ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                  ? ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                      ? 0U : (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                              >> 0x10U))
                                  : ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                      ? 0U : (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                              >> 0x10U)))));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR 
            = (IData)((0U == (0x1c000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & 0U);
        } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & 0U);
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 7U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                    = (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA);
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                >> 0x15U));
            }
        } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & 0U);
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 2U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                            >> 0x15U));
        }
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
            = (0x1fU & 0U);
    } else if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
        if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                = (0x1fU & 0U);
        } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & 0U);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                = (0x1fU & 0U);
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 1U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 6U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 2U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                            >> 0x10U));
        }
    } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                         ? 0x1fU : 0U));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR 
            = (1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                     >> 0x1aU));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 2U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
            = (0x1fU & 0U);
    } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
            = (0x1fU & 0U);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
            = (0x1fU & 0U);
    } else {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                        >> 0xbU));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 1U;
        if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                          >> 4U)))) {
                if ((8U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                    if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA))) {
                                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
                                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 3U;
                            } else {
                                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                            }
                        } else {
                            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                        }
                    } else {
                        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                    }
                } else {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                }
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            }
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        }
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP 
            = ((0x20U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                ? ((0x10U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                    ? 0xfU : ((8U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                               ? ((4U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                   ? 0xfU : ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                              ? ((1U 
                                                  & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                  ? 0xfU
                                                  : 7U)
                                              : 0xfU))
                               : ((4U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                   ? ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                       ? ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                           ? 0xcU : 0xfU)
                                       : ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                           ? 1U : 0U))
                                   : ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                       ? ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                           ? 0xfU : 6U)
                                       : ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                           ? 0xfU : 2U)))))
                : 0xfU);
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 2U;
        if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                          >> 4U)))) {
                if ((8U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                    if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA))) {
                                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
            = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                        >> 0x15U));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
            = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                        >> 0x10U));
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 = 
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
        [vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID];
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2 = 
        ((0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID))
          ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
         [vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID]
          : 0U);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2 
        = ((0U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL))
            ? vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM
            : ((1U == (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL))
                ? ((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                : vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
        = ((8U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
            ? ((4U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                ? ((2U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                    ? 0U : ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                             ? 0U : (~ (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                        | vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2))))
                : 0U) : ((4U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                          ? ((2U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                              ? ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                                  ? (VL_LTS_III(32, vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1, vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2)
                                      ? 1U : 0U) : 
                                 (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                  - vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2))
                              : 0U) : ((2U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                                        ? ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                                            ? 0U : 
                                           (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                            + vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2))
                                        : ((1U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP))
                                            ? (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                               | vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2)
                                            : (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 
                                               & vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2)))));
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc_in 
        = (((1U == (3U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT))) 
            & ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                ? 1U : 0U)) ? ((IData)(4U) + (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                                              + (vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                                                 << 2U)))
            : ((2U == (3U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT)))
                ? ((vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                    >> 0x1fU) ? 0U : ((0x40000000U 
                                       & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                       ? 0U : ((0x20000000U 
                                                & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                ? 0U
                                                : (
                                                   (0x10000000U 
                                                    & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                    ? 0U
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                     ? 
                                                    ((0x4000000U 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                      ? 
                                                     (0x3ffffffU 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
                                                      : 
                                                     (0x3ffffffU 
                                                      & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA))
                                                     : 0U)))))
                : ((3U == (3U & (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT)))
                    ? vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1
                    : ((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc))));
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
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc_in = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = VL_RAND_RESET_I(3);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = VL_RAND_RESET_I(4);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = VL_RAND_RESET_I(2);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = VL_RAND_RESET_I(1);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = VL_RAND_RESET_I(5);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1 = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2 = VL_RAND_RESET_I(32);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2 = VL_RAND_RESET_I(32);
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
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
