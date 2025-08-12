#ifndef STATE_H_
#define STATE_H_

#include "stdio.h"
#include "stdint.h"
#include "stdlib.h"

// Automatic STATE Function Generated
#define STATE_define(_stateFUN_) void ST_##_stateFUN_()
#define STATE(_stateFUN_) ST_##_stateFUN_

// States Connections
void US_Set_Distance(int d);
void DC_Motor_Set(int s);

#endif