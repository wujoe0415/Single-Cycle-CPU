// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhw3_tb.h for the primary calling header

#include "verilated.h"

#include "Vhw3_tb___024root.h"

VL_INLINE_OPT void Vhw3_tb___024root___sequent__TOP__2(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vdly__hw3_tb__DOT__cycle_count;
    // Body
    __Vdly__hw3_tb__DOT__cycle_count = vlSelf->hw3_tb__DOT__cycle_count;
    if (VL_UNLIKELY(vlSelf->hw3_tb__DOT__start)) {
        VL_WRITEF("\033[0;38;5;111m[Pattern]\033[m\n");
        vlSelf->hw3_tb__DOT__start = 0U;
        __Vdly__hw3_tb__DOT__cycle_count = 0U;
    } else if (VL_UNLIKELY((8U == vlSelf->hw3_tb__DOT__cycle_count))) {
        vlSelf->hw3_tb__DOT__golden_reg[0U] = 0U;
        vlSelf->hw3_tb__DOT__i = 0x10U;
        vlSelf->finish = 1U;
        vlSelf->hw3_tb__DOT__golden_reg[1U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[2U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[3U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[4U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[5U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[6U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[7U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[8U] = 0x17U;
        vlSelf->hw3_tb__DOT__golden_reg[9U] = 0x44U;
        vlSelf->hw3_tb__DOT__golden_reg[0xaU] = 0x44U;
        vlSelf->hw3_tb__DOT__golden_reg[0xbU] = 0x17U;
        vlSelf->hw3_tb__DOT__golden_reg[0xcU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0xdU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0xeU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0xfU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x10U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x11U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x12U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x13U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x14U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x15U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x16U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x17U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x18U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x19U] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x1aU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x1bU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x1cU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x1dU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x1eU] = 0U;
        vlSelf->hw3_tb__DOT__golden_reg[0x1fU] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[0U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[1U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[2U] = 0x44U;
        vlSelf->hw3_tb__DOT__golden_dmem[3U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[4U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[5U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[6U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[7U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[8U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[9U] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[0xaU] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[0xbU] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[0xcU] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[0xdU] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[0xeU] = 0U;
        vlSelf->hw3_tb__DOT__golden_dmem[0xfU] = 0U;
        VL_WRITEF("Check reg[ 0] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 1] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[1U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [1U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [1U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [1U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 2] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[2U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [2U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [2U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [2U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 3] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[3U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [3U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [3U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [3U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 4] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[4U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [4U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [4U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [4U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 5] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[5U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [5U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [5U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [5U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 6] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[6U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [6U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [6U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [6U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 7] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[7U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [7U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [7U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [7U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 8] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[8U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [8U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [8U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [8U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[ 9] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[9U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [9U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [9U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [9U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[10] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0xaU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0xaU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0xaU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0xaU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[11] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0xbU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0xbU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0xbU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0xbU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[12] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0xcU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0xcU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0xcU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0xcU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[13] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0xdU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0xdU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0xdU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0xdU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[14] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0xeU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0xeU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0xeU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0xeU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[15] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0xfU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0xfU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0xfU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0xfU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[16] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x10U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x10U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x10U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x10U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[17] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x11U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x11U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x11U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x11U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[18] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x12U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x12U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x12U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x12U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[19] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x13U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x13U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x13U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x13U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[20] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x14U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x14U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x14U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x14U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[21] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x15U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x15U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x15U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x15U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[22] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x16U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x16U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x16U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x16U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[23] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x17U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x17U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x17U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x17U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[24] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x18U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x18U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x18U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x18U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[25] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x19U] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x19U])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x19U],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x19U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[26] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x1aU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x1aU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x1aU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x1aU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[27] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x1bU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x1bU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x1bU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x1bU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[28] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x1cU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x1cU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x1cU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x1cU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[29] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x1dU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x1dU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x1dU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x1dU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[30] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x1eU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x1eU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x1eU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x1eU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check reg[31] : ");
        if ((vlSelf->hw3_tb__DOT__golden_reg[0x1fU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
             [0x1fU])) {
            VL_WRITEF("Failed\n  Your reg : %10#, Golden reg : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R
                      [0x1fU],32,vlSelf->hw3_tb__DOT__golden_reg
                      [0x1fU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 0] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[0U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [0U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [0U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [0U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 1] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[1U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [1U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [1U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [1U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 2] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[2U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [2U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [2U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [2U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 3] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[3U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [3U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [3U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [3U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 4] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[4U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [4U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [4U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [4U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 5] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[5U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [5U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [5U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [5U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 6] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[6U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [6U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [6U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [6U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 7] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[7U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [7U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [7U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [7U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 8] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[8U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [8U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [8U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [8U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[ 9] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[9U] != 
             vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [9U])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [9U],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [9U]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[10] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[0xaU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [0xaU])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [0xaU],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [0xaU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[11] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[0xbU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [0xbU])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [0xbU],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [0xbU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[12] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[0xcU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [0xcU])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [0xcU],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [0xcU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[13] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[0xdU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [0xdU])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [0xdU],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [0xdU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[14] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[0xeU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [0xeU])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [0xeU],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [0xeU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_WRITEF("Check dmem[15] : ");
        if ((vlSelf->hw3_tb__DOT__golden_dmem[0xfU] 
             != vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
             [0xfU])) {
            VL_WRITEF("Failed\n  Your dmem : %10#, Golden dmem : %10#\n",
                      32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                      [0xfU],32,vlSelf->hw3_tb__DOT__golden_dmem
                      [0xfU]);
        } else {
            VL_WRITEF("Pass\n");
        }
        VL_FINISH_MT("hw3_tb.v", 43, "");
        VL_FINISH_MT("hw3_tb.v", 44, "");
    } else {
        __Vdly__hw3_tb__DOT__cycle_count = ((IData)(1U) 
                                            + vlSelf->hw3_tb__DOT__cycle_count);
    }
    vlSelf->hw3_tb__DOT__cycle_count = __Vdly__hw3_tb__DOT__cycle_count;
}

VL_INLINE_OPT void Vhw3_tb___024root___sequent__TOP__3(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___sequent__TOP__3\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0;
    IData/*31:0*/ __Vdlyvval__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0;
    CData/*0:0*/ __Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0;
    CData/*3:0*/ __Vdlyvdim0__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0;
    IData/*31:0*/ __Vdlyvval__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0;
    CData/*0:0*/ __Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0;
    // Body
    __Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0 = 0U;
    __Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0 = 0U;
    if (vlSelf->rst) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i = 0x20U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[1U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[2U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[3U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[4U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[5U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[6U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[7U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[8U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[9U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xaU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xbU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xcU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xdU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xeU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0xfU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x10U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x11U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x12U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x13U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x14U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x15U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x16U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x17U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x18U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x19U] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1aU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1bU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1cU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1dU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1eU] = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[0x1fU] = 0U;
    }
    if (vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD) {
        __Vdlyvval__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0 
            = vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2;
        __Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0 = 1U;
        __Vdlyvdim0__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0 
            = (0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                       >> 2U));
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR) 
             & (0U != (IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID)))) {
            __Vdlyvval__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0 
                = ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW)
                    ? vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM
                   [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result 
                             >> 2U))] : vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result);
            __Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0 = 1U;
            __Vdlyvdim0__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0 
                = vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID;
        }
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc = ((IData)(vlSelf->rst)
                                                    ? 0U
                                                    : vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc_in);
    if (__Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM[__Vdlyvdim0__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0] 
            = __Vdlyvval__hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM__v0;
    }
    if (__Vdlyvset__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R[__Vdlyvdim0__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0] 
            = __Vdlyvval__hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R__v0;
    }
    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
        = vlSelf->hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM
        [(0xfU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                  >> 2U))];
    VL_WRITEF("%3#\n",7,(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                         >> 0x1aU));
    if ((vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        } else if ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
            } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                if (VL_UNLIKELY((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA))) {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                    >> 0x15U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
                        = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                    >> 0x10U));
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 2U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 1U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 1U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                        = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
                    VL_WRITEF("%2#%2#%10#\n",5,vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID,
                              5,(IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID),
                              32,vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM);
                } else {
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
                    vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
                }
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
            }
        } else if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                    = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 2U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 1U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 1U;
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
            }
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        }
    } else if ((0x40000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
    } else if ((0x20000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                >> 0x15U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
                    = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                >> 0x10U));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                    = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                          >> 0xfU)))) 
                        << 0x10U) | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 7U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
            }
        } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                            >> 0x10U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 2U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 1U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        }
    } else if ((0x10000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                            >> 0x15U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
                = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                            >> 0x10U));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                = (((- (IData)((1U & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA));
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 6U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 1U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        }
    } else if ((0x8000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA 
                = (0x3ffffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 3U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 1U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA 
                = (0x3ffffffU & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA);
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 4U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        }
    } else if ((0x4000000U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
    } else {
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1_ID 
            = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                        >> 0x15U));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2_ID 
            = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                        >> 0x10U));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDST_ID 
            = (0x1fU & (vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA 
                        >> 0xbU));
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL = 1U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WD = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___LW = 0U;
        vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 1U;
        if ((0x20U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP 
                = ((0x10U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)
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
                                           ? 0xfU : 2U)))));
        } else if ((0x10U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
        } else if ((8U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
            if ((4U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            } else if ((2U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            } else if ((1U & vlSelf->hw3_tb__DOT__core_top_inst__DOT___RDATA)) {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
            } else {
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 8U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___JT = 3U;
                vlSelf->hw3_tb__DOT__core_top_inst__DOT___WR = 0U;
            }
        } else {
            vlSelf->hw3_tb__DOT__core_top_inst__DOT___OP = 0xfU;
        }
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
        = ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
            ? ((IData)(vlSelf->hw3_tb__DOT__core_top_inst__DOT___SSEL)
                ? ((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
                : vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS2)
            : vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM);
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
    VL_WRITEF("%10#%11d%11d\n",32,vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result,
              32,vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1,
              32,vlSelf->hw3_tb__DOT__core_top_inst__DOT___ALU_RS2);
    vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc_in 
        = ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
            ? ((IData)(4U) + vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc)
            : (((1U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select) 
                & ((0U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result)
                    ? 1U : 0U)) ? ((IData)(4U) + (vlSelf->hw3_tb__DOT__core_top_inst__DOT__pc 
                                                  + 
                                                  (vlSelf->hw3_tb__DOT__core_top_inst__DOT___IMM 
                                                   << 2U)))
                : ((2U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                    ? vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA
                    : ((3U == vlSelf->hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select)
                        ? vlSelf->hw3_tb__DOT__core_top_inst__DOT___RS1
                        : vlSelf->hw3_tb__DOT__core_top_inst__DOT___JA))));
}

void Vhw3_tb___024root___eval(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vhw3_tb___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vhw3_tb___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vhw3_tb___024root___eval_debug_assertions(Vhw3_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhw3_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhw3_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
