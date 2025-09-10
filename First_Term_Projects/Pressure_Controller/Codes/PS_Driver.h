#ifndef PS_DRIVER_H_
#define PS_DRIVER_H_

#include "state.h"

// Define states
enum
{
    PS_READING,
    PS_WAITING
};
extern int PS_State_ID;
extern void (*PS_State)();

// Declare states Functions CA
STATE_define(PS_reading);
STATE_define(PS_waiting);
void PS_Init();

#endif