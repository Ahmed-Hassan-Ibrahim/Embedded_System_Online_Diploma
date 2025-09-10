#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "Alarm_Actu.h"
#include "Alarm_Mon.h"
#include "PS_Driver.h"
#include "Main_Algo.h"

void setup()
{
    // Init all the drivers
    // Init all IRQ ...
    // Init HAL US_Driver & DC_Driver
    // Init BLOCK
    // Set States Pointers for each Block
    PS_Init();
	AA_Init();
    PS_State = STATE(PS_reading);
    MA_State = STATE(MA_check_pressure);
    AM_State = STATE(AM_off);
	AA_State = STATE(AA_waiting);
}

int main (){
	GPIO_INITIALIZATION();
	setup();
	while (1)
	{
		//Implement your Design
		PS_State();
		MA_State();
		AM_State();
		AA_State(); 
	}
	return 0;
}
