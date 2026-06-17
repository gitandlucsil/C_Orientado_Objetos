#include "cycle.h"
#include "stdlib.h"
#include "stdio.h"

int main(void)
{
    cycle_t *delicates = cycle_create(3, 600);
    if (delicates != NULL)
    {
        /*printf("cycle delicates created!\n");
        printf("delicates id: %d, etr: %d\n", delicates->id, delicates->etr);
        delicates->etr = 56;
        printf("delicates id: %d, etr: %d\n", delicates->id, delicates->etr);*/
        /*printf("delicates id: %d, etr: %d\n", cycle_get_id(delicates), cycle_get_etr(delicates));
        cycle_set_etr(delicates, 450);
        printf("delicates id: %d, etr: %d\n", cycle_get_id(delicates), cycle_get_etr(delicates));*/
        free(delicates);
    }
    return 0;
}