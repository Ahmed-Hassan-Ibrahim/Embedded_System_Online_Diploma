#include "CA.h"

// Variables
static uint32_t CA_Speed = 0;
static uint32_t CA_Distance = 0;
static uint32_t CA_Threshold = 50;
int CA_State_ID;
void (*CA_State)();

void US_Set_Distance(int d)
{
    // Event Check
    CA_Distance = d;
    (CA_Distance <= CA_Threshold) ? (CA_State = STATE(CA_Waiting)) : (CA_State = STATE(CA_Driving));
    printf("\nUS-------- distance = %d -------> CA", CA_Distance);
}

STATE_define(CA_Waiting)
{
    // State Name
    CA_State_ID = WAITING;

    // State Action
    CA_Speed = 0;
    DC_Motor_Set(CA_Speed);

    printf("\nCA_Waiting State: Distance = %d     Speed = %d", CA_Distance, CA_Speed);
}

STATE_define(CA_Driving)
{
    // State Name
    CA_State_ID = DRIVING;

    // State Action
    CA_Speed = 30;
    DC_Motor_Set(CA_Speed);

    printf("\nCA_Driving State: Distance = %d     Speed = %d", CA_Distance, CA_Speed);
}