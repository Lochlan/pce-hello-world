#include "huc.h"

run() {
    set_color_rgb(1, 7, 7, 7);
    set_font_color(1, 0);
    set_font_pal(0);
    load_default_font();
    put_string("Hello, world!", 10, 15);
}

clear_display() {
    disp_off();
    cls();
    disp_on();
}

main() {
    clear_display();
    run();
}
