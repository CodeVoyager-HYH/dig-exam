module top(
	input [3:0]a,
	input reg [3:0]b,
	input [2:0]en,	//操作判断
	output reg of,	//溢出判断
	output reg[3:0]out,
	output reg zero
);
reg [3:0] A;	//存放a的补码
reg [3:0] B;	//存放b的补码

complement a1(a,A);
complement b1(b,B);
overflow add(a,b,en,of);

always @(*) begin
	
	case (en)
		3'b010: begin out = ~a;end	//取反
		3'b011: begin out = a & b;end	//与
		3'b100: begin out = a | b;end	//或
		3'b101: begin out = a ^ b;end	//异或
		3'b110: begin //比较大小
			
			if(a[3] == b[3] == 0)	//a,b正数
				if(a[2:0]<b[2:0]) out = 1; else out = 0; 
			else if(a[3]>b[3]) out = 1; //a正b负
			else if(a[3] == b[3] == 1) begin  if(a[2:0]<b[2:0]) out = 0; else out = 1;end //ab负数
			else out = 0;//a负b正
			end
		3'b111: begin if(a == b) out = 1;else out = 0;end	//判断相等

		3'b000: begin//加法
			if(a[3] == b[3])begin	//a、b同号
				out = a + b;
				
      			end		
      			
			else begin		//异号
				if(a[3] == 1)begin	//a为负数,-a+b	
					out = A+b;
				end
				else begin  out = a+B; end //b为负数,a-b
			end	
			end
		3'b001: begin//减法
			if(a[3] == 0 && b[3] == 1) begin		//a-(-b) ,a正b负
				out = a + {~b[3],b[2:1]};
			end	
			else if(b[3] == 0 && a[3] == 1) begin		//-a-b	a负，b正
				out = A+{~b[3],b[2:0]};
					
			end	
			else if(b[3] == 0 && a[3] == 0)begin
				out = a - B;	
			end	
			else /*if(a[3] == 1 && b[3] == 0)*/begin  		//-a-(-b)	a负，b负
				out = A + {~b[3],b[2:0]};
			end
			end
		default  out=1;
	endcase
	if(out == 0)zero = 1;
	else zero =0;
end
endmodule	
			
		
