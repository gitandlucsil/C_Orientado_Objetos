#include "stdint.h"
#include "stdio.h"

#define TRUE 1
#define FALSE 0

typedef struct
{
    uint8_t id;
    uint16_t etr;
} cycle_t;

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

int main(void) 
{
    cycle_t delicates;
    if (cycle_create(&delicates, 3, 600)) {
        printf("cycle delicates created!\n");
    }
}