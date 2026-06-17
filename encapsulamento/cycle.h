#include "stdint.h"

typedef struct cycle_t cycle_t;

cycle_t *cycle_create(uint8_t id, uint16_t etr);
uint8_t cycle_get_id(cycle_t *cycle);
uint16_t cycle_get_etr(cycle_t *cycle);
void cycle_set_etr(cycle_t *cycle, uint16_t etr);