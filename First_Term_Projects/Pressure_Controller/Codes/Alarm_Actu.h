#ifndef ALARM_ACTUATOR_H_
#define ALARM_ACTUATOR_H_

#include "state.h"



// Define states
enum
{
    AA_WAITING,
    AA_ALARAM_ON,
    AA_ALARAM_OFF
};
extern int AA_State_ID;
extern void (*AA_State)();

// Declare states Functions CA
STATE_define(AA_waiting);
STATE_define(AA_on);
STATE_define(AA_off);
void AA_Init();

#endif