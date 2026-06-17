#include <stdio.h>
#include "cycle_control.h"


void cycle_control_execute(cycle_t *cycle)
{
    cycle->run(cycle->self);
    cycle->pause(cycle->self);
    cycle->cancel(cycle->self);
}