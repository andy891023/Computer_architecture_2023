// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestTopModule__Syms.h"


//======================

void VTestTopModule::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTestTopModule::traceInit, &VTestTopModule::traceFull, &VTestTopModule::traceChg, this);
}
void VTestTopModule::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTestTopModule* t = (VTestTopModule*)userthis;
    VTestTopModule__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTestTopModule::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTestTopModule* t = (VTestTopModule*)userthis;
    VTestTopModule__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTestTopModule::traceInitThis(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTestTopModule::traceFullThis(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTestTopModule::traceInitThis__1(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+1097,"clock", false,-1);
        vcdp->declBit(c+1105,"reset", false,-1);
        vcdp->declBus(c+1113,"io_mem_debug_read_address", false,-1, 31,0);
        vcdp->declBus(c+1121,"io_regs_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+1129,"io_regs_debug_read_data", false,-1, 31,0);
        vcdp->declBus(c+1137,"io_mem_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+1097,"TestTopModule clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule reset", false,-1);
        vcdp->declBus(c+1113,"TestTopModule io_mem_debug_read_address", false,-1, 31,0);
        vcdp->declBus(c+1121,"TestTopModule io_regs_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+1129,"TestTopModule io_regs_debug_read_data", false,-1, 31,0);
        vcdp->declBus(c+1137,"TestTopModule io_mem_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+1097,"TestTopModule mem_clock", false,-1);
        vcdp->declBus(c+369,"TestTopModule mem_io_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+377,"TestTopModule mem_io_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+113,"TestTopModule mem_io_bundle_write_enable", false,-1);
        vcdp->declBit(c+281,"TestTopModule mem_io_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+289,"TestTopModule mem_io_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+297,"TestTopModule mem_io_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+305,"TestTopModule mem_io_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+489,"TestTopModule mem_io_bundle_read_data", false,-1, 31,0);
        vcdp->declBus(c+497,"TestTopModule mem_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+793,"TestTopModule mem_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+1113,"TestTopModule mem_io_debug_read_address", false,-1, 31,0);
        vcdp->declBus(c+505,"TestTopModule mem_io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+1097,"TestTopModule instruction_rom_clock", false,-1);
        vcdp->declBus(c+1057,"TestTopModule instruction_rom_io_address", false,-1, 31,0);
        vcdp->declBus(c+121,"TestTopModule instruction_rom_io_data", false,-1, 31,0);
        vcdp->declBit(c+1097,"TestTopModule rom_loader_clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule rom_loader_reset", false,-1);
        vcdp->declBus(c+1065,"TestTopModule rom_loader_io_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+129,"TestTopModule rom_loader_io_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+1073,"TestTopModule rom_loader_io_bundle_write_enable", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader_io_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader_io_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader_io_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader_io_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+1057,"TestTopModule rom_loader_io_rom_address", false,-1, 31,0);
        vcdp->declBus(c+121,"TestTopModule rom_loader_io_rom_data", false,-1, 31,0);
        vcdp->declBit(c+1081,"TestTopModule rom_loader_io_load_finished", false,-1);
        vcdp->declBit(c+513,"TestTopModule cpu_clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule cpu_reset", false,-1);
        vcdp->declBus(c+793,"TestTopModule cpu_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+497,"TestTopModule cpu_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+385,"TestTopModule cpu_io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+313,"TestTopModule cpu_io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+137,"TestTopModule cpu_io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+321,"TestTopModule cpu_io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+329,"TestTopModule cpu_io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+337,"TestTopModule cpu_io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+345,"TestTopModule cpu_io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+145,"TestTopModule cpu_io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBit(c+1081,"TestTopModule cpu_io_instruction_valid", false,-1);
        vcdp->declBus(c+1121,"TestTopModule cpu_io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+1145,"TestTopModule cpu_io_debug_read_data", false,-1, 31,0);
        vcdp->declBus(c+521,"TestTopModule CPU_clkdiv", false,-1, 1,0);
        vcdp->declBit(c+1097,"TestTopModule mem clock", false,-1);
        vcdp->declBus(c+369,"TestTopModule mem io_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+377,"TestTopModule mem io_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+113,"TestTopModule mem io_bundle_write_enable", false,-1);
        vcdp->declBit(c+281,"TestTopModule mem io_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+289,"TestTopModule mem io_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+297,"TestTopModule mem io_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+305,"TestTopModule mem io_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+489,"TestTopModule mem io_bundle_read_data", false,-1, 31,0);
        vcdp->declBus(c+497,"TestTopModule mem io_instruction", false,-1, 31,0);
        vcdp->declBus(c+793,"TestTopModule mem io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+1113,"TestTopModule mem io_debug_read_address", false,-1, 31,0);
        vcdp->declBus(c+505,"TestTopModule mem io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+529,"TestTopModule mem mem_0_io_bundle_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_0_io_bundle_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+545,"TestTopModule mem mem_0_io_bundle_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+553,"TestTopModule mem mem_0_io_debug_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_0_io_debug_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+569,"TestTopModule mem mem_0_io_debug_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+577,"TestTopModule mem mem_0_io_instruction_MPORT_en", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_0_io_instruction_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+593,"TestTopModule mem mem_0_io_instruction_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+393,"TestTopModule mem mem_0_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+401,"TestTopModule mem mem_0_MPORT_addr", false,-1, 12,0);
        vcdp->declBit(c+281,"TestTopModule mem mem_0_MPORT_mask", false,-1);
        vcdp->declBit(c+113,"TestTopModule mem mem_0_MPORT_en", false,-1);
        vcdp->declBit(c+529,"TestTopModule mem mem_0_io_bundle_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_0_io_bundle_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+553,"TestTopModule mem mem_0_io_debug_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_0_io_debug_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+577,"TestTopModule mem mem_0_io_instruction_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_0_io_instruction_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+601,"TestTopModule mem mem_1_io_bundle_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_1_io_bundle_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+609,"TestTopModule mem mem_1_io_bundle_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+617,"TestTopModule mem mem_1_io_debug_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_1_io_debug_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+625,"TestTopModule mem mem_1_io_debug_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+633,"TestTopModule mem mem_1_io_instruction_MPORT_en", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_1_io_instruction_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+641,"TestTopModule mem mem_1_io_instruction_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+409,"TestTopModule mem mem_1_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+401,"TestTopModule mem mem_1_MPORT_addr", false,-1, 12,0);
        vcdp->declBit(c+289,"TestTopModule mem mem_1_MPORT_mask", false,-1);
        vcdp->declBit(c+113,"TestTopModule mem mem_1_MPORT_en", false,-1);
        vcdp->declBit(c+601,"TestTopModule mem mem_1_io_bundle_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_1_io_bundle_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+617,"TestTopModule mem mem_1_io_debug_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_1_io_debug_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+633,"TestTopModule mem mem_1_io_instruction_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_1_io_instruction_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+649,"TestTopModule mem mem_2_io_bundle_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_2_io_bundle_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+657,"TestTopModule mem mem_2_io_bundle_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+665,"TestTopModule mem mem_2_io_debug_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_2_io_debug_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+673,"TestTopModule mem mem_2_io_debug_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+681,"TestTopModule mem mem_2_io_instruction_MPORT_en", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_2_io_instruction_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+689,"TestTopModule mem mem_2_io_instruction_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+417,"TestTopModule mem mem_2_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+401,"TestTopModule mem mem_2_MPORT_addr", false,-1, 12,0);
        vcdp->declBit(c+297,"TestTopModule mem mem_2_MPORT_mask", false,-1);
        vcdp->declBit(c+113,"TestTopModule mem mem_2_MPORT_en", false,-1);
        vcdp->declBit(c+649,"TestTopModule mem mem_2_io_bundle_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_2_io_bundle_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+665,"TestTopModule mem mem_2_io_debug_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_2_io_debug_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+681,"TestTopModule mem mem_2_io_instruction_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_2_io_instruction_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+697,"TestTopModule mem mem_3_io_bundle_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_3_io_bundle_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+705,"TestTopModule mem mem_3_io_bundle_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+713,"TestTopModule mem mem_3_io_debug_read_data_MPORT_en", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_3_io_debug_read_data_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+721,"TestTopModule mem mem_3_io_debug_read_data_MPORT_data", false,-1, 7,0);
        vcdp->declBit(c+729,"TestTopModule mem mem_3_io_instruction_MPORT_en", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_3_io_instruction_MPORT_addr", false,-1, 12,0);
        vcdp->declBus(c+737,"TestTopModule mem mem_3_io_instruction_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+425,"TestTopModule mem mem_3_MPORT_data", false,-1, 7,0);
        vcdp->declBus(c+401,"TestTopModule mem mem_3_MPORT_addr", false,-1, 12,0);
        vcdp->declBit(c+305,"TestTopModule mem mem_3_MPORT_mask", false,-1);
        vcdp->declBit(c+113,"TestTopModule mem mem_3_MPORT_en", false,-1);
        vcdp->declBit(c+697,"TestTopModule mem mem_3_io_bundle_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+537,"TestTopModule mem mem_3_io_bundle_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+713,"TestTopModule mem mem_3_io_debug_read_data_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+561,"TestTopModule mem mem_3_io_debug_read_data_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBit(c+729,"TestTopModule mem mem_3_io_instruction_MPORT_en_pipe_0", false,-1);
        vcdp->declBus(c+585,"TestTopModule mem mem_3_io_instruction_MPORT_addr_pipe_0", false,-1, 12,0);
        vcdp->declBus(c+745,"TestTopModule mem io_bundle_read_data_lo", false,-1, 15,0);
        vcdp->declBus(c+753,"TestTopModule mem io_bundle_read_data_hi", false,-1, 15,0);
        vcdp->declBus(c+761,"TestTopModule mem io_debug_read_data_lo", false,-1, 15,0);
        vcdp->declBus(c+769,"TestTopModule mem io_debug_read_data_hi", false,-1, 15,0);
        vcdp->declBus(c+777,"TestTopModule mem io_instruction_lo", false,-1, 15,0);
        vcdp->declBus(c+785,"TestTopModule mem io_instruction_hi", false,-1, 15,0);
        vcdp->declBit(c+1097,"TestTopModule instruction_rom clock", false,-1);
        vcdp->declBus(c+1057,"TestTopModule instruction_rom io_address", false,-1, 31,0);
        vcdp->declBus(c+121,"TestTopModule instruction_rom io_data", false,-1, 31,0);
        {int i; for (i=0; i<12; i++) {
                vcdp->declBus(c+1+i*1,"TestTopModule instruction_rom mem", true,(i+0), 31,0);}}
        vcdp->declBit(c+1153,"TestTopModule instruction_rom mem_io_data_MPORT_en", false,-1);
        vcdp->declBus(c+1089,"TestTopModule instruction_rom mem_io_data_MPORT_addr", false,-1, 3,0);
        vcdp->declBus(c+121,"TestTopModule instruction_rom mem_io_data_MPORT_data", false,-1, 31,0);
        vcdp->declBus(c+1161,"TestTopModule instruction_rom initvar", false,-1, 31,0);
        vcdp->declBit(c+1097,"TestTopModule rom_loader clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule rom_loader reset", false,-1);
        vcdp->declBus(c+1065,"TestTopModule rom_loader io_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+129,"TestTopModule rom_loader io_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+1073,"TestTopModule rom_loader io_bundle_write_enable", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader io_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader io_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader io_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+1073,"TestTopModule rom_loader io_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+1057,"TestTopModule rom_loader io_rom_address", false,-1, 31,0);
        vcdp->declBus(c+121,"TestTopModule rom_loader io_rom_data", false,-1, 31,0);
        vcdp->declBit(c+1081,"TestTopModule rom_loader io_load_finished", false,-1);
        vcdp->declBus(c+1057,"TestTopModule rom_loader address", false,-1, 31,0);
        vcdp->declBit(c+1081,"TestTopModule rom_loader valid", false,-1);
        vcdp->declBit(c+513,"TestTopModule cpu clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule cpu reset", false,-1);
        vcdp->declBus(c+793,"TestTopModule cpu io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+497,"TestTopModule cpu io_instruction", false,-1, 31,0);
        vcdp->declBus(c+385,"TestTopModule cpu io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+313,"TestTopModule cpu io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+137,"TestTopModule cpu io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+321,"TestTopModule cpu io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+329,"TestTopModule cpu io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+337,"TestTopModule cpu io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+345,"TestTopModule cpu io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+145,"TestTopModule cpu io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBit(c+1081,"TestTopModule cpu io_instruction_valid", false,-1);
        vcdp->declBus(c+1121,"TestTopModule cpu io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+1145,"TestTopModule cpu io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+97,"TestTopModule cpu regs_clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule cpu regs_reset", false,-1);
        vcdp->declBit(c+153,"TestTopModule cpu regs_io_write_enable", false,-1);
        vcdp->declBus(c+161,"TestTopModule cpu regs_io_write_address", false,-1, 4,0);
        vcdp->declBus(c+433,"TestTopModule cpu regs_io_write_data", false,-1, 31,0);
        vcdp->declBus(c+169,"TestTopModule cpu regs_io_read_address1", false,-1, 4,0);
        vcdp->declBus(c+177,"TestTopModule cpu regs_io_read_address2", false,-1, 4,0);
        vcdp->declBus(c+441,"TestTopModule cpu regs_io_read_data1", false,-1, 31,0);
        vcdp->declBus(c+449,"TestTopModule cpu regs_io_read_data2", false,-1, 31,0);
        vcdp->declBus(c+1121,"TestTopModule cpu regs_io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+1145,"TestTopModule cpu regs_io_debug_read_data", false,-1, 31,0);
        vcdp->declBit(c+97,"TestTopModule cpu inst_fetch_clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule cpu inst_fetch_reset", false,-1);
        vcdp->declBit(c+353,"TestTopModule cpu inst_fetch_io_jump_flag_id", false,-1);
        vcdp->declBus(c+105,"TestTopModule cpu inst_fetch_io_jump_address_id", false,-1, 31,0);
        vcdp->declBus(c+497,"TestTopModule cpu inst_fetch_io_instruction_read_data", false,-1, 31,0);
        vcdp->declBit(c+1081,"TestTopModule cpu inst_fetch_io_instruction_valid", false,-1);
        vcdp->declBus(c+793,"TestTopModule cpu inst_fetch_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+185,"TestTopModule cpu inst_fetch_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+185,"TestTopModule cpu id_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+169,"TestTopModule cpu id_io_regs_reg1_read_address", false,-1, 4,0);
        vcdp->declBus(c+177,"TestTopModule cpu id_io_regs_reg2_read_address", false,-1, 4,0);
        vcdp->declBus(c+193,"TestTopModule cpu id_io_ex_immediate", false,-1, 31,0);
        vcdp->declBit(c+201,"TestTopModule cpu id_io_ex_aluop1_source", false,-1);
        vcdp->declBit(c+209,"TestTopModule cpu id_io_ex_aluop2_source", false,-1);
        vcdp->declBit(c+217,"TestTopModule cpu id_io_memory_read_enable", false,-1);
        vcdp->declBit(c+225,"TestTopModule cpu id_io_memory_write_enable", false,-1);
        vcdp->declBus(c+233,"TestTopModule cpu id_io_wb_reg_write_source", false,-1, 1,0);
        vcdp->declBit(c+153,"TestTopModule cpu id_io_reg_write_enable", false,-1);
        vcdp->declBus(c+161,"TestTopModule cpu id_io_reg_write_address", false,-1, 4,0);
        vcdp->declBus(c+185,"TestTopModule cpu ex_io_instruction", false,-1, 31,0);
        vcdp->declBus(c+793,"TestTopModule cpu ex_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+441,"TestTopModule cpu ex_io_reg1_data", false,-1, 31,0);
        vcdp->declBus(c+449,"TestTopModule cpu ex_io_reg2_data", false,-1, 31,0);
        vcdp->declBus(c+193,"TestTopModule cpu ex_io_immediate", false,-1, 31,0);
        vcdp->declBit(c+201,"TestTopModule cpu ex_io_aluop1_source", false,-1);
        vcdp->declBit(c+209,"TestTopModule cpu ex_io_aluop2_source", false,-1);
        vcdp->declBus(c+457,"TestTopModule cpu ex_io_mem_alu_result", false,-1, 31,0);
        vcdp->declBit(c+353,"TestTopModule cpu ex_io_if_jump_flag", false,-1);
        vcdp->declBus(c+105,"TestTopModule cpu ex_io_if_jump_address", false,-1, 31,0);
        vcdp->declBus(c+457,"TestTopModule cpu mem_io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+449,"TestTopModule cpu mem_io_reg2_data", false,-1, 31,0);
        vcdp->declBit(c+217,"TestTopModule cpu mem_io_memory_read_enable", false,-1);
        vcdp->declBit(c+225,"TestTopModule cpu mem_io_memory_write_enable", false,-1);
        vcdp->declBus(c+241,"TestTopModule cpu mem_io_funct3", false,-1, 2,0);
        vcdp->declBus(c+361,"TestTopModule cpu mem_io_wb_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+457,"TestTopModule cpu mem_io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+313,"TestTopModule cpu mem_io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+137,"TestTopModule cpu mem_io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+321,"TestTopModule cpu mem_io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+329,"TestTopModule cpu mem_io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+337,"TestTopModule cpu mem_io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+345,"TestTopModule cpu mem_io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+145,"TestTopModule cpu mem_io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBus(c+793,"TestTopModule cpu wb_io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+457,"TestTopModule cpu wb_io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+361,"TestTopModule cpu wb_io_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+233,"TestTopModule cpu wb_io_regs_write_source", false,-1, 1,0);
        vcdp->declBus(c+433,"TestTopModule cpu wb_io_regs_write_data", false,-1, 31,0);
        vcdp->declBit(c+97,"TestTopModule cpu regs clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule cpu regs reset", false,-1);
        vcdp->declBit(c+153,"TestTopModule cpu regs io_write_enable", false,-1);
        vcdp->declBus(c+161,"TestTopModule cpu regs io_write_address", false,-1, 4,0);
        vcdp->declBus(c+433,"TestTopModule cpu regs io_write_data", false,-1, 31,0);
        vcdp->declBus(c+169,"TestTopModule cpu regs io_read_address1", false,-1, 4,0);
        vcdp->declBus(c+177,"TestTopModule cpu regs io_read_address2", false,-1, 4,0);
        vcdp->declBus(c+441,"TestTopModule cpu regs io_read_data1", false,-1, 31,0);
        vcdp->declBus(c+449,"TestTopModule cpu regs io_read_data2", false,-1, 31,0);
        vcdp->declBus(c+1121,"TestTopModule cpu regs io_debug_read_address", false,-1, 4,0);
        vcdp->declBus(c+1145,"TestTopModule cpu regs io_debug_read_data", false,-1, 31,0);
        vcdp->declBus(c+801,"TestTopModule cpu regs registers_0", false,-1, 31,0);
        vcdp->declBus(c+809,"TestTopModule cpu regs registers_1", false,-1, 31,0);
        vcdp->declBus(c+817,"TestTopModule cpu regs registers_2", false,-1, 31,0);
        vcdp->declBus(c+825,"TestTopModule cpu regs registers_3", false,-1, 31,0);
        vcdp->declBus(c+833,"TestTopModule cpu regs registers_4", false,-1, 31,0);
        vcdp->declBus(c+841,"TestTopModule cpu regs registers_5", false,-1, 31,0);
        vcdp->declBus(c+849,"TestTopModule cpu regs registers_6", false,-1, 31,0);
        vcdp->declBus(c+857,"TestTopModule cpu regs registers_7", false,-1, 31,0);
        vcdp->declBus(c+865,"TestTopModule cpu regs registers_8", false,-1, 31,0);
        vcdp->declBus(c+873,"TestTopModule cpu regs registers_9", false,-1, 31,0);
        vcdp->declBus(c+881,"TestTopModule cpu regs registers_10", false,-1, 31,0);
        vcdp->declBus(c+889,"TestTopModule cpu regs registers_11", false,-1, 31,0);
        vcdp->declBus(c+897,"TestTopModule cpu regs registers_12", false,-1, 31,0);
        vcdp->declBus(c+905,"TestTopModule cpu regs registers_13", false,-1, 31,0);
        vcdp->declBus(c+913,"TestTopModule cpu regs registers_14", false,-1, 31,0);
        vcdp->declBus(c+921,"TestTopModule cpu regs registers_15", false,-1, 31,0);
        vcdp->declBus(c+929,"TestTopModule cpu regs registers_16", false,-1, 31,0);
        vcdp->declBus(c+937,"TestTopModule cpu regs registers_17", false,-1, 31,0);
        vcdp->declBus(c+945,"TestTopModule cpu regs registers_18", false,-1, 31,0);
        vcdp->declBus(c+953,"TestTopModule cpu regs registers_19", false,-1, 31,0);
        vcdp->declBus(c+961,"TestTopModule cpu regs registers_20", false,-1, 31,0);
        vcdp->declBus(c+969,"TestTopModule cpu regs registers_21", false,-1, 31,0);
        vcdp->declBus(c+977,"TestTopModule cpu regs registers_22", false,-1, 31,0);
        vcdp->declBus(c+985,"TestTopModule cpu regs registers_23", false,-1, 31,0);
        vcdp->declBus(c+993,"TestTopModule cpu regs registers_24", false,-1, 31,0);
        vcdp->declBus(c+1001,"TestTopModule cpu regs registers_25", false,-1, 31,0);
        vcdp->declBus(c+1009,"TestTopModule cpu regs registers_26", false,-1, 31,0);
        vcdp->declBus(c+1017,"TestTopModule cpu regs registers_27", false,-1, 31,0);
        vcdp->declBus(c+1025,"TestTopModule cpu regs registers_28", false,-1, 31,0);
        vcdp->declBus(c+1033,"TestTopModule cpu regs registers_29", false,-1, 31,0);
        vcdp->declBus(c+1041,"TestTopModule cpu regs registers_30", false,-1, 31,0);
        vcdp->declBus(c+1049,"TestTopModule cpu regs registers_31", false,-1, 31,0);
        vcdp->declBit(c+97,"TestTopModule cpu inst_fetch clock", false,-1);
        vcdp->declBit(c+1105,"TestTopModule cpu inst_fetch reset", false,-1);
        vcdp->declBit(c+353,"TestTopModule cpu inst_fetch io_jump_flag_id", false,-1);
        vcdp->declBus(c+105,"TestTopModule cpu inst_fetch io_jump_address_id", false,-1, 31,0);
        vcdp->declBus(c+497,"TestTopModule cpu inst_fetch io_instruction_read_data", false,-1, 31,0);
        vcdp->declBit(c+1081,"TestTopModule cpu inst_fetch io_instruction_valid", false,-1);
        vcdp->declBus(c+793,"TestTopModule cpu inst_fetch io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+185,"TestTopModule cpu inst_fetch io_instruction", false,-1, 31,0);
        vcdp->declBus(c+793,"TestTopModule cpu inst_fetch pc", false,-1, 31,0);
        vcdp->declBus(c+185,"TestTopModule cpu id io_instruction", false,-1, 31,0);
        vcdp->declBus(c+169,"TestTopModule cpu id io_regs_reg1_read_address", false,-1, 4,0);
        vcdp->declBus(c+177,"TestTopModule cpu id io_regs_reg2_read_address", false,-1, 4,0);
        vcdp->declBus(c+193,"TestTopModule cpu id io_ex_immediate", false,-1, 31,0);
        vcdp->declBit(c+201,"TestTopModule cpu id io_ex_aluop1_source", false,-1);
        vcdp->declBit(c+209,"TestTopModule cpu id io_ex_aluop2_source", false,-1);
        vcdp->declBit(c+217,"TestTopModule cpu id io_memory_read_enable", false,-1);
        vcdp->declBit(c+225,"TestTopModule cpu id io_memory_write_enable", false,-1);
        vcdp->declBus(c+233,"TestTopModule cpu id io_wb_reg_write_source", false,-1, 1,0);
        vcdp->declBit(c+153,"TestTopModule cpu id io_reg_write_enable", false,-1);
        vcdp->declBus(c+161,"TestTopModule cpu id io_reg_write_address", false,-1, 4,0);
        vcdp->declBus(c+249,"TestTopModule cpu id opcode", false,-1, 6,0);
        vcdp->declBus(c+161,"TestTopModule cpu id rd", false,-1, 4,0);
        vcdp->declBus(c+257,"TestTopModule cpu id rs1", false,-1, 4,0);
        vcdp->declBus(c+185,"TestTopModule cpu ex io_instruction", false,-1, 31,0);
        vcdp->declBus(c+793,"TestTopModule cpu ex io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+441,"TestTopModule cpu ex io_reg1_data", false,-1, 31,0);
        vcdp->declBus(c+449,"TestTopModule cpu ex io_reg2_data", false,-1, 31,0);
        vcdp->declBus(c+193,"TestTopModule cpu ex io_immediate", false,-1, 31,0);
        vcdp->declBit(c+201,"TestTopModule cpu ex io_aluop1_source", false,-1);
        vcdp->declBit(c+209,"TestTopModule cpu ex io_aluop2_source", false,-1);
        vcdp->declBus(c+457,"TestTopModule cpu ex io_mem_alu_result", false,-1, 31,0);
        vcdp->declBit(c+353,"TestTopModule cpu ex io_if_jump_flag", false,-1);
        vcdp->declBus(c+105,"TestTopModule cpu ex io_if_jump_address", false,-1, 31,0);
        vcdp->declBus(c+265,"TestTopModule cpu ex alu_io_func", false,-1, 3,0);
        vcdp->declBus(c+465,"TestTopModule cpu ex alu_io_op1", false,-1, 31,0);
        vcdp->declBus(c+473,"TestTopModule cpu ex alu_io_op2", false,-1, 31,0);
        vcdp->declBus(c+457,"TestTopModule cpu ex alu_io_result", false,-1, 31,0);
        vcdp->declBus(c+249,"TestTopModule cpu ex alu_ctrl_io_opcode", false,-1, 6,0);
        vcdp->declBus(c+241,"TestTopModule cpu ex alu_ctrl_io_funct3", false,-1, 2,0);
        vcdp->declBus(c+273,"TestTopModule cpu ex alu_ctrl_io_funct7", false,-1, 6,0);
        vcdp->declBus(c+265,"TestTopModule cpu ex alu_ctrl_io_alu_funct", false,-1, 3,0);
        vcdp->declBus(c+249,"TestTopModule cpu ex opcode", false,-1, 6,0);
        vcdp->declBus(c+241,"TestTopModule cpu ex funct3", false,-1, 2,0);
        vcdp->declBus(c+265,"TestTopModule cpu ex alu io_func", false,-1, 3,0);
        vcdp->declBus(c+465,"TestTopModule cpu ex alu io_op1", false,-1, 31,0);
        vcdp->declBus(c+473,"TestTopModule cpu ex alu io_op2", false,-1, 31,0);
        vcdp->declBus(c+457,"TestTopModule cpu ex alu io_result", false,-1, 31,0);
        vcdp->declBus(c+249,"TestTopModule cpu ex alu_ctrl io_opcode", false,-1, 6,0);
        vcdp->declBus(c+241,"TestTopModule cpu ex alu_ctrl io_funct3", false,-1, 2,0);
        vcdp->declBus(c+273,"TestTopModule cpu ex alu_ctrl io_funct7", false,-1, 6,0);
        vcdp->declBus(c+265,"TestTopModule cpu ex alu_ctrl io_alu_funct", false,-1, 3,0);
        vcdp->declBus(c+457,"TestTopModule cpu mem io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+449,"TestTopModule cpu mem io_reg2_data", false,-1, 31,0);
        vcdp->declBit(c+217,"TestTopModule cpu mem io_memory_read_enable", false,-1);
        vcdp->declBit(c+225,"TestTopModule cpu mem io_memory_write_enable", false,-1);
        vcdp->declBus(c+241,"TestTopModule cpu mem io_funct3", false,-1, 2,0);
        vcdp->declBus(c+361,"TestTopModule cpu mem io_wb_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+457,"TestTopModule cpu mem io_memory_bundle_address", false,-1, 31,0);
        vcdp->declBus(c+313,"TestTopModule cpu mem io_memory_bundle_write_data", false,-1, 31,0);
        vcdp->declBit(c+137,"TestTopModule cpu mem io_memory_bundle_write_enable", false,-1);
        vcdp->declBit(c+321,"TestTopModule cpu mem io_memory_bundle_write_strobe_0", false,-1);
        vcdp->declBit(c+329,"TestTopModule cpu mem io_memory_bundle_write_strobe_1", false,-1);
        vcdp->declBit(c+337,"TestTopModule cpu mem io_memory_bundle_write_strobe_2", false,-1);
        vcdp->declBit(c+345,"TestTopModule cpu mem io_memory_bundle_write_strobe_3", false,-1);
        vcdp->declBus(c+145,"TestTopModule cpu mem io_memory_bundle_read_data", false,-1, 31,0);
        vcdp->declBus(c+481,"TestTopModule cpu mem mem_address_index", false,-1, 1,0);
        vcdp->declBus(c+793,"TestTopModule cpu wb io_instruction_address", false,-1, 31,0);
        vcdp->declBus(c+457,"TestTopModule cpu wb io_alu_result", false,-1, 31,0);
        vcdp->declBus(c+361,"TestTopModule cpu wb io_memory_read_data", false,-1, 31,0);
        vcdp->declBus(c+233,"TestTopModule cpu wb io_regs_write_source", false,-1, 1,0);
        vcdp->declBus(c+433,"TestTopModule cpu wb io_regs_write_data", false,-1, 31,0);
    }
}

void VTestTopModule::traceFullThis__1(VTestTopModule__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestTopModule* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[0]),32);
        vcdp->fullBus(c+2,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[1]),32);
        vcdp->fullBus(c+3,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[2]),32);
        vcdp->fullBus(c+4,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[3]),32);
        vcdp->fullBus(c+5,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[4]),32);
        vcdp->fullBus(c+6,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[5]),32);
        vcdp->fullBus(c+7,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[6]),32);
        vcdp->fullBus(c+8,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[7]),32);
        vcdp->fullBus(c+9,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[8]),32);
        vcdp->fullBus(c+10,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[9]),32);
        vcdp->fullBus(c+11,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[10]),32);
        vcdp->fullBus(c+12,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem[11]),32);
        vcdp->fullBit(c+97,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_clock));
        vcdp->fullBus(c+105,((vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
                              + ((0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                  ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1
                                  : vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc))),32);
        vcdp->fullBit(c+113,(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_enable));
        vcdp->fullBus(c+121,(((0xbU >= (0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))
                               ? vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem
                              [(0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)]
                               : 0U)),32);
        vcdp->fullBus(c+129,(((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                               ? ((0xbU >= (0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))
                                   ? vlTOPp->TestTopModule__DOT__instruction_rom__DOT__mem
                                  [(0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)]
                                   : 0U) : 0U)),32);
        vcdp->fullBit(c+137,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              & (0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))));
        vcdp->fullBus(c+145,(vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data),32);
        vcdp->fullBit(c+153,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_reg_write_enable));
        vcdp->fullBus(c+161,((0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 7U))),5);
        vcdp->fullBus(c+169,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_regs_reg1_read_address),5);
        vcdp->fullBus(c+177,((0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0x14U))),5);
        vcdp->fullBus(c+185,(vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction),32);
        vcdp->fullBus(c+193,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate),32);
        vcdp->fullBit(c+201,((((0x17U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                               | (0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                              | (0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)))));
        vcdp->fullBit(c+209,((0x33U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->fullBit(c+217,((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->fullBit(c+225,((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))));
        vcdp->fullBus(c+233,(vlTOPp->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source),2);
        vcdp->fullBus(c+241,((7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                    >> 0xcU))),3);
        vcdp->fullBus(c+249,((0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)),7);
        vcdp->fullBus(c+257,((0x1fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0xfU))),5);
        vcdp->fullBus(c+265,(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct),4);
        vcdp->fullBus(c+273,((0x7fU & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                       >> 0x19U))),7);
        vcdp->fullBit(c+281,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                               ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                  & ((0x23U == (0x7fU 
                                                & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                     & ((0U == (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                         ? (0U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                         : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                               : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->fullBit(c+289,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                               ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                  & ((0x23U == (0x7fU 
                                                & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                     & ((0U == (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                         ? (1U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                         : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                               : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->fullBit(c+297,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                               ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                  & ((0x23U == (0x7fU 
                                                & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                     & ((0U == (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                         ? (2U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                         : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                               : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->fullBit(c+305,(((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid)
                               ? ((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                  & ((0x23U == (0x7fU 
                                                & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                     & ((0U == (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                         ? (3U == (3U 
                                                   & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                         : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                               : (0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address))));
        vcdp->fullBus(c+313,((IData)(((3U == (0x7fU 
                                              & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                       ? VL_ULL(0) : 
                                      ((0x23U == (0x7fU 
                                                  & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                                        ? (VL_ULL(0xffffffffff) 
                                           & ((0U == 
                                               (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
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
        vcdp->fullBit(c+321,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0xcU)))
                                     ? (0U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                     : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->fullBit(c+329,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0xcU)))
                                     ? (1U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                     : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        vcdp->fullBit(c+337,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0xcU)))
                                     ? (2U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                     : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->fullBit(c+345,(((3U != (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                              & ((0x23U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((0U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0xcU)))
                                     ? (3U == (3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                     : (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        vcdp->fullBit(c+353,((((0x6fU == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                               | (0x67U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))) 
                              | ((0x63U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction)) 
                                 & ((7U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                  >> 0xcU)))
                                     ? (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                        >= vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                     : ((6U == (7U 
                                                & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                   >> 0xcU)))
                                         ? (vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                            < vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                         : ((5U == 
                                             (7U & 
                                              (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                               >> 0xcU)))
                                             ? VL_GTES_III(1,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                     >> 0xcU)))
                                                 ? 
                                                VL_LTS_III(1,32,32, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                                 : 
                                                ((1U 
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
        vcdp->fullBus(c+361,(((3U == (0x7fU & vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction))
                               ? ((2U == (7U & (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
                                                >> 0xcU)))
                                   ? vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data
                                   : ((5U == (7U & 
                                              (vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction 
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
                                               (3U 
                                                & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)))
                                               ? ((
                                                   ((0x8000U 
                                                     & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data))
                                               : ((
                                                   ((0x80000000U 
                                                     & vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & (vlTOPp->TestTopModule__DOT__cpu_io_memory_bundle_read_data 
                                                        >> 0x10U))))
                                           : vlTOPp->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                               : 0U)),32);
        vcdp->fullBus(c+369,(vlTOPp->TestTopModule__DOT__mem_io_bundle_address),32);
        vcdp->fullBus(c+377,(vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data),32);
        vcdp->fullBus(c+385,((0x1fffffffU & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),32);
        vcdp->fullBus(c+393,((0xffU & vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data)),8);
        vcdp->fullBus(c+401,((0x1fffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_address 
                                         >> 2U))),13);
        vcdp->fullBus(c+409,((0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                                       >> 8U))),8);
        vcdp->fullBus(c+417,((0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                                       >> 0x10U))),8);
        vcdp->fullBus(c+425,((0xffU & (vlTOPp->TestTopModule__DOT__mem_io_bundle_write_data 
                                       >> 0x18U))),8);
        vcdp->fullBus(c+433,(vlTOPp->TestTopModule__DOT__cpu__DOT__wb_io_regs_write_data),32);
        vcdp->fullBus(c+441,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data1),32);
        vcdp->fullBus(c+449,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs_io_read_data2),32);
        vcdp->fullBus(c+457,((IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9)),32);
        vcdp->fullBus(c+465,(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1),32);
        vcdp->fullBus(c+473,(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2),32);
        vcdp->fullBus(c+481,((3U & (IData)(vlTOPp->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___GEN_9))),2);
        vcdp->fullBus(c+489,((((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                                [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                             << 0x10U)) 
                              | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                  [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                                  << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]))),32);
        vcdp->fullBus(c+497,((((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                                [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                                << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                                             << 0x10U)) 
                              | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                  [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                                  << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]))),32);
        vcdp->fullBus(c+505,((((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                                [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                << 0x18U) | (vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                             << 0x10U)) 
                              | ((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                                  [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                                  << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                                 [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]))),32);
        vcdp->fullBit(c+513,((0U == (IData)(vlTOPp->TestTopModule__DOT__CPU_clkdiv))));
        vcdp->fullBus(c+521,(vlTOPp->TestTopModule__DOT__CPU_clkdiv),2);
        vcdp->fullBit(c+529,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+537,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0),13);
        vcdp->fullBus(c+545,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+553,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+561,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0),13);
        vcdp->fullBus(c+569,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+577,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0_io_instruction_MPORT_en_pipe_0));
        vcdp->fullBus(c+585,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0),13);
        vcdp->fullBus(c+593,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+601,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+609,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+617,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+625,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+633,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_en_pipe_0));
        vcdp->fullBus(c+641,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+649,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+657,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+665,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+673,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+681,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2_io_instruction_MPORT_en_pipe_0));
        vcdp->fullBus(c+689,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+697,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+705,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+713,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_en_pipe_0));
        vcdp->fullBus(c+721,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0]),8);
        vcdp->fullBit(c+729,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_en_pipe_0));
        vcdp->fullBus(c+737,(vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                             [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0]),8);
        vcdp->fullBus(c+745,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                               << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0])),16);
        vcdp->fullBus(c+753,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0] 
                               << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_addr_pipe_0])),16);
        vcdp->fullBus(c+761,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                               << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0])),16);
        vcdp->fullBus(c+769,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0] 
                               << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_debug_read_data_MPORT_addr_pipe_0])),16);
        vcdp->fullBus(c+777,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_1
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                               << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_0
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0])),16);
        vcdp->fullBus(c+785,(((vlTOPp->TestTopModule__DOT__mem__DOT__mem_3
                               [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0] 
                               << 8U) | vlTOPp->TestTopModule__DOT__mem__DOT__mem_2
                              [vlTOPp->TestTopModule__DOT__mem__DOT__mem_1_io_instruction_MPORT_addr_pipe_0])),16);
        vcdp->fullBus(c+793,(vlTOPp->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        vcdp->fullBus(c+801,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0),32);
        vcdp->fullBus(c+809,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1),32);
        vcdp->fullBus(c+817,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2),32);
        vcdp->fullBus(c+825,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3),32);
        vcdp->fullBus(c+833,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4),32);
        vcdp->fullBus(c+841,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5),32);
        vcdp->fullBus(c+849,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6),32);
        vcdp->fullBus(c+857,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7),32);
        vcdp->fullBus(c+865,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8),32);
        vcdp->fullBus(c+873,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9),32);
        vcdp->fullBus(c+881,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10),32);
        vcdp->fullBus(c+889,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11),32);
        vcdp->fullBus(c+897,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12),32);
        vcdp->fullBus(c+905,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13),32);
        vcdp->fullBus(c+913,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14),32);
        vcdp->fullBus(c+921,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15),32);
        vcdp->fullBus(c+929,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16),32);
        vcdp->fullBus(c+937,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17),32);
        vcdp->fullBus(c+945,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18),32);
        vcdp->fullBus(c+953,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19),32);
        vcdp->fullBus(c+961,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20),32);
        vcdp->fullBus(c+969,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21),32);
        vcdp->fullBus(c+977,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22),32);
        vcdp->fullBus(c+985,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23),32);
        vcdp->fullBus(c+993,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24),32);
        vcdp->fullBus(c+1001,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25),32);
        vcdp->fullBus(c+1009,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26),32);
        vcdp->fullBus(c+1017,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27),32);
        vcdp->fullBus(c+1025,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28),32);
        vcdp->fullBus(c+1033,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29),32);
        vcdp->fullBus(c+1041,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30),32);
        vcdp->fullBus(c+1049,(vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31),32);
        vcdp->fullBus(c+1057,(vlTOPp->TestTopModule__DOT__rom_loader__DOT__address),32);
        vcdp->fullBus(c+1065,((IData)(((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)
                                        ? (VL_ULL(0x7ffffffff) 
                                           & (VL_ULL(0x1000) 
                                              + ((QData)((IData)(vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)) 
                                                 << 2U)))
                                        : VL_ULL(0)))),32);
        vcdp->fullBit(c+1073,((0xbU >= vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)));
        vcdp->fullBit(c+1081,(vlTOPp->TestTopModule__DOT__rom_loader__DOT__valid));
        vcdp->fullBus(c+1089,((0xfU & vlTOPp->TestTopModule__DOT__rom_loader__DOT__address)),4);
        vcdp->fullBit(c+1097,(vlTOPp->clock));
        vcdp->fullBit(c+1105,(vlTOPp->reset));
        vcdp->fullBus(c+1113,(vlTOPp->io_mem_debug_read_address),32);
        vcdp->fullBus(c+1121,(vlTOPp->io_regs_debug_read_address),5);
        vcdp->fullBus(c+1129,(vlTOPp->io_regs_debug_read_data),32);
        vcdp->fullBus(c+1137,(vlTOPp->io_mem_debug_read_data),32);
        vcdp->fullBus(c+1145,(((0U == (IData)(vlTOPp->io_regs_debug_read_address))
                                ? 0U : ((0x1fU == (IData)(vlTOPp->io_regs_debug_read_address))
                                         ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                         : ((0x1eU 
                                             == (IData)(vlTOPp->io_regs_debug_read_address))
                                             ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                             : ((0x1dU 
                                                 == (IData)(vlTOPp->io_regs_debug_read_address))
                                                 ? vlTOPp->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                 : 
                                                ((0x1cU 
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
        vcdp->fullBit(c+1153,(1U));
        vcdp->fullBus(c+1161,(vlTOPp->TestTopModule__DOT__instruction_rom__DOT__initvar),32);
    }
}
