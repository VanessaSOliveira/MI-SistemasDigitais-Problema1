
module problemaLCD (
	botaodescer_external_connection_export,
	botaoentrar_external_connection_export,
	botaosubir_external_connection_export,
	botaovoltar_external_connection_export,
	clk_clk,
	ledazul_external_connection_export,
	ledverde_external_connection_export,
	ledvermelho_external_connection_export,
	reset_reset_n,
	conexaolcd_0_rsconduit_writeresponsevalid_n,
	conexaolcd_0_palavraconduit_readdata,
	conexaolcd_0_rwconduit_writeresponsevalid_n,
	conexaolcd_0_enableconduit_1_writeresponsevalid_n);	

	input		botaodescer_external_connection_export;
	input		botaoentrar_external_connection_export;
	input		botaosubir_external_connection_export;
	input		botaovoltar_external_connection_export;
	input		clk_clk;
	output		ledazul_external_connection_export;
	output		ledverde_external_connection_export;
	output		ledvermelho_external_connection_export;
	input		reset_reset_n;
	output		conexaolcd_0_rsconduit_writeresponsevalid_n;
	output	[7:0]	conexaolcd_0_palavraconduit_readdata;
	output		conexaolcd_0_rwconduit_writeresponsevalid_n;
	output		conexaolcd_0_enableconduit_1_writeresponsevalid_n;
endmodule
