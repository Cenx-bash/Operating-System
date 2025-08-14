; ZenpieOS Bootloader with 320x200 graphics mode
[org 0x7c00]
[bits 16]

start:
    mov ax, 0x0013     ; VGA mode 320x200 256 colors
    int 0x10

    jmp 0x0000:0x1000  ; Jump to kernel

times 510-($-$$) db 0
dw 0xAA55
