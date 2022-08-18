#ifndef CPU_H_INCLUDED
#define CPU_H_INCLUDED

typedef struct CPU {
    uint16_t ram[V16_RAMSIZE]; // Random Access Memory
    uint16_t iop[V16_IOPSIZE]; //Input-Output Ports
    uint16_t idt[V16_IDTSIZE]; //Interrupt vectors table (Interrupt Description Table)
    flags_t flags; //Flags
    regs_t reg_m, reg_a; //Main and Alt register files
    regs_t *reg_current; //Current register file
    uint16_t rip, rsp, rex; //Internal Registers: Instruction Pointer, Stack Pointer, EXtended Accumulator

    bool reg_swapped; //Is current register file alt
    bool running; //Is cpu running
    uint32_t cycles; //RAM access counter
} cpu_t;
#endif // CPU_H_INCLUDED
