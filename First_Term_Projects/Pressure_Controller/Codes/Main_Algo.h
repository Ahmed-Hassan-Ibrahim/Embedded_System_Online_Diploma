#ifndef MAIN_ALGO_H_
#define MAIN_ALGO_H_

#include "state.h"

// Define states
enum
{
    CHECK_PRESSURE
};
extern int MA_State_ID;
extern void (*MA_State)();

// Declare states Functions CA
STATE_define(MA_check_pressure);

#endif