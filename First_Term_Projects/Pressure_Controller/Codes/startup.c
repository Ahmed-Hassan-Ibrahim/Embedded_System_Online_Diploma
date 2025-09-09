//Startup.c 
//Eng.Ahmed Hassan

#include <stdint.h>

extern int main (void);

void Default_Handler();
void Reset_Handler();
void NMI_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void H_fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void MM_Fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void Bus_Fault() __attribute__ ((weak, alias ("Default_Handler")));
void Usage_Fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));

extern uint32_t _stack_top;

//Pragma to create a section with the name ".vectors" so the linker can assign to correct address
uint32_t vectors[] __attribute__ ((section(".vectors"))) = {

(uint32_t)  &_stack_top,         //The vector handler start at 0x20001000
(uint32_t)  &Reset_Handler,
(uint32_t)  &NMI_Handler,
(uint32_t)  &H_fault_Handler,
(uint32_t)  &MM_Fault_Handler,
(uint32_t)  &Bus_Fault,
(uint32_t)  &Usage_Fault_Handler

};

//Data and bss sections from the linker script
extern uint32_t _E_text;
extern uint32_t _S_DATA;
extern uint32_t _E_DATA;
extern uint32_t _S_bss;
extern uint32_t _E_bss;

void Reset_Handler()
{
    //These are not variables but symbols so we act as if they are addresses
    //In case data is not alligned, we pass byte by byte while casting
    uint32_t DATA_size = (uint8_t*)&_E_DATA - (uint8_t*)&_S_DATA;
    uint8_t* P_src = (uint8_t*)&_E_text;
    uint8_t* P_dst = (uint8_t*)&_S_DATA;
    
    //Copy data section from flash to SRAM 
    for (int i = 0; i < DATA_size; i++)
    {
        *((uint8_t*)P_dst++) = *((uint8_t*)P_src++);
    }

    //init .bss section in SRAM = 0
    uint32_t bss_size = (uint8_t*)&_E_bss - (uint8_t*)&_S_bss;
    P_dst = (uint8_t*)&_S_bss;

    for (int i = 0; i < bss_size; i++)
    {
        *((uint8_t*)P_dst++) = (uint8_t)0;
    }

    //Jump to main()
    main();
}

void Default_Handler()
{
    Reset_Handler();
}


