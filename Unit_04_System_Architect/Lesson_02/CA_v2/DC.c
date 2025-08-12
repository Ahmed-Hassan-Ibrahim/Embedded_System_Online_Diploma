#include "DC.h"

// Variables
static uint32_t DC_Speed = 0;

int DC_State_ID;
void (*DC_State)();

void DC_Init()
{
    // Init DC Driver
    printf("\nDC_init");
}

void DC_Motor_Set(int s)
{
    DC_Speed = s;
    DC_State = STATE(DC_busy);
    printf("\nCA-------- speed = %d -------> DC", DC_Speed);
}

STATE_define(DC_idle)
{
    // State Name
    DC_State_ID = DC_IDLE;

    // State Action
    // Call PWM to make speed = DC_speed

    printf("\nDC_Idle State: Speed = %d", DC_Speed);
}

STATE_define(DC_busy)
{
    // State Name
    DC_State_ID = DC_BUSY;

    // State Action
    // Call PWM to make speed = DC_speed

    printf("\nDC_Busy State: Speed = %d", DC_Speed);
    DC_State = STATE(DC_idle);
}