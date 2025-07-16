//Startup.c 
//Eng.Ahmed Hassan

#include <stdint.h>

extern int main (void);

void Default_Handler();
void Reset_Handler();
void NMI_Handler() __attribute__ ((weak, alias ("Default_Handler")));
void H_fault_Handler() __attribute__ ((weak, alias ("Default_Handler")));

//Booking 1024 B located by .bss through unitialized array of int 256 elements (256*4=1024)
static uint32_t stack_top[256];

//Array of pointers to void functions
//Element size is 32bit beacuse of the pointer size
void (* const g_ptr_fun_Vectors[]) () __attribute__ ((section(".vectors"))) = {

(void (*)())  ((uint32_t)stack_top + sizeof(stack_top)),  //SP address assigned       
//The following functions are already defined as void finctions, no need to cast
&Reset_Handler,
&NMI_Handler,
&H_fault_Handler,

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


