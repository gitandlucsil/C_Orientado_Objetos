#include <stdio.h>
#include "specialcycle.h"

int main(void)
{

    special_cycle_t SpecialCycle;
    struct {
        uint8_t id;
        uint16_t etr;
        uint16_t delay;
    } data;

    if (special_cycle_create(&SpecialCycle, 17, 600, 2300) == TRUE)
    {
        printf("Special cycle created!\n");
    }
    if (special_cycle_get_id(&SpecialCycle, &data.id) == TRUE)
    {
        printf("Special cycle Id read!\n");
    }
    if (special_cycle_get_etr(&SpecialCycle, &data.etr) == TRUE)
    {
        printf("Special cycle Etr read!\n");
    }
    if (special_cycle_get_delay(&SpecialCycle, &data.delay) == TRUE)
    {
        printf("Special cycle Delay read!\n");
    }
    printf("Data read, id: %d, etr: %d, delay: %d\n", data.id, data.etr, data.delay);
    /*printf("%d\n", &SpecialCycle);
    printf("%d\n", &SpecialCycle.cycle);
    printf("%d\n", &SpecialCycle.cycle.id);
    printf("%d\n", &SpecialCycle.cycle.etr);
    printf("%d\n", &SpecialCycle.delay);*/
    
    return 0;
}