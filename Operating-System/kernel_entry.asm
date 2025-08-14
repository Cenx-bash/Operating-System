[bits 32]
global start
extern kernel_main

start:
    call kernel_main
    hlt
