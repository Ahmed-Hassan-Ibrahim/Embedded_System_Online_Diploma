#include "PS_Driver.h"

// Variables
static uint32_t p_val = 0;

int PS_State_ID;
void (*PS_State)();

void PS_Init()
{
    // Init PS Driver
}

STATE_define(PS_reading)
{
    // State Name
    PS_State_ID = PS_READING;

    // State Action
    p_val = getPressureVal();
    Set_Pressure_VAL(p_val);
    PS_State = STATE(PS_waiting);
}

STATE_define(PS_waiting)
{
    // State Name
    PS_State_ID = PS_WAITING;
}