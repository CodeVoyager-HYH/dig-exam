#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vencode42.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vencode42* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vencode42;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(){
	sim_init();
	int i;
	top->en = 0;
	top->x = 0b0000;
	for(i=0;i<=15;i++){
	step_and_dump_wave();
	top->x = top->x+1;
	}
	step_and_dump_wave();
	top->en = 1;
	top->x = 0;
	for(i=0;i<=15;i++){
	step_and_dump_wave();
	top->x = top->x+1;
	}
	sim_exit();
}

