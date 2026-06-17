#include "stdint.h"
#include "cycle.h"

typedef struct
{
    cycle_t cycle;
    uint8_t id;
} favorite_cycle_t;

uint8_t favorite_cycle_create(favorite_cycle_t *object, uint8_t id);