#@arm-none-eabi-#@Copyright: Ahmed Hassan

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2 #included debugger for proteus
INCS=-I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name=Learn_in_depth_cortex_m3

all: $(Project_name).bin
	@echo "<<============= Build Complete =============>>"

#startup.o: startup.s
#	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) -Map=output.map $(OBJ) $(AsOBJ) -o $@
	
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all: 
	rm *.o *.elf *.bin

clean:
	rm *.elf *.bin