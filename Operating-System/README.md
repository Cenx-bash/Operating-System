#Operating System Development Log

Day 1 – The journey begins! 🚀
Today I built the basic foundation of my operating system. It’s a simple starting point — a minimal bootloader that runs in 16-bit real mode, switches the CPU into 32-bit protected mode, and executes a small C-based kernel.

Right now, the OS can:

Boot from a custom boot sector

Display text directly to the screen using VGA memory

Clear the screen and show a welcome message

This is just the beginning, but it’s the first step towards a full custom OS. Next, I’ll be working on:

Adding a keyboard driver for input

Creating a basic command-line interface (CLI)

Implementing simple system commands like clear and help