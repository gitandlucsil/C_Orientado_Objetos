#include "stdlib.h"
#include "stdio.h"
#include "stdint.h"

int main(void)
{
    uint8_t value = 23;
    uint8_t *pointer;
    pointer = &value;
    printf("value: %d\n",value);
    printf("pointer: %d\n",pointer);
    printf("&pointer: %d\n",&pointer);
    printf("*pointer: %d\n",*pointer);
    printf("&value: %d\n",&value);
    value = 44;
    printf("new value: %d\n",value);
    printf("new *pointer: %d\n",*pointer);
    *pointer = 99;
    printf("new value: %d\n",value);
    printf("new *pointer: %d\n",*pointer);
    return 0;
}