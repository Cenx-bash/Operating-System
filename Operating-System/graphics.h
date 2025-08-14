#ifndef GRAPHICS_H
#define GRAPHICS_H
#include <stdint.h>

void putpixel(int x, int y, uint8_t color);
void draw_rect(int x, int y, int w, int h, uint8_t color);
void draw_text(int x, int y, const char* text, uint8_t color);

#endif
