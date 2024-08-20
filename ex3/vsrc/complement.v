module complement(
	input [3:0]a,
	output reg[3:0]b
);

always @(*)begin
	if(a[3] == 0) b = a;
	else b = ~a+1;
end
endmodule
