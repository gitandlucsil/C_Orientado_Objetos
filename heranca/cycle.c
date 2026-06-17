#include "cycle.h"
#include "stdlib.h"
#include "stdio.h"

uint8_t cycle_create(cycle_t *cycle, uint8_t id, uint16_t etr)
{
    uint8_t status = FALSE;
    if (cycle != NULL) 
    {
        cycle->id = id;
        cycle->etr = etr;
        status = TRUE;
    }
    return status;
}

uint8_t cycle_get_id(cycle_t *cycle, uint8_t *id)
{
    uint8_t status = FALSE;
    if (cycle != NULL && id != NULL)
    {
        *id = cycle->id;
        status = TRUE;
    }
    return status;
    
}
uint8_t cycle_get_etr(cycle_t *cycle, uint16_t *etr)
{
    uint8_t status = FALSE;
    if (cycle != NULL && etr != NULL)
    {
        *etr = cycle->etr;
        status = TRUE;
    }
    return status;
}
