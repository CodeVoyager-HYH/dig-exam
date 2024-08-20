#include <nvboard.h>
#include "Vmux42.h"

void nvboard_bind_all_pins(Vmux42* top) {
	nvboard_bind_pin( &top->y, 2, SW1, SW0);
	nvboard_bind_pin( &top->x0, 2, SW2, SW3);
	nvboard_bind_pin( &top->x1, 2, SW5, SW4);
	nvboard_bind_pin( &top->x2, 2, SW7, SW6);
	nvboard_bind_pin( &top->x3, 2, SW9, SW8);
	nvboard_bind_pin( &top->f, 2, LD1, LD0);
}
