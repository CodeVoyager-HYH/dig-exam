module top(
	input a,
	input b,
	input s,
	output y
);

	assign y = (~s&a)|(s&b);
endmodule
