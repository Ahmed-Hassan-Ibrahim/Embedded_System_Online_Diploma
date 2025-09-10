#include "Alarm_Actu.h"

// Variables
int AA_State_ID;
void (*AA_State)();

void AA_Init()
{
    // Init Alarm Actuator Driver
}

STATE_define(AA_off)
{
    // State Name
    AA_State_ID = AA_ALARAM_OFF;
    // State Action
    Set_Alarm_actuator(0);
}

STATE_define(AA_on)
{
    // State Name
    AA_State_ID = AA_ALARAM_ON;
    // State Action
    //Set_Alarm_actuator(1);
}

void Start_Alarm()
{
    
    AA_State = STATE(AA_on);
    Set_Alarm_actuator(1);
}

void Stop_Alarm()
{
    AA_State = STATE(AA_off);
}

STATE_define(AA_waiting)
{
    // State Name
    AA_State_ID = AA_WAITING;
}

