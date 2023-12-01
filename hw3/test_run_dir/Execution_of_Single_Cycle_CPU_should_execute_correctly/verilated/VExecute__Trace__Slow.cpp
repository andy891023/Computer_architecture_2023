// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExecute__Syms.h"


//======================

void VExecute::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VExecute::traceInit, &VExecute::traceFull, &VExecute::traceChg, this);
}
void VExecute::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VExecute* t = (VExecute*)userthis;
    VExecute__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VExecute::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VExecute* t = (VExecute*)userthis;
    VExecute__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VExecute::traceInitThis(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VExecute::traceFullThis(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VExecute::traceInitThis__1(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+33,"clock", false,-1);
        vcdp->declBit(c+41,"reset", false,-1);
        vcdp->declBus(c+49,"io_instruction", false,-1, 31,0);
        vcdp->declBus(c+57,"io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+65,"io_reg1_data", false,-1, 31,0);
        vcdp->declBus(c+73,"io_reg2_data", false,-1, 31,0);
        vcdp->declBus(c+81,"io_immediate", false,-1, 31,0);
        vcdp->declBit(c+89,"io_aluop1_source", false,-1);
        vcdp->declBit(c+97,"io_aluop2_source", false,-1);
        vcdp->declBus(c+105,"io_mem_alu_result", false,-1, 31,0);
        vcdp->declBit(c+113,"io_if_jump_flag", false,-1);
        vcdp->declBus(c+121,"io_if_jump_address", false,-1, 31,0);
        vcdp->declBit(c+33,"Execute clock", false,-1);
        vcdp->declBit(c+41,"Execute reset", false,-1);
        vcdp->declBus(c+49,"Execute io_instruction", false,-1, 31,0);
        vcdp->declBus(c+57,"Execute io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+65,"Execute io_reg1_data", false,-1, 31,0);
        vcdp->declBus(c+73,"Execute io_reg2_data", false,-1, 31,0);
        vcdp->declBus(c+81,"Execute io_immediate", false,-1, 31,0);
        vcdp->declBit(c+89,"Execute io_aluop1_source", false,-1);
        vcdp->declBit(c+97,"Execute io_aluop2_source", false,-1);
        vcdp->declBus(c+105,"Execute io_mem_alu_result", false,-1, 31,0);
        vcdp->declBit(c+113,"Execute io_if_jump_flag", false,-1);
        vcdp->declBus(c+121,"Execute io_if_jump_address", false,-1, 31,0);
        vcdp->declBus(c+1,"Execute alu_io_func", false,-1, 3,0);
        vcdp->declBus(c+9,"Execute alu_io_op1", false,-1, 31,0);
        vcdp->declBus(c+17,"Execute alu_io_op2", false,-1, 31,0);
        vcdp->declBus(c+25,"Execute alu_io_result", false,-1, 31,0);
        vcdp->declBus(c+129,"Execute alu_ctrl_io_opcode", false,-1, 6,0);
        vcdp->declBus(c+137,"Execute alu_ctrl_io_funct3", false,-1, 2,0);
        vcdp->declBus(c+145,"Execute alu_ctrl_io_funct7", false,-1, 6,0);
        vcdp->declBus(c+1,"Execute alu_ctrl_io_alu_funct", false,-1, 3,0);
        vcdp->declBus(c+129,"Execute opcode", false,-1, 6,0);
        vcdp->declBus(c+137,"Execute funct3", false,-1, 2,0);
        vcdp->declBus(c+1,"Execute alu io_func", false,-1, 3,0);
        vcdp->declBus(c+9,"Execute alu io_op1", false,-1, 31,0);
        vcdp->declBus(c+17,"Execute alu io_op2", false,-1, 31,0);
        vcdp->declBus(c+25,"Execute alu io_result", false,-1, 31,0);
        vcdp->declBus(c+129,"Execute alu_ctrl io_opcode", false,-1, 6,0);
        vcdp->declBus(c+137,"Execute alu_ctrl io_funct3", false,-1, 2,0);
        vcdp->declBus(c+145,"Execute alu_ctrl io_funct7", false,-1, 6,0);
        vcdp->declBus(c+1,"Execute alu_ctrl io_alu_funct", false,-1, 3,0);
    }
}

void VExecute::traceFullThis__1(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct),4);
        vcdp->fullBus(c+9,(vlTOPp->Execute__DOT__alu_io_op1),32);
        vcdp->fullBus(c+17,(vlTOPp->Execute__DOT__alu_io_op2),32);
        vcdp->fullBus(c+25,((IData)((VL_ULL(0x7fffffffffffffff) 
                                     & ((1U == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                         ? (QData)((IData)(
                                                           (vlTOPp->Execute__DOT__alu_io_op1 
                                                            + vlTOPp->Execute__DOT__alu_io_op2)))
                                         : ((2U == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                             ? (QData)((IData)(
                                                               (vlTOPp->Execute__DOT__alu_io_op1 
                                                                - vlTOPp->Execute__DOT__alu_io_op2)))
                                             : ((3U 
                                                 == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                 ? 
                                                ((QData)((IData)(vlTOPp->Execute__DOT__alu_io_op1)) 
                                                 << 
                                                 (0x1fU 
                                                  & vlTOPp->Execute__DOT__alu_io_op2))
                                                 : (QData)((IData)(
                                                                   ((4U 
                                                                     == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                     ? 
                                                                    VL_LTS_III(32,32,32, vlTOPp->Execute__DOT__alu_io_op1, vlTOPp->Execute__DOT__alu_io_op2)
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                      ? 
                                                                     (vlTOPp->Execute__DOT__alu_io_op1 
                                                                      ^ vlTOPp->Execute__DOT__alu_io_op2)
                                                                      : 
                                                                     ((6U 
                                                                       == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                       ? 
                                                                      (vlTOPp->Execute__DOT__alu_io_op1 
                                                                       | vlTOPp->Execute__DOT__alu_io_op2)
                                                                       : 
                                                                      ((7U 
                                                                        == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                        ? 
                                                                       (vlTOPp->Execute__DOT__alu_io_op1 
                                                                        & vlTOPp->Execute__DOT__alu_io_op2)
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                         ? 
                                                                        (vlTOPp->Execute__DOT__alu_io_op1 
                                                                         >> 
                                                                         (0x1fU 
                                                                          & vlTOPp->Execute__DOT__alu_io_op2))
                                                                         : 
                                                                        ((9U 
                                                                          == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                          ? 
                                                                         VL_SHIFTRS_III(32,32,5, vlTOPp->Execute__DOT__alu_io_op1, 
                                                                                (0x1fU 
                                                                                & vlTOPp->Execute__DOT__alu_io_op2))
                                                                          : 
                                                                         ((0xaU 
                                                                           == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct)) 
                                                                          & (vlTOPp->Execute__DOT__alu_io_op1 
                                                                             < vlTOPp->Execute__DOT__alu_io_op2)))))))))))))))),32);
        vcdp->fullBit(c+33,(vlTOPp->clock));
        vcdp->fullBit(c+41,(vlTOPp->reset));
        vcdp->fullBus(c+49,(vlTOPp->io_instruction),32);
        vcdp->fullBus(c+57,(vlTOPp->io_instruction_address),32);
        vcdp->fullBus(c+65,(vlTOPp->io_reg1_data),32);
        vcdp->fullBus(c+73,(vlTOPp->io_reg2_data),32);
        vcdp->fullBus(c+81,(vlTOPp->io_immediate),32);
        vcdp->fullBit(c+89,(vlTOPp->io_aluop1_source));
        vcdp->fullBit(c+97,(vlTOPp->io_aluop2_source));
        vcdp->fullBus(c+105,(vlTOPp->io_mem_alu_result),32);
        vcdp->fullBit(c+113,(vlTOPp->io_if_jump_flag));
        vcdp->fullBus(c+121,(vlTOPp->io_if_jump_address),32);
        vcdp->fullBus(c+129,((0x7fU & vlTOPp->io_instruction)),7);
        vcdp->fullBus(c+137,((7U & (vlTOPp->io_instruction 
                                    >> 0xcU))),3);
        vcdp->fullBus(c+145,((0x7fU & (vlTOPp->io_instruction 
                                       >> 0x19U))),7);
    }
}
