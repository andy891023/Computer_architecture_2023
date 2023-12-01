// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VExecute__Syms.h"


//======================

void VExecute::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VExecute* t = (VExecute*)userthis;
    VExecute__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VExecute::traceChgThis(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VExecute::traceChgThis__2(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct),4);
        vcdp->chgBus(c+9,(vlTOPp->Execute__DOT__alu_io_op1),32);
        vcdp->chgBus(c+17,(vlTOPp->Execute__DOT__alu_io_op2),32);
        vcdp->chgBus(c+25,((IData)((VL_ULL(0x7fffffffffffffff) 
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
                                                ? ((QData)((IData)(vlTOPp->Execute__DOT__alu_io_op1)) 
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
    }
}

void VExecute::traceChgThis__3(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VExecute* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+33,(vlTOPp->clock));
        vcdp->chgBit(c+41,(vlTOPp->reset));
        vcdp->chgBus(c+49,(vlTOPp->io_instruction),32);
        vcdp->chgBus(c+57,(vlTOPp->io_instruction_address),32);
        vcdp->chgBus(c+65,(vlTOPp->io_reg1_data),32);
        vcdp->chgBus(c+73,(vlTOPp->io_reg2_data),32);
        vcdp->chgBus(c+81,(vlTOPp->io_immediate),32);
        vcdp->chgBit(c+89,(vlTOPp->io_aluop1_source));
        vcdp->chgBit(c+97,(vlTOPp->io_aluop2_source));
        vcdp->chgBus(c+105,(vlTOPp->io_mem_alu_result),32);
        vcdp->chgBit(c+113,(vlTOPp->io_if_jump_flag));
        vcdp->chgBus(c+121,(vlTOPp->io_if_jump_address),32);
        vcdp->chgBus(c+129,((0x7fU & vlTOPp->io_instruction)),7);
        vcdp->chgBus(c+137,((7U & (vlTOPp->io_instruction 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+145,((0x7fU & (vlTOPp->io_instruction 
                                      >> 0x19U))),7);
    }
}
