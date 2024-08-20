module overflow(
	input [3:0]a,
	input [3:0]b,
	input [2:0]n,		//1是加法，0是减法
	output reg c		//0是未溢出，1是溢出
);
reg [4:0] d; //符号位放d[4]中,若两者加减后d[3]!=d[4]则代表溢出
reg [3:0] A; //a,b的补码A,B
reg [3:0] B;
complement aa(a,A);
complement bb(b,B);
always @(*)begin
	case (n)
		3'b001:begin	
			if(a[3]==1 && b[3]==0)//-a-b,a负b正
			begin
				d[4] = 1;
				d = A+{1'b0,b[2:0]};
				if(d[3]!=d[4])  c=1;
				else c = 0;
			end
			else if(a[3]==0 && b[3]==1)//a+b,a正b负	
			begin
				d[4] = 0;
				d = a+B;
				if(d[3]!=d[4])  c=1;
				else c = 0;
			end
			else c=0;
		end
		3'b000:begin 	
			if(a[3]==b[3]==0)//ab正数，a+b
			begin
				d[4] = 0;
				d = a+b;
				if(d[4] != d[3]) c = 1;
				else c = 0;
			end
			else if(a[3]==b[3]==1)//ab负数，-a-b
			begin
				d[4] = 1;
				d = A+B;
				if(d[3]!=d[4])  c=1;
				else c = 0;
			end
			else c = 0;	//ab异号
		end
		default :c = 0;
	endcase
end
endmodule	
