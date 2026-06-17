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
