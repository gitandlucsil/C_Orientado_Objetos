#include "cycle.h"
#include "stdlib.h"
#include "stdio.h"

struct cycle_t
{
    uint8_t id;
    uint16_t etr;
};

cycle_t *cycle_create(uint8_t id, uint16_t etr)
{
    cycle_t *cycle = calloc(1, sizeof(struct cycle_t));
    if (cycle != NULL)
    {
        cycle->id = id;
        cycle->etr = etr;
    }
    return cycle;
}

uint8_t cycle_get_id(cycle_t *cycle)
{
    if (cycle != NULL)
    {
        return cycle->id;
    }
}
uint16_t cycle_get_etr(cycle_t *cycle)
{
    if (cycle != NULL)
    {
        return cycle->etr;
    }
}

void cycle_set_etr(cycle_t *cycle, uint16_t etr)
{
    if (cycle != NULL && etr >= 0)
    {
        cycle->etr = etr;
    }
}