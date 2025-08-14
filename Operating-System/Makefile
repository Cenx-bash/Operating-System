CC = i686-elf-gcc
AS = nasm

all: os-image.bin

boot.bin: boot.asm
	$(AS) -f bin boot.asm -o boot.bin

kernel_entry.o: kernel_entry.asm
	$(AS) -f elf kernel_entry.asm -o kernel_entry.o

graphics.o: graphics.c graphics.h
	$(CC) -ffreestanding -m32 -c graphics.c -o graphics.o

mouse.o: mouse.c mouse.h
	$(CC) -ffreestanding -m32 -c mouse.c -o mouse.o

keyboard.o: keyboard.c keyboard.h
	$(CC) -ffreestanding -m32 -c keyboard.c -o keyboard.o

screen.o: screen.c screen.h
	$(CC) -ffreestanding -m32 -c screen.c -o screen.o

kernel.o: kernel.c
	$(CC) -ffreestanding -m32 -c kernel.c -o kernel.o

kernel.bin: kernel_entry.o kernel.o graphics.o mouse.o keyboard.o screen.o
	i686-elf-ld -o kernel.bin -Ttext 0x1000 kernel_entry.o kernel.o graphics.o mouse.o keyboard.o screen.o --oformat binary

os-image.bin: boot.bin kernel.bin
	cat boot.bin kernel.bin > os-image.bin

run: os-image.bin
	qemu-system-i386 -drive format=raw,file=os-image.bin

clean:
	rm -f *.bin *.o os-image.bin
