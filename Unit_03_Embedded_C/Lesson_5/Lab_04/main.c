#include <stdint.h>
#include <stdlib.h>


#define RCC_BASE 		0x40021000
#define PORT_A_BASE 	0x40010800
#define RCC_APB2ENR 	*(volatile uint32_t *)(RCC_BASE + 0x18)
#define GPIO_A_CRH 		*(volatile uint32_t *)(PORT_A_BASE + 0x4)

typedef volatile unsigned int vint32_t;

typedef union
{
	vint32_t all_fields;
	struct
	{
		vint32_t pin0 : 1;
		vint32_t pin1 : 1;
		vint32_t pin2 : 1;
		vint32_t pin3 : 1;
		vint32_t pin4 : 1;
		vint32_t pin5 : 1;
		vint32_t pin6 : 1;
		vint32_t pin7 : 1;
		vint32_t pin8 : 1;
		vint32_t pin9 : 1;
		vint32_t pin10 : 1;
		vint32_t pin11 : 1;
		vint32_t pin12 : 1;
		vint32_t pin13 : 1;
		vint32_t pin14 : 1;
		vint32_t pin15 : 1;
	} pin;
} R_ODR_T;

volatile R_ODR_T *ODR_A = (volatile R_ODR_T *)(PORT_A_BASE + 0xC);
unsigned char g_variables[3] = {1, 2, 3};
unsigned char const const_variables[3] = {1, 2, 3};
unsigned char bss_var [3];

void* _sbrk(int incr)
{
	static uint8_t* heap_ptr = NULL;
	uint8_t* prev_heap_ptr = NULL;
	extern uint32_t _E_bss;			//End of bss section symbol
	extern uint32_t _heap_End; 		//End of heap symbol

	//First time intialized
	if (heap_ptr == NULL)
		heap_ptr = (uint8_t*)&_E_bss;

	prev_heap_ptr = heap_ptr;
	
	//Protect the stack
	if ((heap_ptr + incr) > (uint8_t*)&_heap_End)
		return (void*) NULL;

	//Booking the incremented size
	heap_ptr += incr;

	return (void*) prev_heap_ptr;
}

int main(void)
{
	int* p = (int*)malloc(4);
	RCC_APB2ENR |= 1 << 2;	  				// Enable clock to PORT A
	GPIO_A_CRH &= 0xFF0FFFFF; 				// Set Output modes for PORT A
	GPIO_A_CRH |= 0x00200000;
	while (1)
	{
		ODR_A->pin.pin13 = 1; 				// Set PIN 13 in PORT A
		for (int i = 0; i < 50000; i++); 	// Delay
		ODR_A->pin.pin13 = 0; 				// Clear PIN 13 in PORT A
		for (int i = 0; i < 50000; i++); 	// Delay
	}
	return 0;
	free(p);
}

#include <errno.h>
int _close(int file) {
    return -1;
}

int _lseek(int file, int ptr, int dir) {
    return 0;
}

int _read(int file, char *ptr, int len) {
    return 0;
}

int _write(int file, char *ptr, int len) {
    return len; 
}

void _exit(int status) {
    while(1);
}

int _kill(int pid, int sig) {
    errno = EINVAL;
    return -1;
}

int _getpid(void) {
    return 1;
}
