// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstructionFetch__Syms.h"


//======================

void VInstructionFetch::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstructionFetch* t = (VInstructionFetch*)userthis;
    VInstructionFetch__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VInstructionFetch::traceChgThis(VInstructionFetch__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionFetch* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstructionFetch::traceChgThis__2(VInstructionFetch__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionFetch* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->InstructionFetch__DOT__pc),32);
    }
}

void VInstructionFetch::traceChgThis__3(VInstructionFetch__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionFetch* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,(vlTOPp->clock));
        vcdp->chgBit(c+17,(vlTOPp->reset));
        vcdp->chgBit(c+25,(vlTOPp->io_jump_flag_id));
        vcdp->chgBus(c+33,(vlTOPp->io_jump_address_id),32);
        vcdp->chgBus(c+41,(vlTOPp->io_instruction_read_data),32);
        vcdp->chgBit(c+49,(vlTOPp->io_instruction_valid));
        vcdp->chgBus(c+57,(vlTOPp->io_instruction_address),32);
        vcdp->chgBus(c+65,(vlTOPp->io_instruction),32);
    }
}
