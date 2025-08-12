#include "CA.h"

// Variables
static uint32_t CA_Speed = 0;
static uint32_t CA_Distance = 0;
static uint32_t CA_Threshold = 50;
int CA_State_ID;
void (*CA_State)();


STATE_define(CA_Waiting)
{
    // State Name
    CA_State_ID = WAITING;

    // State Action
    CA_Speed = 0;
    // DC_MOTOR(CA_Speed);

    // Event Check
    // US_Get_Distance(CA_Distance);
    CA_Distance = US_Get_Distance_Random(45, 55, 1);
    (CA_Distance <= CA_Threshold) ? (CA_State = STATE(CA_Waiting)) : (CA_State = STATE(CA_Driving));
    printf("\nCA_Waiting State: Distance = %d     Speed = %d", CA_Distance, CA_Speed);
}

STATE_define(CA_Driving)
{
    // State Name
    CA_State_ID = DRIVING;

    // State Action
    CA_Speed = 30;
    // DC_MOTOR(CA_Speed);

    // Event Check
    // US_Get_Distance(CA_Distance);
    CA_Distance = US_Get_Distance_Random(45, 55, 1);
    (CA_Distance <= CA_Threshold) ? (CA_State = STATE(CA_Waiting)) : (CA_State = STATE(CA_Driving));
    printf("\nCA_Driving State: Distance = %d     Speed = %d", CA_Distance, CA_Speed);
}

//Function to generate random number in range l and r
int US_Get_Distance_Random(int l, int r, int count)
{
    int i, rand_num;
    for (i = 0; i < count; i++)
        rand_num = (rand() % (r - l + 1)) + l;

    return rand_num;
}