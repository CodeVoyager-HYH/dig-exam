#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Vtop.h"
#include "verilated.h"
#include <verilated_vcd_c.h>


int main(int argc, char** argv, char** env){
	if(false && argc &&argv){}

	VerilatedContext* contextp = new VerilatedContext;//创建一个文件，管理仿真上下文
	contextp->commandArgs(argc,argv);//命令行参数传入仿真上下文
	Vtop* top = new Vtop{contextp};//创建一个Vtop对象，并将其与仿真上下文关联。
	int i = 0;
	//gtkwave必须包括
	VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针，用于生成VCD文件
  	contextp->traceEverOn(true); //打开追踪功能
  	top->trace(tfp, 0); //
  	tfp->open("wave.vcd"); //设置输出的文件wave.vcd

	//!contextp->gotFinish()表示仿真未完成，表示只要仿真未完成和i<20就一直仿真
	while (!contextp->gotFinish() && i++<20){
		int a = rand() & 1;
		int b = rand() & 1;
		
		top->a = a;
		top->b = b;
		top->eval();

		printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        	tfp->dump(contextp->time());	//dump wave
        	assert(top->f == (a ^ b));
		contextp->timeInc(1);
	}
	
	top->final();
	tfp->close();//
	delete top;
	return 0;
}
