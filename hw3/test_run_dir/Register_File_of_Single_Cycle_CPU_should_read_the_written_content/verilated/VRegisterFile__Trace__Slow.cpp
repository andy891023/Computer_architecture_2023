// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegisterFile__Syms.h"


//======================

void VRegisterFile::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VRegisterFile::traceInit, &VRegisterFile::traceFull, &VRegisterFile::traceChg, this);
}
void VRegisterFile::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRegisterFile* t = (VRegisterFile*)userthis;
    VRegisterFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRegisterFile::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRegisterFile* t = (VRegisterFile*)userthis;
    VRegisterFile__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VRegisterFile::traceInitThis(VRegisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRegisterFile::traceFullThis(VRegisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRegisterFile::traceInitThis__1(VRegisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+257,"clock", false,-1);
        vcdp->declBit(c+265,"reset", false,-1);
        vcdp->declBit(c+273,"io_write_enable", false,-1);
        vcdp->declBus(c+281,"io_write_address", false,-1, 4,0);
        vcdp->declBus(c+289,"io_write_data", false,-1, 31,0);
        vcdp->declBus(c+297,"io_read_address1", false,-1, 4,0);
        vcdp->declBus(c+305,"io_read_address2", false,-1, 4,0);
        vcdp->declBus(c+313,"io_read_data1", false,-1, 31,0);
        vcdp->declBus(c+321,"io_read_data2", false,-1, 31,0);
        vcdp->declBus(c+329,"io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+337,"io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+257,"RegisterFile clock", false,-1);
        vcdp->declBit(c+265,"RegisterFile reset", false,-1);
        vcdp->declBit(c+273,"RegisterFile io_write_enable", false,-1);
        vcdp->declBus(c+281,"RegisterFile io_write_address", false,-1, 4,0);
        vcdp->declBus(c+289,"RegisterFile io_write_data", false,-1, 31,0);
        vcdp->declBus(c+297,"RegisterFile io_read_address1", false,-1, 4,0);
        vcdp->declBus(c+305,"RegisterFile io_read_address2", false,-1, 4,0);
        vcdp->declBus(c+313,"RegisterFile io_read_data1", false,-1, 31,0);
        vcdp->declBus(c+321,"RegisterFile io_read_data2", false,-1, 31,0);
        vcdp->declBus(c+329,"RegisterFile io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+337,"RegisterFile io_debug_read_data", false,-1, 31,0);
        vcdp->declBus(c+1,"RegisterFile registers_0", false,-1, 31,0);
        vcdp->declBus(c+9,"RegisterFile registers_1", false,-1, 31,0);
        vcdp->declBus(c+17,"RegisterFile registers_2", false,-1, 31,0);
        vcdp->declBus(c+25,"RegisterFile registers_3", false,-1, 31,0);
        vcdp->declBus(c+33,"RegisterFile registers_4", false,-1, 31,0);
        vcdp->declBus(c+41,"RegisterFile registers_5", false,-1, 31,0);
        vcdp->declBus(c+49,"RegisterFile registers_6", false,-1, 31,0);
        vcdp->declBus(c+57,"RegisterFile registers_7", false,-1, 31,0);
        vcdp->declBus(c+65,"RegisterFile registers_8", false,-1, 31,0);
        vcdp->declBus(c+73,"RegisterFile registers_9", false,-1, 31,0);
        vcdp->declBus(c+81,"RegisterFile registers_10", false,-1, 31,0);
        vcdp->declBus(c+89,"RegisterFile registers_11", false,-1, 31,0);
        vcdp->declBus(c+97,"RegisterFile registers_12", false,-1, 31,0);
        vcdp->declBus(c+105,"RegisterFile registers_13", false,-1, 31,0);
        vcdp->declBus(c+113,"RegisterFile registers_14", false,-1, 31,0);
        vcdp->declBus(c+121,"RegisterFile registers_15", false,-1, 31,0);
        vcdp->declBus(c+129,"RegisterFile registers_16", false,-1, 31,0);
        vcdp->declBus(c+137,"RegisterFile registers_17", false,-1, 31,0);
        vcdp->declBus(c+145,"RegisterFile registers_18", false,-1, 31,0);
        vcdp->declBus(c+153,"RegisterFile registers_19", false,-1, 31,0);
        vcdp->declBus(c+161,"RegisterFile registers_20", false,-1, 31,0);
        vcdp->declBus(c+169,"RegisterFile registers_21", false,-1, 31,0);
        vcdp->declBus(c+177,"RegisterFile registers_22", false,-1, 31,0);
        vcdp->declBus(c+185,"RegisterFile registers_23", false,-1, 31,0);
        vcdp->declBus(c+193,"RegisterFile registers_24", false,-1, 31,0);
        vcdp->declBus(c+201,"RegisterFile registers_25", false,-1, 31,0);
        vcdp->declBus(c+209,"RegisterFile registers_26", false,-1, 31,0);
        vcdp->declBus(c+217,"RegisterFile registers_27", false,-1, 31,0);
        vcdp->declBus(c+225,"RegisterFile registers_28", false,-1, 31,0);
        vcdp->declBus(c+233,"RegisterFile registers_29", false,-1, 31,0);
        vcdp->declBus(c+241,"RegisterFile registers_30", false,-1, 31,0);
        vcdp->declBus(c+249,"RegisterFile registers_31", false,-1, 31,0);
    }
}

void VRegisterFile::traceFullThis__1(VRegisterFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegisterFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->RegisterFile__DOT__registers_0),32);
        vcdp->fullBus(c+9,(vlTOPp->RegisterFile__DOT__registers_1),32);
        vcdp->fullBus(c+17,(vlTOPp->RegisterFile__DOT__registers_2),32);
        vcdp->fullBus(c+25,(vlTOPp->RegisterFile__DOT__registers_3),32);
        vcdp->fullBus(c+33,(vlTOPp->RegisterFile__DOT__registers_4),32);
        vcdp->fullBus(c+41,(vlTOPp->RegisterFile__DOT__registers_5),32);
        vcdp->fullBus(c+49,(vlTOPp->RegisterFile__DOT__registers_6),32);
        vcdp->fullBus(c+57,(vlTOPp->RegisterFile__DOT__registers_7),32);
        vcdp->fullBus(c+65,(vlTOPp->RegisterFile__DOT__registers_8),32);
        vcdp->fullBus(c+73,(vlTOPp->RegisterFile__DOT__registers_9),32);
        vcdp->fullBus(c+81,(vlTOPp->RegisterFile__DOT__registers_10),32);
        vcdp->fullBus(c+89,(vlTOPp->RegisterFile__DOT__registers_11),32);
        vcdp->fullBus(c+97,(vlTOPp->RegisterFile__DOT__registers_12),32);
        vcdp->fullBus(c+105,(vlTOPp->RegisterFile__DOT__registers_13),32);
        vcdp->fullBus(c+113,(vlTOPp->RegisterFile__DOT__registers_14),32);
        vcdp->fullBus(c+121,(vlTOPp->RegisterFile__DOT__registers_15),32);
        vcdp->fullBus(c+129,(vlTOPp->RegisterFile__DOT__registers_16),32);
        vcdp->fullBus(c+137,(vlTOPp->RegisterFile__DOT__registers_17),32);
        vcdp->fullBus(c+145,(vlTOPp->RegisterFile__DOT__registers_18),32);
        vcdp->fullBus(c+153,(vlTOPp->RegisterFile__DOT__registers_19),32);
        vcdp->fullBus(c+161,(vlTOPp->RegisterFile__DOT__registers_20),32);
        vcdp->fullBus(c+169,(vlTOPp->RegisterFile__DOT__registers_21),32);
        vcdp->fullBus(c+177,(vlTOPp->RegisterFile__DOT__registers_22),32);
        vcdp->fullBus(c+185,(vlTOPp->RegisterFile__DOT__registers_23),32);
        vcdp->fullBus(c+193,(vlTOPp->RegisterFile__DOT__registers_24),32);
        vcdp->fullBus(c+201,(vlTOPp->RegisterFile__DOT__registers_25),32);
        vcdp->fullBus(c+209,(vlTOPp->RegisterFile__DOT__registers_26),32);
        vcdp->fullBus(c+217,(vlTOPp->RegisterFile__DOT__registers_27),32);
        vcdp->fullBus(c+225,(vlTOPp->RegisterFile__DOT__registers_28),32);
        vcdp->fullBus(c+233,(vlTOPp->RegisterFile__DOT__registers_29),32);
        vcdp->fullBus(c+241,(vlTOPp->RegisterFile__DOT__registers_30),32);
        vcdp->fullBus(c+249,(vlTOPp->RegisterFile__DOT__registers_31),32);
        vcdp->fullBit(c+257,(vlTOPp->clock));
        vcdp->fullBit(c+265,(vlTOPp->reset));
        vcdp->fullBit(c+273,(vlTOPp->io_write_enable));
        vcdp->fullBus(c+281,(vlTOPp->io_write_address),5);
        vcdp->fullBus(c+289,(vlTOPp->io_write_data),32);
        vcdp->fullBus(c+297,(vlTOPp->io_read_address1),5);
        vcdp->fullBus(c+305,(vlTOPp->io_read_address2),5);
        vcdp->fullBus(c+313,(vlTOPp->io_read_data1),32);
        vcdp->fullBus(c+321,(vlTOPp->io_read_data2),32);
        vcdp->fullBus(c+329,(vlTOPp->io_debug_read_address),5);
        vcdp->fullBus(c+337,(vlTOPp->io_debug_read_data),32);
    }
}
