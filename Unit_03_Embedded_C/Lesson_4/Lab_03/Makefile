#@arm-none-eabi-#@Copyright: Ahmed Hassan

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m4 -gdwarf-2 -g #included debugger for proteus
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name=Unit3_Lab4_CortexM4

all: $(Project_name).bin
	@echo "<<============= Build Complete =============>>"

#startup.o: startup.s
#	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

#Create .axf file extension to debug on KeiluVision
$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) -Map=output.map $(OBJ) $(AsOBJ) -o $@
	cp $(Project_name).elf $(Project_name).axf	

$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all: 
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin