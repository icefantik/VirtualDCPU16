#ifndef OPERAND_H_INCLUDED
#define OPERAND_H_INCLUDED

typedef struct oprd {
    uint8_t code : 4;
    uint16_t value;
    uint16_t nextw;
} oprd;

#endif // OPERAND_H_INCLUDED
