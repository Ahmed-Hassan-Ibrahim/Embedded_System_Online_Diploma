/* Linker Script CortexM3
Eng. Ahmed Hassan
*/

MEMORY
{
    flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
    SRAM (RWX) : ORIGIN = 0x20000000, LENGTH = 512M
}

SECTIONS
{
    .text : 
    {
        *(.vectors*)        /* Get .vectors from any object files */
        *(.text*)           /* Get .text from any object files */
        *(.rodata)          /* Get .rodata from any object files */
        _E_text = . ;        /* End of text */
    }> flash                /* Both VM and LM in flash*/

    .data :
    {
        _S_DATA = . ;        /* Start of data right after .text */
        *(.data)
        . = ALIGN(4) ;       /* Enable memory allignment */
        _E_DATA = . ;        /* End of data */
    }> SRAM AT> flash       /* Virtual address at SRAM and at burning start in flash */

    .bss :
    {
        _S_bss = . ;         /* Start of bss */
        *(.bss)
        _E_bss = . ;         /* End of bss */  
    }> SRAM                 /* Both VM and LM in SRAM*/
}