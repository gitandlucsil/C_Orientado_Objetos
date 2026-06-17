#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "specialcycle.h"

static void init (special_cycle_t *special_cycle);
static void special_run (void *cycle);
static void special_pause (void *cycle);
static void special_cancel (void *cycle);

uint8_t special_cycle_create(special_cycle_t *special_cycle, uint8_t id)
{
    uint8_t status = FALSE;
    if (special_cycle != NULL) 
    {
        init(special_cycle);
        special_cycle->id = id;
        status = TRUE;
    }
    return status;
}

static void init (special_cycle_t *special_cycle)
{
    memset (special_cycle, 0, sizeof(special_cycle_t));
    
    special_cycle->cycle.self = special_cycle; //keep context reference
    special_cycle->cycle.run = special_run;
    special_cycle->cycle.pause = special_pause;
    special_cycle->cycle.cancel = special_cancel;
}

static void special_run (void *special_cycle)
{
    special_cycle_t *cycle = (special_cycle_t *)special_cycle; //recover context
    printf("special cycle Id %d run\n", cycle->id);
}
static void special_pause (void *special_cycle)
{
    special_cycle_t *cycle = (special_cycle_t *)special_cycle;
    printf("special cycle Id %d pause\n", cycle->id);
}
static void special_cancel (void *special_cycle)
{
    special_cycle_t *cycle = (special_cycle_t *)special_cycle;
    printf("special cycle Id %d cancel\n", cycle->id);
}