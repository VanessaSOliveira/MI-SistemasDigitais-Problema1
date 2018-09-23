
module conexaoLCD(input [8:0] palavraEntrada, output reg RS, output reg RW, output reg [8:0] palavraSaida, output reg enable, input apagar );
	
	initial begin 
		 enable = 0; //pulso de clock que muda para 8
		 RW =0; //Esta em modo escrita
		 RS = 0; //Esta em modo de instrução
		 palavraSaida = 8'b00000000;
	 end

	
	
	always @( palavraEntrada)begin //mudou palavra de entrada. Quem sabe se subiu ou desceu o menu e qual a palavra enviada é o código C
	
		
		assign RS = 1; //Sair do modo instrução
		assign palavraSaida = palavraEntrada; //Coloca a palavra na saida

		assign RS = 0; //Volta para modo instrução
	
	end
	

	
	always @(apagar)begin //Apagar todos caracteres do lcd
	
	
		if(apagar == 1)begin
		
		assign RS =0;
		assign enable =0;
		assign RW =0;
		assign palavraSaida = 8'b00000001;
		
		end
	
	
	end
	
	
	

	
	
endmodule