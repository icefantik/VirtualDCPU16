void cpu_tick(cpu_t *cpu)
{
    if (cpu->flags.HF) {
        if (!cpu->flags.IF) {
            cpu->running = false;
        }
        return;
    }
    uint16_t nw = cpu_nextw(cpu);
}
