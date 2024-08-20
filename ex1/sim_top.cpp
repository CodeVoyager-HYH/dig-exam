#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"
#include "verilated.h"
#include <verilated_vcd_c.h>

int main(int argc, char** argv, char** env)
{
	if(false && argc && argv){}
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc,argv);
	Vtop* top = new Vtop{contextp};
	int i = 0;
	//gtkwave必须包括
	VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  	contextp->traceEverOn(true); //打开追踪功能
  	top->trace(tfp, 0); //
  	tfp->open("wave.vcd"); //设置输出的文件wave.vcd


	while (!contextp->gotFinish() && i++<20){
		int a = rand() & 1;
		int b = rand() & 1;
		int s = rand() & 1;
		top->a = a;
		top->b = b;
		top->s = s;
		top->eval();

		printf("a = %d, b = %d, s = %d, y = %d\n", a, b, s, top->y);
        	tfp->dump(contextp->time());	//dump wave
        	assert(top->y == (~s&a)|(s&b));
		contextp->timeInc(1);
	}
	top->final();
	tfp->close();//
	delete top;
	return 0;
}
