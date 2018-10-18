
module ProjetoSemInstruction (
	clk_clk,
	reset_reset_n,
	botaosubir_external_connection_export,
	botaodescer_external_connection_export,
	botaoentrar_external_connection_export,
	botaovoltar_external_connection_export,
	ledvermelho_external_connection_export,
	ledverde_external_connection_export,
	ledazul_external_connection_export,
	lcd_16207_0_external_RS,
	lcd_16207_0_external_RW,
	lcd_16207_0_external_data,
	lcd_16207_0_external_E);	

	input		clk_clk;
	input		reset_reset_n;
	input		botaosubir_external_connection_export;
	input		botaodescer_external_connection_export;
	input		botaoentrar_external_connection_export;
	input		botaovoltar_external_connection_export;
	output		ledvermelho_external_connection_export;
	output		ledverde_external_connection_export;
	output		ledazul_external_connection_export;
	output		lcd_16207_0_external_RS;
	output		lcd_16207_0_external_RW;
	inout	[7:0]	lcd_16207_0_external_data;
	output		lcd_16207_0_external_E;
endmodule
