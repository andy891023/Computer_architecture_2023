// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestTopModule__Syms.h"


//======================

void VTestTopModule::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestTopModule* t = (VTestTopModule*)userthis;
    VTestTopModule__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTestTopModule::traceChgThis(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (((vlTOPp->__Vm_traceActivity 
                                 | (vlTOPp->__Vm_traceActivity 
                                    >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                               >> 3U)) 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 3U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestTopModule::traceChgThis__2(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[0]),32);
        vcdp->chgBus(c+2,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[1]),32);
        vcdp->chgBus(c+3,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[2]),32);
        vcdp->chgBus(c+4,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[3]),32);
        vcdp->chgBus(c+5,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[4]),32);
        vcdp->chgBus(c+6,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[5]),32);
        vcdp->chgBus(c+7,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[6]),32);
        vcdp->chgBus(c+8,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[7]),32);
        vcdp->chgBus(c+9,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[8]),32);
        vcdp->chgBus(c+10,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[9]),32);
        vcdp->chgBus(c+11,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[10]),32);
        vcdp->chgBus(c+12,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[11]),32);
    }
}

void VTestTopModule::traceChgThis__3(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+97,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock));
    }
}

void VTestTopModule::traceChgThis__4(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+105,((vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
                             + ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1
                                 : vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc))),32);
    }
}

