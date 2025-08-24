#ifndef DC_H_
#define DC_H_

#include "state.h"

// Define states
enum
{
    DC_IDLE,
    DC_BUSY
};
extern int DC_State_ID;
extern void (*DC_State)();

// Declare states Functions CA
STATE_define(DC_idle);
STATE_define(DC_busy);
void DC_Init();

#endif