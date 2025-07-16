//Eng.Ahmed Hassan

#define SYSCTL_RCGC2_R 		(*((volatile unsigned int*)0x400FE108))
#define GPIO_PORTF_DIR_R 	(*((volatile unsigned int*)0x40025400))
#define GPIO_PORTF_DEN_R 	(*((volatile unsigned int*)0x4002551C))
#define GPIO_PORTF_DATA_R 	(*((volatile unsigned int*)0x400253FC))

int main()
{
	SYSCTL_RCGC2_R = 0x20;			//Enable GPIO Port

	//Delay to make sure that GPIOF is up & running
	unsigned int volatile delay_count = 0;
	for (delay_count = 0; delay_count < 200; delay_count++);

	GPIO_PORTF_DIR_R |= (1 << 3);	//Set PF3 as output
	GPIO_PORTF_DEN_R |= (1 << 3);	//Enable Pin 3 

	//Toggle Green LED
	while (1)
	{
		GPIO_PORTF_DATA_R ^= (1 << 3);
		for (delay_count = 0; delay_count < 50000; delay_count++);
	}

	return 0;
}