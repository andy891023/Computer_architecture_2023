// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstructionDecode__Syms.h"


//======================

void VInstructionDecode::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstructionDecode* t = (VInstructionDecode*)userthis;
    VInstructionDecode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VInstructionDecode::traceChgThis(VInstructionDecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstructionDecode::traceChgThis__2(VInstructionDecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->clock));
        vcdp->chgBit(c+9,(vlTOPp->reset));
        vcdp->chgBus(c+17,(vlTOPp->io_instruction),32);
        vcdp->chgBus(c+25,(vlTOPp->io_regs_reg1_read_address),5);
        vcdp->chgBus(c+33,(vlTOPp->io_regs_reg2_read_address),5);
        vcdp->chgBus(c+41,(vlTOPp->io_ex_immediate),32);
        vcdp->chgBit(c+49,(vlTOPp->io_ex_aluop1_source));
        vcdp->chgBit(c+57,(vlTOPp->io_ex_aluop2_source));
        vcdp->chgBit(c+65,(vlTOPp->io_memory_read_enable));
        vcdp->chgBit(c+73,(vlTOPp->io_memory_write_enable));
        vcdp->chgBus(c+81,(vlTOPp->io_wb_reg_write_source),2);
        vcdp->chgBit(c+89,(vlTOPp->io_reg_write_enable));
        vcdp->chgBus(c+97,(vlTOPp->io_reg_write_address),5);
        vcdp->chgBus(c+105,((0x7fU & vlTOPp->io_instruction)),7);
        vcdp->chgBus(c+113,((0x1fU & (vlTOPp->io_instruction 
                                      >> 7U))),5);
        vcdp->chgBus(c+121,((0x1fU & (vlTOPp->io_instruction 
                                      >> 0xfU))),5);
    }
}
