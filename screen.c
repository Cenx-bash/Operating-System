#include "screen.h"

#define VIDEO_ADDRESS 0xb8000
#define WHITE_ON_BLACK 0x0F

static unsigned short* video_memory = (unsigned short*) VIDEO_ADDRESS;

void print_string(const char* str) {
    int i = 0;
    while (str[i] != '\0') {
        video_memory[i] = (WHITE_ON_BLACK << 8) | str[i];
        i++;
    }
}

void clear_screen() {
    for (int i = 0; i < 80 * 25; i++) {
        video_memory[i] = (WHITE_ON_BLACK << 8) | ' ';
    }
}
