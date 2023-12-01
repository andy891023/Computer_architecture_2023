// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegisterFile__Syms.h"


//======================

void VRegisterFile::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRegisterFile* t = (VRegisterFile*)userthis;
    VRegisterFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VRegisterFile::traceChgThis(VRegisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VRegisterFile::traceChgThis__2(VRegisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->RegisterFile__DOT__registers_0),32);
        vcdp->chgBus(c+9,(vlTOPp->RegisterFile__DOT__registers_1),32);
        vcdp->chgBus(c+17,(vlTOPp->RegisterFile__DOT__registers_2),32);
        vcdp->chgBus(c+25,(vlTOPp->RegisterFile__DOT__registers_3),32);
        vcdp->chgBus(c+33,(vlTOPp->RegisterFile__DOT__registers_4),32);
        vcdp->chgBus(c+41,(vlTOPp->RegisterFile__DOT__registers_5),32);
        vcdp->chgBus(c+49,(vlTOPp->RegisterFile__DOT__registers_6),32);
        vcdp->chgBus(c+57,(vlTOPp->RegisterFile__DOT__registers_7),32);
        vcdp->chgBus(c+65,(vlTOPp->RegisterFile__DOT__registers_8),32);
        vcdp->chgBus(c+73,(vlTOPp->RegisterFile__DOT__registers_9),32);
        vcdp->chgBus(c+81,(vlTOPp->RegisterFile__DOT__registers_10),32);
        vcdp->chgBus(c+89,(vlTOPp->RegisterFile__DOT__registers_11),32);
        vcdp->chgBus(c+97,(vlTOPp->RegisterFile__DOT__registers_12),32);
        vcdp->chgBus(c+105,(vlTOPp->RegisterFile__DOT__registers_13),32);
        vcdp->chgBus(c+113,(vlTOPp->RegisterFile__DOT__registers_14),32);
        vcdp->chgBus(c+121,(vlTOPp->RegisterFile__DOT__registers_15),32);
        vcdp->chgBus(c+129,(vlTOPp->RegisterFile__DOT__registers_16),32);
        vcdp->chgBus(c+137,(vlTOPp->RegisterFile__DOT__registers_17),32);
        vcdp->chgBus(c+145,(vlTOPp->RegisterFile__DOT__registers_18),32);
        vcdp->chgBus(c+153,(vlTOPp->RegisterFile__DOT__registers_19),32);
        vcdp->chgBus(c+161,(vlTOPp->RegisterFile__DOT__registers_20),32);
        vcdp->chgBus(c+169,(vlTOPp->RegisterFile__DOT__registers_21),32);
        vcdp->chgBus(c+177,(vlTOPp->RegisterFile__DOT__registers_22),32);
        vcdp->chgBus(c+185,(vlTOPp->RegisterFile__DOT__registers_23),32);
        vcdp->chgBus(c+193,(vlTOPp->RegisterFile__DOT__registers_24),32);
        vcdp->chgBus(c+201,(vlTOPp->RegisterFile__DOT__registers_25),32);
        vcdp->chgBus(c+209,(vlTOPp->RegisterFile__DOT__registers_26),32);
        vcdp->chgBus(c+217,(vlTOPp->RegisterFile__DOT__registers_27),32);
        vcdp->chgBus(c+225,(vlTOPp->RegisterFile__DOT__registers_28),32);
        vcdp->chgBus(c+233,(vlTOPp->RegisterFile__DOT__registers_29),32);
        vcdp->chgBus(c+241,(vlTOPp->RegisterFile__DOT__registers_30),32);
        vcdp->chgBus(c+249,(vlTOPp->RegisterFile__DOT__registers_31),32);
    }
}

void VRegisterFile::traceChgThis__3(VRegisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+257,(vlTOPp->clock));
        vcdp->chgBit(c+265,(vlTOPp->reset));
        vcdp->chgBit(c+273,(vlTOPp->io_write_enable));
        vcdp->chgBus(c+281,(vlTOPp->io_write_address),5);
        vcdp->chgBus(c+289,(vlTOPp->io_write_data),32);
        vcdp->chgBus(c+297,(vlTOPp->io_read_address1),5);
        vcdp->chgBus(c+305,(vlTOPp->io_read_address2),5);
        vcdp->chgBus(c+313,(vlTOPp->io_read_data1),32);
        vcdp->chgBus(c+321,(vlTOPp->io_read_data2),32);
        vcdp->chgBus(c+329,(vlTOPp->io_debug_read_address),5);
        vcdp->chgBus(c+337,(vlTOPp->io_debug_read_data),32);
    }
}
