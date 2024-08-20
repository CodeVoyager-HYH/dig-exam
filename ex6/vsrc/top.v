module top(
	input clk,
	input rst,
	output reg[7:0] y,
	output reg[6:0] seg_out0,
	output reg[6:0] seg_out1
);

	//reg j;
	reg [7:0] x;
	
	always @(posedge clk) begin
		if(rst) y <= 8'b0000_0001;
		else begin
			x[0] <= x[4] ^ x[3] ^ x[2] ^ x[0];
			y <= {x[0],x[7:1]};
			x <= {x[0],x[7:1]};
		end
		if(x==8'b1111_1111) x<=8'b0000_0001;
		if(x<=8'b0000_0000) x<=8'b0000_0001;
	end
	
bcd7seg seg0(
	.b(y[3:0]),
	.h(seg_out0[6:0])
);
bcd7seg seg1(
	.b(y[7:4]),
	.h(seg_out1[6:0])
);
endmodule
	      	
