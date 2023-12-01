// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VEXECUTE_H_
#define _VEXECUTE_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"

//==========

class VExecute__Syms;
class VExecute_VerilatedVcd;


//----------

VL_MODULE(VExecute) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_aluop1_source,0,0);
    VL_IN8(io_aluop2_source,0,0);
    VL_OUT8(io_if_jump_flag,0,0);
    VL_IN(io_instruction,31,0);
    VL_IN(io_instruction_address,31,0);
    VL_IN(io_reg1_data,31,0);
    VL_IN(io_reg2_data,31,0);
    VL_IN(io_immediate,31,0);
    VL_OUT(io_mem_alu_result,31,0);
    VL_OUT(io_if_jump_address,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*3:0*/ Execute__DOT__alu_ctrl_io_alu_funct;
    CData/*3:0*/ Execute__DOT__alu_ctrl__DOT___GEN_7;
    IData/*31:0*/ Execute__DOT__alu_io_op1;
    IData/*31:0*/ Execute__DOT__alu_io_op2;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VExecute__Syms* __VlSymsp;  // Symbol table
  private:
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VExecute);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VExecute(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VExecute();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VExecute__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VExecute__Syms* symsp, bool first);
  private:
    static QData _change_request(VExecute__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VExecute__Syms* __restrict vlSymsp);
  private:
    void _configure_coverage(VExecute__Syms* __restrict vlSymsp, bool first) VL_ATTR_COLD;
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VExecute__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VExecute__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VExecute__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VExecute__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
