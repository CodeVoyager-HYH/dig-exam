#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vmux41.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vmux41* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vmux41;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("dump.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}


int main() {
  sim_init();
  top->s=0b00;  top->a=0b1110;  step_and_dump_wave();
                top->a=0b0001;  step_and_dump_wave();
  top->s=0b01;  top->a=0b1110;  step_and_dump_wave();
                top->a=0b0010;  step_and_dump_wave();
  top->s=0b10;  top->a=0b1010;  step_and_dump_wave();
                top->a=0b0100;  step_and_dump_wave();
  top->s=0b11;  top->a=0b0111;  step_and_dump_wave();
                top->a=0b1001;  step_and_dump_wave();
  sim_exit();
}
