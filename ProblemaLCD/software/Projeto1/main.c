
/*#include "io.h"
#include "system.h"

main(){
	while(1){
		/*verde
		IOWR(LEDVERMELHO_BASE, 0, 1);
		IOWR(LEDVERDE_BASE, 0, 0);
		IOWR(LEDAZUL_BASE, 0, 0);*/

		/*vermelho
		IOWR(LEDVERMELHO_BASE, 0, 0);
		IOWR(LEDVERDE_BASE, 0, 1);
		IOWR(LEDAZUL_BASE, 0, 0);*/

		/* azul
		IOWR(LEDVERMELHO_BASE, 0, 0);
		IOWR(LEDVERDE_BASE, 0, 0);
		IOWR(LEDAZUL_BASE, 0, 1);*/

		/*branco
		IOWR(LEDVERMELHO_BASE, 0, 1);
		IOWR(LEDVERDE_BASE, 0, 1);
		IOWR(LEDAZUL_BASE, 0, 1);
		*/
		/*magenta
		IOWR(LEDVERMELHO_BASE, 0, 0);
		IOWR(LEDVERDE_BASE, 0, 1);
		IOWR(LEDAZUL_BASE, 0, 1);

	}
}*/


#include <stdio.h>
#include "io.h"
#include "system.h"



main(){


	unsigned int bEntrar, bVoltar, bSubir, bDescer;
	int opcao =0;


	while(1){

		bSubir = IORD(BOTAOSUBIR_BASE,0);
		bDescer = IORD(BOTAODESCER_BASE,0);
		bEntrar = IORD(BOTAOENTRAR_BASE,0);
		bVoltar = IORD(BOTAOVOLTAR_BASE,0);


		if(bSubir){
			if(opcao == 4){
				opcao = 0;
			}
			else{
				opcao++;
			}
			mudaOpcao(opcao);
		}
		else if(bDescer){
			if(opcao == 0){
				opcao = 4;
			}
			else{
				opcao--;
			}
			mudaOpcao(opcao);
		}
		else if(bEntrar){
			printf("entrar\n");
			iniciaLCD();
			esperar();
		}
		else if(bVoltar){
			printf("voltar\n");
		}




	}


	return 0;
}

void mudaOpcao(int opcao){
	switch(opcao){
		case 0:
			//verde
			IOWR(LEDVERMELHO_BASE, 0, 1);
			IOWR(LEDVERDE_BASE, 0, 0);
			IOWR(LEDAZUL_BASE, 0, 0);
			esperar();
			break;
		case 1:
			//vermelho
			IOWR(LEDVERMELHO_BASE, 0, 0);
			IOWR(LEDVERDE_BASE, 0, 1);
			IOWR(LEDAZUL_BASE, 0, 0);
			esperar();
			break;
		case 2:
			// azul
			IOWR(LEDVERMELHO_BASE, 0, 0);
			IOWR(LEDVERDE_BASE, 0, 0);
			IOWR(LEDAZUL_BASE, 0, 1);
			esperar();
			break;
		case 3:
			//branco
			IOWR(LEDVERMELHO_BASE, 0, 1);
			IOWR(LEDVERDE_BASE, 0, 1);
			IOWR(LEDAZUL_BASE, 0, 1);
			esperar();
			break;
		case 4:
			//magenta
			IOWR(LEDVERMELHO_BASE, 0, 0);
			IOWR(LEDVERDE_BASE, 0, 1);
			IOWR(LEDAZUL_BASE, 0, 1);
			esperar();
			break;
		default:
			break;
		}
}

void esperar(){
	int i=0;
	while(i<500000){
		i++;
	}
}

void iniciaLCD(){

	/*unsigned long A = 0x00000110000;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	A = 0x00000110100;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	A = 0x00000001000;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	A = 0x00000000001;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	A = 0x00000000100;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	A = 0x00000001100;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	A = 0x10000000000;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();
	A = 0x10011100101;
	ALT_CI_CONEXAOLCD_0(A,0x00);
	esperar();*/


	ALT_CI_CONEXAOLCD_0(0x38,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x38,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x38,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x38,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x08,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x0c,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x06,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x02,0x00);
	esperar();
	ALT_CI_CONEXAOLCD_0(0x01,0x00);
	esperar();

	printf("Acabou");
}


