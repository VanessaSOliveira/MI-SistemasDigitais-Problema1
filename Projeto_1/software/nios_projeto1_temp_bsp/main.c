#include "io.h"
#include "system.h"

void defineSaida(int codigoSaida){

	IOWR(LEDOPCAO1_BASE, 0, 0);
	IOWR(LEDOPCAO2_BASE, 0, 0);
	IOWR(LEDOPCAO3_BASE, 0, 0);
	IOWR(LEDOPCAO4_BASE, 0, 0);
	IOWR(LEDOPCAO5_BASE, 0, 0);

	switch(codigoSaida){
		case 0:
			IOWR(LEDOPCAO1_BASE, 0, 1);
		break;
		case 1:
			IOWR(LEDOPCAO2_BASE, 0, 1);
		break;
		case 2:
			IOWR(LEDOPCAO3_BASE, 0, 1);
		break;
		case 3:
			IOWR(LEDOPCAO4_BASE, 0, 1);
		break;
		case 4:
			IOWR(LEDOPCAO5_BASE, 0, 1);
		break;
	}
}

int main() {
	int cont=0;
	while(1){
		if(cont>=0 && cont<=4){
			if(cont==0 && IORD(BOTAODESCER_BASE, 0)){
				cont=4;
				defineSaida(cont);
			}
			else if(cont==4 && IORD(BOTAOSUBIR_BASE, 0)){
				cont=0;
				defineSaida(cont);
			}
			else if(IORD(BOTAOSUBIR_BASE, 0)){
				cont++;
				defineSaida(cont);
			}
			else if(IORD(BOTAODESCER_BASE, 0)){
				cont--;
				defineSaida(cont);
			}
		}
	}
	return 0;
}




/*IORD(BASE, REGNUM)

IOWR(BASE, REGNUM, DATA)*/


