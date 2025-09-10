#ifndef ALARM_MONITOR_H_
#define ALARM_MONITOR_H_

#include "state.h"


enum
{
    ALARM_ON,
    ALARM_OFF,
    AM_WAITING
};
extern int AM_State_ID;
extern void (*AM_State)();

// Declare states Functions CA
STATE_define(AM_on);
STATE_define(AM_off);
STATE_define(AM_waiting);

#endif