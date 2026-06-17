#include "cycle.h"

typedef struct
{
    cycle_t cycle;
    uint16_t delay;
} special_cycle_t;

uint8_t special_cycle_create(special_cycle_t *object, uint8_t id, uint16_t etr, uint16_t delay);
uint8_t special_cycle_get_id(special_cycle_t *object, uint8_t *id);
uint16_t special_cycle_get_etr(special_cycle_t *object, uint16_t *etr);
uint16_t special_cycle_get_delay(special_cycle_t *object, uint16_t *delay);