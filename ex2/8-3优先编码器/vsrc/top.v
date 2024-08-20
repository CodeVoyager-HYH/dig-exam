module top(
	input [7:0] x,
	input en,
	output reg i,
	output reg [2:0] y,
	output reg [6:0] seg_out
);

always @(*)begin

	if(en) begin
		i = 1;
		case (x)
			8'b0000_0000: begin y = 3'b000;i = 0; end
			8'b00000001: y =3'b000;
			8'b00000010: y =3'b001;
			8'b00000100: y =3'b010;
			8'b00001000: y =3'b011;
			8'b00010000: y =3'b100;
			8'b00100000: y =3'b101;
			8'b01000000: y =3'b110;
                        8'b10000000: y =3'b111;
			default:y = 3'b0;
			
		endcase
	end
end
bcd7seg seg0(
	.b({1'b0,y}),
	.h(seg_out)
);
endmodule

module bcd7seg(
	input [3:0] b,
	output reg [6:0] h
	);
	always@(*)
	begin
		case(b)
			4'b0000: h=7'b0000_001;
			4'b0001: h=7'b1001_111;
			4'b0010: h=7'b0010_010;
			4'b0011: h=7'b0000_110;
			4'b0100: h=7'b1001_100;
			4'b0101: h=7'b0100_100;
			4'b0110: h=7'b0100_000;
			4'b0111: h=7'b0001_111;
			4'b1000: h=7'b0000_000;
			4'b1001: h=7'b0000_100;
			4'b1010: h=7'b0001_000;
			4'b1011: h=7'b1100_000;
			4'b1100: h=7'b0110_001;
			4'b1101: h=7'b1000_010;
			4'b1110: h=7'b0110_000;
			4'b1111: h=7'b0111_000;
		endcase
	end
endmodule


