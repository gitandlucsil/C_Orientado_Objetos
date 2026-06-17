#include "stdint.h"

#define TRUE 1
#define FALSE 0

typedef struct
{
    uint8_t id;
    uint16_t etr;
} cycle_t;

uint8_t cycle_create(cycle_t *cycle, uint8_t id, uint16_t etr);
uint8_t cycle_get_id(cycle_t *cycle, uint8_t *id);
uint8_t cycle_get_etr(cycle_t *cycle, uint16_t *etr);