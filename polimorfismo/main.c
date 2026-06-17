#include <stdio.h>
#include "cycle_control.h"
#include "specialcycle.h"
#include "favoritecycle.h"

#define SPECIAL_ID 44
#define FAVORITE_ID 78
int main(void)
{
    special_cycle_t special;
    favorite_cycle_t favorite;

    if (special_cycle_create(&special, SPECIAL_ID) == TRUE)
    {
        printf("Special cycle created!\n");
    }
    if (favorite_cycle_create(&favorite, FAVORITE_ID) == TRUE)
    {
        printf("Favorite cycle created!\n");
    }
    cycle_control_execute((cycle_t*)&special);
    cycle_control_execute((cycle_t*)&favorite);

    return 0;
}
