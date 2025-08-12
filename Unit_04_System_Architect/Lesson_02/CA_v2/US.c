#include "US.h"

// Variables
static uint32_t US_Distance = 0;
int US_State_ID;
void (*US_State)();

void US_Init()
{
    // Init US Driver
    printf("\nUS_init");
}

STATE_define(US_busy)
{
    // State Name
    US_State_ID = US_BUSY;

    // State Action
    US_Distance = US_Get_Distance_Random(45, 55, 1);

    printf("\nUS_BUSY State: Distance = %d", US_Distance);
    US_Set_Distance(US_Distance);
    US_State = STATE(US_busy);
}

// Function to generate random number in range l and r
int US_Get_Distance_Random(int l, int r, int count)
{
    int i, rand_num;

    for (i = 0; i < count; i++)
        rand_num = (rand() % (r - l + 1)) + l;

    return rand_num;
}