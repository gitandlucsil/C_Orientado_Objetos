#include "stdint.h"
#include "cycle.h"

typedef struct
{
    cycle_t cycle;
    uint8_t id;
} special_cycle_t;

uint8_t special_cycle_create(special_cycle_t *object, uint8_t id);