void VTestTopModule::traceChgThis__5(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+113,(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable));
        vcdp->chgBus(c+121,(((0xbU >= (0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))
                              ? vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem
                             [(0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)]
                              : 0U)),32);
        vcdp->chgBus(c+129,(((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                              ? ((0xbU >= (0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))
                                  ? vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem
                                 [(0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)]
                                  : 0U) : 0U)),32);
        vcdp->chgBit(c+137,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & (0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))));
        vcdp->chgBus(c+145,(vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data),32);
        vcdp->chgBit(c+153,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable));
        vcdp->chgBus(c+161,((0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 7U))),5);
        vcdp->chgBus(c+169,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address),5);
        vcdp->chgBus(c+177,((0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x14U))),5);
        vcdp->chgBus(c+185,(vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction),32);
        vcdp->chgBus(c+193,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate),32);
        vcdp->chgBit(c+201,((((0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                             | (0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))));
        vcdp->chgBit(c+209,((0x33U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->chgBit(c+217,((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->chgBit(c+225,((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->chgBus(c+233,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source),2);
        vcdp->chgBus(c+241,((7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                   >> 0xcU))),3);
        vcdp->chgBus(c+249,((0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)),7);
        vcdp->chgBus(c+257,((0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0xfU))),5);
        vcdp->chgBus(c+265,(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct),4);
        vcdp->chgBus(c+273,((0x7fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                      >> 0x19U))),7);
    }
}

void VTestTopModule::traceChgThis__6(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+281,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                              ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0x23U == (0x7fU 
                                               & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                    & ((0U == (7U & 
                                               (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                        ? (0U == (3U 
                                                  & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                              : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->chgBit(c+289,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                              ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0x23U == (0x7fU 
                                               & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                    & ((0U == (7U & 
                                               (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                        ? (1U == (3U 
                                                  & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                              : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->chgBit(c+297,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                              ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0x23U == (0x7fU 
                                               & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                    & ((0U == (7U & 
                                               (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                        ? (2U == (3U 
                                                  & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                              : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->chgBit(c+305,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                              ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0x23U == (0x7fU 
                                               & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                    & ((0U == (7U & 
                                               (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                        ? (3U == (3U 
                                                  & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                        : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                              : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->chgBus(c+313,((IData)(((3U == (0x7fU 
                                             & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                      ? VL_ULL(0) : 
                                     ((0x23U == (0x7fU 
                                                 & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                       ? (VL_ULL(0xffffffffff) 
                                          & ((0U == 
                                              (7U & 
                                               (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                              ? ((QData)((IData)(
                                                                 (0x1ffU 
                                                                  & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2))) 
                                                 << 
                                                 (0x18U 
                                                  & ((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9) 
                                                     << 3U)))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                                   ? (QData)((IData)(
                                                                     (0x1ffffU 
                                                                      & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))
                                                   : 
                                                  ((QData)((IData)(
                                                                   (0x1ffffU 
                                                                    & vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2))) 
                                                   << 0x10U))
                                                  : (QData)((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))))
                                       : VL_ULL(0))))),32);
        vcdp->chgBit(c+321,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->chgBit(c+329,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (1U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->chgBit(c+337,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (2U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->chgBit(c+345,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                             & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (3U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                    : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->chgBit(c+353,((((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              | (0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                             | ((0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                & ((7U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                 >> 0xcU)))
                                    ? (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                       >= vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                    : ((6U == (7U & 
                                               (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                        ? (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                           < vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                        : ((5U == (7U 
                                                   & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                      >> 0xcU)))
                                            ? VL_GTES_III(1,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                            : ((4U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0xcU)))
                                                ? VL_LTS_III(1,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                                : (
                                                   (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                    != vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                         >> 0xcU))) 
                                                    & (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                       == vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))))))))));
        vcdp->chgBus(c+361,(((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                              ? ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0xcU)))
                                  ? vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data
                                  : ((5U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                      ? ((0U == (3U 
                                                 & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                          ? (0xffffU 
                                             & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                          : (0xffffU 
                                             & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                >> 0x10U)))
                                      : ((1U == (7U 
                                                 & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                    >> 0xcU)))
                                          ? ((0U == 
                                              (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                              ? (((
                                                   (0x8000U 
                                                    & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                    ? 0xffffU
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data))
                                              : (((
                                                   (0x80000000U 
                                                    & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                    ? 0xffffU
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                       >> 0x10U))))
                                          : vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                              : 0U)),32);
    }
}

void VTestTopModule::traceChgThis__7(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+369,(vlTOPp->TestTopModule__DOT__mem_io_bundle_address),32);
        vcdp->chgBus(c+377,(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data),32);
        vcdp->chgBus(c+385,((0x1fffffffU & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),32);
        vcdp->chgBus(c+393,((0xffU & vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data)),8);
        vcdp->chgBus(c+401,((0x1fffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
                                        >> 2U))),13);
        vcdp->chgBus(c+409,((0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                                      >> 8U))),8);
        vcdp->chgBus(c+417,((0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                                      >> 0x10U))),8);
        vcdp->chgBus(c+425,((0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                                      >> 0x18U))),8);
        vcdp->chgBus(c+433,(vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data),32);
        vcdp->chgBus(c+441,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1),32);
        vcdp->chgBus(c+449,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2),32);
        vcdp->chgBus(c+457,((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)),32);
        vcdp->chgBus(c+465,(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1),32);
        vcdp->chgBus(c+473,(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2),32);
        vcdp->chgBus(c+481,((3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),2);
    }
}

void VTestTopModule::traceChgThis__8(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+489,((((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                               << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                            << 0x10U)) 
                             | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                 << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]))),32);
        vcdp->chgBus(c+497,((((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                               << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                                            << 0x10U)) 
                             | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                                 << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]))),32);
        vcdp->chgBus(c+505,((((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                               << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                            << 0x10U)) 
                             | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                 << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]))),32);
        vcdp->chgBit(c+513,((0U == (IData)(vlTOPp->TestTopModule__DOT__CPU_clkdiv))));
        vcdp->chgBus(c+521,(vlTOPp->TestTopModule__DOT__CPU_clkdiv),2);
        vcdp->chgBit(c+529,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+537,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0),13);
        vcdp->chgBus(c+545,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+553,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+561,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0),13);
        vcdp->chgBus(c+569,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+577,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0_io_instruction_MPORT_en_pipe_0));
        vcdp->chgBus(c+585,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0),13);
        vcdp->chgBus(c+593,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+601,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+609,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+617,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+625,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+633,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_en_pipe_0));
        vcdp->chgBus(c+641,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+649,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+657,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+665,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+673,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+681,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2_io_instruction_MPORT_en_pipe_0));
        vcdp->chgBus(c+689,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+697,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+705,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+713,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->chgBus(c+721,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->chgBit(c+729,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_en_pipe_0));
        vcdp->chgBus(c+737,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                            [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->chgBus(c+745,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                              << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0])),16);
        vcdp->chgBus(c+753,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                              << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0])),16);
        vcdp->chgBus(c+761,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                              << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0])),16);
        vcdp->chgBus(c+769,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                              << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0])),16);
        vcdp->chgBus(c+777,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                              << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0])),16);
        vcdp->chgBus(c+785,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                              << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0])),16);
    }
}

void VTestTopModule::traceChgThis__9(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+793,(vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        vcdp->chgBus(c+801,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0),32);
        vcdp->chgBus(c+809,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1),32);
        vcdp->chgBus(c+817,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2),32);
        vcdp->chgBus(c+825,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3),32);
        vcdp->chgBus(c+833,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4),32);
        vcdp->chgBus(c+841,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5),32);
        vcdp->chgBus(c+849,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6),32);
        vcdp->chgBus(c+857,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7),32);
        vcdp->chgBus(c+865,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8),32);
        vcdp->chgBus(c+873,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9),32);
        vcdp->chgBus(c+881,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10),32);
        vcdp->chgBus(c+889,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11),32);
        vcdp->chgBus(c+897,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12),32);
        vcdp->chgBus(c+905,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13),32);
        vcdp->chgBus(c+913,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14),32);
        vcdp->chgBus(c+921,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15),32);
        vcdp->chgBus(c+929,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16),32);
        vcdp->chgBus(c+937,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17),32);
        vcdp->chgBus(c+945,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18),32);
        vcdp->chgBus(c+953,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19),32);
        vcdp->chgBus(c+961,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20),32);
        vcdp->chgBus(c+969,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21),32);
        vcdp->chgBus(c+977,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22),32);
        vcdp->chgBus(c+985,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23),32);
        vcdp->chgBus(c+993,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24),32);
        vcdp->chgBus(c+1001,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25),32);
        vcdp->chgBus(c+1009,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26),32);
        vcdp->chgBus(c+1017,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27),32);
        vcdp->chgBus(c+1025,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28),32);
        vcdp->chgBus(c+1033,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29),32);
        vcdp->chgBus(c+1041,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30),32);
        vcdp->chgBus(c+1049,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31),32);
    }
}

