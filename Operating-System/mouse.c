#include "mouse.h"
#include "graphics.h"

static int mouse_x = 160;
static int mouse_y = 100;
static int click_state = 0;

void init_mouse() {
    draw_rect(mouse_x, mouse_y, 5, 5, 15); // White mouse cursor
}

void update_mouse() {
    // Simple test: move cursor diagonally
    draw_rect(mouse_x, mouse_y, 5, 5, 1); // Erase old
    mouse_x++;
    mouse_y++;
    if (mouse_x > 315) mouse_x = 0;
    if (mouse_y > 195) mouse_y = 0;
    draw_rect(mouse_x, mouse_y, 5, 5, 15);
}

int get_mouse_x() { return mouse_x; }
int get_mouse_y() { return mouse_y; }
int mouse_clicked() { return click_state; }
