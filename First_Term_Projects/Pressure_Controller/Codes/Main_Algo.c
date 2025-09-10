#include "Main_Algo.h"
#include "PS_driver.h"

// Variables 
static uint32_t MA_P_VAL = 0;
static uint32_t MA_Threshold = 20;
int MA_State_ID;
void (*MA_State)();

void Set_Pressure_VAL(int P_VAL)
{
    // Event Check
    (P_VAL <= MA_Threshold) ? (MA_State = STATE(MA_check_pressure)) : (High_Pressure_Detected());
    MA_P_VAL = P_VAL;
}

STATE_define(MA_check_pressure)
{
    // State Name
    MA_State_ID = CHECK_PRESSURE;
    //PS_State = STATE(PS_reading);
}