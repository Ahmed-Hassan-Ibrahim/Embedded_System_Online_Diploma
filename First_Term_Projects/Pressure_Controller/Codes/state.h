#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"
#include "driver.h"

// Automatic STATE Function Generated
#define STATE_define(_stateFUN_) void ST_##_stateFUN_()
#define STATE(_stateFUN_) ST_##_stateFUN_

// States Connections
void Set_Pressure_VAL(int P_VAL);
void High_Pressure_Detected();
void Start_Alarm();
void Stop_Alarm();

#endif