
// conversor de temperaturas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	
	// variaveis
	char escala;
	char repeat;
	float temp, cK, cF, cR, fC, fK, fR, kC, kF, kR, rK, rC, rF;
	


START:

	// testando a entrada de dados do usuário
	do {
	
		printf("*********************************\n");
		printf("Indique a escala da temperatura que deseja converter - \nC para centígrados; F para Farenhait; K para Kelvin e R para Rankine:\n");
		scanf(" %c", &escala);
		printf("*********************************\n");
	} while (escala != 'f' && escala != 'F' && escala != 'k' && escala != 'K' && escala != 'r' && escala != 'R' && escala != 'c' && escala != 'C');
	

	
	// recebendo a informação do valor da temperatura a ser convertido
	printf("Informe a temperatura a ser convertida:\n");
	scanf(" %f", &temp);
	printf("*********************************\n");


	
	// condicionais para cada escala
	if (escala == 'f' || escala == 'F') {
		// convertendo farenhait
		fC = (temp - 32) / 1.8;
		fK = (5 * temp + 2297) / 9;
		fR = (temp - 32) + 491.67;
		//printf("convertendo farenhait\n");
		printf("*********************************\n");
		printf("A temperatura %.1f F equivale a %.2f C, %.2f K e %.2f Ra\n", temp, fC, fK, fR);
	} else if (escala == 'k' || escala == 'K') {
		// convertendo kelvin para C, K e R
		kC = temp - 273;
		kF = (9 * temp - 2297) / 5;
		kR = ((temp - 273.15) * 1.8000) + 491.67;
		//printf("convertendo kelvin\n");
		printf("*********************************\n");
		printf("A temperatura %.1f K equivale a %.1f C, %.1f F e %.1f Ra\n", temp, kC, kF, kR);
	}
	else if (escala == 'r' || escala == 'R') {
		// convertendo rankine
		rC = (temp - 491.67) / 1.8000;
		rK = ((temp - 491.67) / 1.8000) + 273.15;
		rF = temp - 459.67;
		//printf("convertendo rankine\n");
		printf("*********************************\n");
		printf("A temperatura %.1f Ra equivale a %.2f C, %.2f K e %.2f F\n", temp, rC, rK, rF);
	}
	else if (escala == 'c' || escala == 'C') {
		// convertendo celsius
		cK = temp + 273.15;
		cF = 1.8 * temp + 32;
		cR = temp * 1.8000 + 491.67;
		//printf("***convertendo celsius***\n");
		printf("*********************************\n");
		printf("A temperatura %.1f C equivale a %.2f K, %.2f F e %.2f Ra\n", temp, cK, cF, cR);
	}

	// condicional para fazer nova conversão ou encerrar o programa
	printf("*********************************\n");
	printf("Deseja converter outra temperatura? (Y / N)?\n");
	scanf(" %c", &repeat);
	if (repeat == 'y' || repeat == 'Y') {
		goto START;
	}
	else {
		return 0;
	}
	

	
	

}