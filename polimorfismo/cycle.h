#ifndef CYCLE_H
#define CYCLE_H

typedef struct
{
    void *self;
    void (*run)(void *self);
    void (*pause)(void *self);
    void (*cancel)(void *self);

} cycle_t;

#define TRUE 1
#define FALSE 0

#endif // CYCLE_H