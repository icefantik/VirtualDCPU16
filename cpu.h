#ifndef CPU_H_INCLUDED
#define CPU_H_INCLUDED

#include "register.h"
#include "flags.h"

#define V16_RAMSIZE 1000
#define V16_ROMSIZE 1000
#define V16_IOPSIZE 1000
#define V16_IDTSIZE 1000

cpu_t *cpu_create(void); //Создаем экземпляр процессора
void cpu_delete(cpu_t *); //Удаляем экземпляр процессора
void cpu_load(cpu_t *, const char *); //Загружаем ROM в память
void cpu_rswap(cpu_t *); //Меняем наборы регистров
uint16_t cpu_nextw(cpu_t *); //RAM[RIP++]. Nuff said
void cpu_getop(cpu_t *, opd_t *, uint8_t); //Читаем операнд
void cpu_setop(cpu_t *, opd_t *, uint16_t); //Пишем операнд
void cpu_tick(cpu_t *); //Выполняем одну инструкцию

typedef struct CPU {
    uint16_t ram[V16_RAMSIZE]; // Random Access Memory
    //char *rom[V16_ROMSIZE]; // Read Only Memory
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
