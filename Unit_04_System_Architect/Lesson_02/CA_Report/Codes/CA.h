#ifndef CA_H_
#define CA_H_

#include "state.h"

// Define states
enum
{
    WAITING,
    DRIVING
};
extern int CA_State_ID;
extern void (*CA_State)();

// Declare states Functions CA
STATE_define(CA_Waiting);
STATE_define(CA_Driving);

#endif