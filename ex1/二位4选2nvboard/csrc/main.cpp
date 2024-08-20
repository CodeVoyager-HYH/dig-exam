#include "Vmux42.h"
#include "verilated.h"
#include <nvboard.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(Vmux42* top);

static void single_cycle() {
	dut.eval();
}

int main(int argc, char** argv) {
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  while (1) {
	  nvboard_update();
	  single_cycle();
  }
   return 0;
}

