//Verilog Custom Instruction Template
module ConexaoLCD(

input  [31:0] dataa, 
output reg [31:0] result,
input clk, // CPU's master-input clk <required for multi-cycle>
input reset, // CPU's master asynchronous reset <required for multi-cycle>
input clk_en, // Clock-qualifier <required for multi-cycle>
input start, // True when this instr. issues <required for multi-cycle>
output done, // True when instr. completes <required for variable muli-cycle>

output reg rs,
output reg rw,
output reg[7:0] palavraSaida,
output reg enable



);

// enable rs rw data

	always @ (dataa)begin
		
		enable <= dataa[0];
		rs <= dataa[1];
		rw <= dataa[2];
		palavraSaida <= dataa[10:3];
		
		
		result <= dataa;
	
	end




endmodule


