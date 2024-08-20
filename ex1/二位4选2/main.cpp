#include "verilated.h"
#include "Vtest1.h"
#include "verilated_vcd_c.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtest1* top;

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}
int main(int argc,char** argv){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vtest1;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("dump.vcd");
	
	top->f=0; top->x0=0; step_and_dump_wave();
		  top->x0=1; step_and_dump_wave();
	top->f=1; top->x1=0; step_and_dump_wave();
                  top->x1=1; step_and_dump_wave();
	top->f=2; top->x2=0; step_and_dump_wave();
                  top->x2=1; step_and_dump_wave();
	top->f=3; top->x3=0; step_and_dump_wave();
                  top->x3=1; step_and_dump_wave();
	
	step_and_dump_wave();
	tfp->close();
}

