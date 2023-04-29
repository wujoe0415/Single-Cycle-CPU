// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhw3_tb.h for the primary calling header

#ifndef VERILATED_VHW3_TB___024ROOT_H_
#define VERILATED_VHW3_TB___024ROOT_H_  // guard

#include "verilated.h"

class Vhw3_tb__Syms;
VL_MODULE(Vhw3_tb___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(finish,0,0);
    CData/*0:0*/ hw3_tb__DOT__start;
    CData/*0:0*/ hw3_tb__DOT__core_top_inst__DOT___SSEL;
    CData/*4:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rdst_id;
    CData/*4:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs2_id;
    CData/*4:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__rs1_id;
    CData/*3:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__op;
    CData/*2:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_type;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ hw3_tb__DOT__i;
    IData/*31:0*/ hw3_tb__DOT__tmp;
    IData/*31:0*/ hw3_tb__DOT__cycle_count;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT__pc;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__imem_inst__rdata;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__imm;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs2;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__reg_file_inst__rs1;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__mux5_1_inst__pc_result;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT__alu_inst__DOT__ALU_Result;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__idx;
    IData/*31:0*/ hw3_tb__DOT__core_top_inst__DOT__mux5_1_inst__DOT__select;
    QData/*32:0*/ hw3_tb__DOT__core_top_inst__DOT____Vcellout__decode_inst__jump_addr;
    VlUnpacked<IData/*31:0*/, 32> hw3_tb__DOT__golden_reg;
    VlUnpacked<IData/*31:0*/, 16> hw3_tb__DOT__golden_dmem;
    VlUnpacked<IData/*31:0*/, 16> hw3_tb__DOT__core_top_inst__DOT__imem_inst__DOT__RAM;
    VlUnpacked<IData/*31:0*/, 32> hw3_tb__DOT__core_top_inst__DOT__reg_file_inst__DOT__R;
    VlUnpacked<IData/*31:0*/, 16> hw3_tb__DOT__core_top_inst__DOT__dmem_inst__DOT__RAM;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vhw3_tb__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vhw3_tb___024root(const char* name);
    ~Vhw3_tb___024root();
    VL_UNCOPYABLE(Vhw3_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vhw3_tb__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
