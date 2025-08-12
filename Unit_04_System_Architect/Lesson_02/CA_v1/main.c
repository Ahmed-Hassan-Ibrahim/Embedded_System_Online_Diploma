#include "CA.h"

void setup()
{
    //Init all the drivers
    //Init all IRQ ...
    //Init HAL US_Driver & DC_Driver
    //Init BLOCK
    //Set States Pointers for each Block
    CA_State = STATE(CA_Waiting);
}

int main()
{
    setup();

    int i;

    while(1)
    {
        //Call state for each block
        CA_State();
        for (i = 0; i < 5000; i++);
    }

    return 0;
}