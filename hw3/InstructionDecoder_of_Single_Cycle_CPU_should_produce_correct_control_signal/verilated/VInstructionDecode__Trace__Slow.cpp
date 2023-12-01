// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstructionDecode__Syms.h"


//======================

void VInstructionDecode::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VInstructionDecode::traceInit, &VInstructionDecode::traceFull, &VInstructionDecode::traceChg, this);
}
void VInstructionDecode::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInstructionDecode* t = (VInstructionDecode*)userthis;
    VInstructionDecode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInstructionDecode::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstructionDecode* t = (VInstructionDecode*)userthis;
    VInstructionDecode__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VInstructionDecode::traceInitThis(VInstructionDecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInstructionDecode::traceFullThis(VInstructionDecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstructionDecode::traceInitThis__1(VInstructionDecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1,"clock", false,-1);
        vcdp->declBit(c+9,"reset", false,-1);
        vcdp->declBus(c+17,"io_instruction", false,-1, 31,0);
        vcdp->declBus(c+25,"io_regs_reg1_read_address", false,-1, 4,0);
        vcdp->declBus(c+33,"io_regs_reg2_read_address", false,-1, 4,0);
        vcdp->declBus(c+41,"io_ex_immediate", false,-1, 31,0);
        vcdp->declBit(c+49,"io_ex_aluop1_source", false,-1);
        vcdp->declBit(c+57,"io_ex_aluop2_source", false,-1);
        vcdp->declBit(c+65,"io_memory_read_enable", false,-1);
        vcdp->declBit(c+73,"io_memory_write_enable", false,-1);
        vcdp->declBus(c+81,"io_wb_reg_write_source", false,-1, 1,0);
        vcdp->declBit(c+89,"io_reg_write_enable", false,-1);
        vcdp->declBus(c+97,"io_reg_write_address", false,-1, 4,0);
        vcdp->declBit(c+1,"InstructionDecode clock", false,-1);
        vcdp->declBit(c+9,"InstructionDecode reset", false,-1);
        vcdp->declBus(c+17,"InstructionDecode io_instruction", false,-1, 31,0);
        vcdp->declBus(c+25,"InstructionDecode io_regs_reg1_read_address", false,-1, 4,0);
        vcdp->declBus(c+33,"InstructionDecode io_regs_reg2_read_address", false,-1, 4,0);
        vcdp->declBus(c+41,"InstructionDecode io_ex_immediate", false,-1, 31,0);
        vcdp->declBit(c+49,"InstructionDecode io_ex_aluop1_source", false,-1);
        vcdp->declBit(c+57,"InstructionDecode io_ex_aluop2_source", false,-1);
        vcdp->declBit(c+65,"InstructionDecode io_memory_read_enable", false,-1);
        vcdp->declBit(c+73,"InstructionDecode io_memory_write_enable", false,-1);
        vcdp->declBus(c+81,"InstructionDecode io_wb_reg_write_source", false,-1, 1,0);
        vcdp->declBit(c+89,"InstructionDecode io_reg_write_enable", false,-1);
        vcdp->declBus(c+97,"InstructionDecode io_reg_write_address", false,-1, 4,0);
        vcdp->declBus(c+105,"InstructionDecode opcode", false,-1, 6,0);
        vcdp->declBus(c+113,"InstructionDecode rd", false,-1, 4,0);
        vcdp->declBus(c+121,"InstructionDecode rs1", false,-1, 4,0);
    }
}

void VInstructionDecode::traceFullThis__1(VInstructionDecode__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionDecode* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->clock));
        vcdp->fullBit(c+9,(vlTOPp->reset));
        vcdp->fullBus(c+17,(vlTOPp->io_instruction),32);
        vcdp->fullBus(c+25,(vlTOPp->io_regs_reg1_read_address),5);
        vcdp->fullBus(c+33,(vlTOPp->io_regs_reg2_read_address),5);
        vcdp->fullBus(c+41,(vlTOPp->io_ex_immediate),32);
        vcdp->fullBit(c+49,(vlTOPp->io_ex_aluop1_source));
        vcdp->fullBit(c+57,(vlTOPp->io_ex_aluop2_source));
        vcdp->fullBit(c+65,(vlTOPp->io_memory_read_enable));
        vcdp->fullBit(c+73,(vlTOPp->io_memory_write_enable));
        vcdp->fullBus(c+81,(vlTOPp->io_wb_reg_write_source),2);
        vcdp->fullBit(c+89,(vlTOPp->io_reg_write_enable));
        vcdp->fullBus(c+97,(vlTOPp->io_reg_write_address),5);
        vcdp->fullBus(c+105,((0x7fU & vlTOPp->io_instruction)),7);
        vcdp->fullBus(c+113,((0x1fU & (vlTOPp->io_instruction 
                                       >> 7U))),5);
        vcdp->fullBus(c+121,((0x1fU & (vlTOPp->io_instruction 
                                       >> 0xfU))),5);
    }
}
