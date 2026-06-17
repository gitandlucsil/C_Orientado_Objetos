#include "specialcycle.h"
#include "stdlib.h"
#include "stdio.h"

uint8_t special_cycle_create(special_cycle_t *object, uint8_t id, uint16_t etr, uint16_t delay)
{
    uint8_t status = FALSE;
    if (object != NULL) 
    {
        object->delay = delay;
        status = cycle_create((cycle_t *)object, id, etr);
    }
    return status;
}
uint8_t special_cycle_get_id(special_cycle_t *object, uint8_t *id)
{
    uint8_t status = FALSE;
    if (object != NULL) 
    {
        status = cycle_get_id((cycle_t *)object, id);
    }
    return status;
}
uint16_t special_cycle_get_etr(special_cycle_t *object, uint16_t *etr)
{
    uint8_t status = FALSE;
    if (object != NULL) 
    {
        status = cycle_get_etr((cycle_t *)object, etr);
    }
    return status;
}
uint16_t special_cycle_get_delay(special_cycle_t *object, uint16_t *delay)
{
    uint8_t status = FALSE;
    if (object != NULL && delay != NULL)
    {
        *delay = object->delay;
        status = TRUE;
    }
    return status;
}