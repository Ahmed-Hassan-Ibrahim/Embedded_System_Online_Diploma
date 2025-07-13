.global reset           @Set reset section to global to be seen by linker

reset:
    ldr sp, =stack_top  @Load the stack base address to SP
    bl main             @Branch to main function

stop:
    b stop              @Infinite loop
