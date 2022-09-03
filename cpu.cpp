#include "cpu.h"

cpu_t *cpu_create(void) { return (cpu_t)res; }

void cpu_delete(cpu_t *cpu) { free cpu; }

//load ROM in memory
void cpu_load(cpu_t *cpu, const char *rom) {
    int len = strlen(rom), inload = strlen(cpu.ram);
    for (int i = 0; i < len; ++i) {
        cpu.ram[inload++] = rom[i];
    }
}

void cpu_rswap(cpu_t *cpu) {

}

uint16_t cpu_nextw(cpu_t *cpu) {
    return 0;
}

void cpu_getop(cpu_t *cpu, opd_t *opd, uint8_t ) {

}

void cpu_setop(cpu_t *cpu, opd_t *opd, uint16_t ) {

}

void cpu_tick(cpu_t *cpu) {

}
