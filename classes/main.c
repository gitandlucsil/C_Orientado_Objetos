#include "cycle.h"
#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    cycle_t *delicates = cycle_create(3, 600);
    if (delicates != NULL)
    {
        printf("cycle delicates created!\n");
        free(delicates);
    }
    return 0;
}