void VTestTopModule::traceChgThis__10(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1057,(vlTOPp->TestTopModule__DOT__rom_loader__DOT__address),32);
        vcdp->chgBus(c+1065,((IData)(((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                                       ? (VL_ULL(0x7ffffffff) 
                                          & (VL_ULL(0x1000) 
                                             + ((QData)((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)) 
                                                << 2U)))
                                       : VL_ULL(0)))),32);
        vcdp->chgBit(c+1073,((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)));
        vcdp->chgBit(c+1081,(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid));
        vcdp->chgBus(c+1089,((0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)),4);
    }
}

void VTestTopModule::traceChgThis__11(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1097,(vlTOPp->clock));
        vcdp->chgBit(c+1105,(vlTOPp->reset));
        vcdp->chgBus(c+1113,(vlTOPp->io_mem_debug_read_address),32);
        vcdp->chgBus(c+1121,(vlTOPp->io_regs_debug_read_address),5);
        vcdp->chgBus(c+1129,(vlTOPp->io_regs_debug_read_data),32);
        vcdp->chgBus(c+1137,(vlTOPp->io_mem_debug_read_data),32);
        vcdp->chgBus(c+1145,(((0U == (IData)(vlTOPp->io_regs_debug_read_address))
                               ? 0U : ((0x1fU == (IData)(vlTOPp->io_regs_debug_read_address))
                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                        : ((0x1eU == (IData)(vlTOPp->io_regs_debug_read_address))
                                            ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                            : ((0x1dU 
                                                == (IData)(vlTOPp->io_regs_debug_read_address))
                                                ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlTOPp->io_regs_debug_read_address))
                                                    ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlTOPp->io_regs_debug_read_address))
                                                     ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlTOPp->io_regs_debug_read_address))
                                                      ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlTOPp->io_regs_debug_read_address))
                                                       ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlTOPp->io_regs_debug_read_address))
                                                        ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlTOPp->io_regs_debug_read_address))
                                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlTOPp->io_regs_debug_read_address))
                                                          ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))))),32);
    }
}
