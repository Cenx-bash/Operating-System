#include "graphics.h"
#include "mouse.h"
#include "keyboard.h"

void draw_desktop() {
    draw_rect(0, 0, 320, 200, 1);   // Blue background
    draw_rect(0, 180, 320, 20, 8);  // Gray taskbar
    draw_rect(20, 40, 40, 40, 4);   // Red icon
    draw_rect(80, 40, 40, 40, 2);   // Green icon
}

void kernel_main() {
    draw_desktop();
    init_mouse();
    init_keyboard();

    while (1) {
        update_mouse();
    }
}
