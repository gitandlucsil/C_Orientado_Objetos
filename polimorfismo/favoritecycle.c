#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "favoritecycle.h"


static void init (favorite_cycle_t *favorite_cycle);
static void favorite_run (void *cycle);
static void favorite_pause (void *cycle);
static void favorite_cancel (void *cycle);

uint8_t favorite_cycle_create(favorite_cycle_t *favorite_cycle, uint8_t id)
{
    uint8_t status = FALSE;
    if (favorite_cycle != NULL) 
    {
        init(favorite_cycle);
        favorite_cycle->id = id;
        status = TRUE;
    }
    return status;
}

static void init (favorite_cycle_t *favorite_cycle)
{
    memset (favorite_cycle, 0, sizeof(favorite_cycle_t));
    favorite_cycle->cycle.self = favorite_cycle; //keep context reference
    favorite_cycle->cycle.run = favorite_run;
    favorite_cycle->cycle.pause = favorite_pause;
    favorite_cycle->cycle.cancel = favorite_cancel;
}

static void favorite_run (void *favorite_cycle)
{
    favorite_cycle_t *cycle = (favorite_cycle_t *)favorite_cycle; //recover context
    printf("favorite cycle Id %d run\n", cycle->id);
}
static void favorite_pause (void *favorite_cycle)
{
    favorite_cycle_t *cycle = (favorite_cycle_t *)favorite_cycle;
    printf("favorite cycle Id %d pause\n", cycle->id);
}
static void favorite_cancel (void *favorite_cycle)
{
    favorite_cycle_t *cycle = (favorite_cycle_t *)favorite_cycle;
    printf("favorite cycle Id %d cancel\n", cycle->id);
}