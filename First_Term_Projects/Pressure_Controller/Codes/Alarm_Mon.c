#include "Alarm_Mon.h"

// Variables
static uint32_t Alarm_Period = 60;
int AM_State_ID;
void (*AM_State)();

STATE_define(AM_on)
{
    // State Name
    AM_State_ID = ALARM_ON;

    // State Action
    //Start_Alarm();
}

STATE_define(AM_off)
{
    // State Name
    AM_State_ID = ALARM_OFF;
}

STATE_define(AM_waiting)
{
    // State Name
    AM_State_ID = AM_WAITING;

    // State Action
    Delay(Alarm_Period);
    Stop_Alarm();
    AM_State = STATE(AM_off);
}

void High_Pressure_Detected()
{
    AM_State = STATE(AM_on);
    Start_Alarm();
}



