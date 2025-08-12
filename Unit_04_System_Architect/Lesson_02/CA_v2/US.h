#ifndef US_H_
#define US_H_

#include "state.h"

// Define states
enum
{
    US_BUSY
};
extern int US_State_ID;
extern void (*US_State)();

// Declare states Functions CA
STATE_define(US_busy);
void US_Init();
int US_Get_Distance_Random(int l, int r, int count);

#endif