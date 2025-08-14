#include "graphics.h"

#define VIDEO_MEMORY 0xA0000
#define SCREEN_WIDTH 320

void putpixel(int x, int y, uint8_t color) {
    uint8_t* vidmem = (uint8_t*) VIDEO_MEMORY;
    vidmem[y * SCREEN_WIDTH + x] = color;
}

void draw_rect(int x, int y, int w, int h, uint8_t color) {
    for (int yy = 0; yy < h; yy++) {
        for (int xx = 0; xx < w; xx++) {
            putpixel(x + xx, y + yy, color);
        }
    }
}

void draw_text(int x, int y, const char* text, uint8_t color) {
    while (*text) {
        draw_rect(x, y, 6, 8, color); // Fake text block
        x += 8;
        text++;
    }
}
