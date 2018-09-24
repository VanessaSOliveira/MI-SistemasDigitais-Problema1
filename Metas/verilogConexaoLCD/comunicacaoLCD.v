
module comunicacaoLCD(clock, palavraEntrada, reset, RS, RW, enable, palavraSaida );

	input clock;
	input [7:0] palavraEntrada;
	input reset;
	output RS;
	output RW;
	output [7:0] palavraSaida;
	output enable;

	reg RS;
	reg RW;
	reg [7:0] palavraSaida;
	reg enable;

	initial begin 
		 enable = 0; //pulso de clock que muda para 
		 RW =0; //Esta em modo escrita
		 RS = 0; //Esta em modo de instrução
		 palavraSaida = 8'b00000000;
	end

	
	always @(palavraEntrada) begin //mudou palavra de entrada. Quem sabe se subiu ou desceu o menu e qual a palavra enviada é o código C
	
		RS = 1; //Sair do modo instrução e vai para o modo de dados
		palavraSaida = palavraEntrada; //Coloca a palavra na saida
		
		enable = 1; //ativa o enable

		RS = 0; //Volta para modo instrução
		enable = 0; // Desativa enable

	
	end
	

	
	
	
	/*always @(reset)begin //Apagar todos caracteres do lcd
	
		if(reset == 1)begin
			RS = 0;
			enable = 0;
			RW = 0;
			palavraSaida = 8'b00000001;
		end
	
	
	end*/
	
	
	

	
	
endmodule
