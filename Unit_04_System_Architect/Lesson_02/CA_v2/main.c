#include "CA.h"
#include "DC.h"
#include "US.h"

void setup()
{
    // Init all the drivers
    // Init all IRQ ...
    // Init HAL US_Driver & DC_Driver
    // Init BLOCK
    // Set States Pointers for each Block
    US_Init();
    DC_Init();
    CA_State = STATE(CA_Waiting);
    US_State = STATE(US_busy);
    DC_State = STATE(DC_idle);
}

int main()
{
    setup();

    int i;

    while (1)
    {
        // Call state for each block
        US_State();
        CA_State();
        DC_State();
        for (i = 0; i < 5000; i++);
    }

    return 0;
}