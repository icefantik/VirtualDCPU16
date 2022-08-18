#ifndef FLAGS_H_INCLUDED
#define FLAGS_H_INCLUDED

#include <stdbool.h>

typedef struct flags {
    bool IF, IR, HF;
    bool CF, ZF;
    bool EF, GF, LF;
} flags_t;

#endif // FLAGS_H_INCLUDED
