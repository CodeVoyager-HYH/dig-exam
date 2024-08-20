#include <nvboard.h>
#include <Vtop.h>

static TOP_NAME top;

void nvboard_bind_all_pins(TOP_NAME* top);

void single_cycle() {
  top.eval();
}

int main(){
	nvboard_bind_all_pins(&top);
  	nvboard_init();//初始化NVBoard

	while(1){
		nvboard_update();
    		single_cycle();
  }
	nvboard_quit();
}

