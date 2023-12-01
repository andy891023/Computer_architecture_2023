// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstructionFetch__Syms.h"


//======================

void VInstructionFetch::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VInstructionFetch::traceInit, &VInstructionFetch::traceFull, &VInstructionFetch::traceChg, this);
}
void VInstructionFetch::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInstructionFetch* t = (VInstructionFetch*)userthis;
    VInstructionFetch__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInstructionFetch::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstructionFetch* t = (VInstructionFetch*)userthis;
    VInstructionFetch__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VInstructionFetch::traceInitThis(VInstructionFetch__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionFetch* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInstructionFetch::traceFullThis(VInstructionFetch__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionFetch* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstructionFetch::traceInitThis__1(VInstructionFetch__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionFetch* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+9,"clock", false,-1);
        vcdp->declBit(c+17,"reset", false,-1);
        vcdp->declBit(c+25,"io_jump_flag_id", false,-1);
        vcdp->declBus(c+33,"io_jump_address_id", false,-1, 31,0);
        vcdp->declBus(c+41,"io_instruction_read_data", false,-1, 31,0);
        vcdp->declBit(c+49,"io_instruction_valid", false,-1);
        vcdp->declBus(c+57,"io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+65,"io_instruction", false,-1, 31,0);
        vcdp->declBit(c+9,"InstructionFetch clock", false,-1);
        vcdp->declBit(c+17,"InstructionFetch reset", false,-1);
        vcdp->declBit(c+25,"InstructionFetch io_jump_flag_id", false,-1);
        vcdp->declBus(c+33,"InstructionFetch io_jump_address_id", false,-1, 31,0);
        vcdp->declBus(c+41,"InstructionFetch io_instruction_read_data", false,-1, 31,0);
        vcdp->declBit(c+49,"InstructionFetch io_instruction_valid", false,-1);
        vcdp->declBus(c+57,"InstructionFetch io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+65,"InstructionFetch io_instruction", false,-1, 31,0);
        vcdp->declBus(c+1,"InstructionFetch pc", false,-1, 31,0);
    }
}

void VInstructionFetch::traceFullThis__1(VInstructionFetch__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionFetch* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->InstructionFetch__DOT__pc),32);
        vcdp->fullBit(c+9,(vlTOPp->clock));
        vcdp->fullBit(c+17,(vlTOPp->reset));
        vcdp->fullBit(c+25,(vlTOPp->io_jump_flag_id));
        vcdp->fullBus(c+33,(vlTOPp->io_jump_address_id),32);
        vcdp->fullBus(c+41,(vlTOPp->io_instruction_read_data),32);
        vcdp->fullBit(c+49,(vlTOPp->io_instruction_valid));
        vcdp->fullBus(c+57,(vlTOPp->io_instruction_address),32);
        vcdp->fullBus(c+65,(vlTOPp->io_instruction),32);
    }
}
