
/*Faça um programa que mostre os oito primeiros termos da sequência de Fibonacci*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, ant1, ant2, atual;
	
	ant2 = 0;
	ant1 = 1;
	
	printf("Série de Fibonacci (8 primeiros termos): \n");
	printf("%d ", ant2);
	printf("%d ", ant1);
	
	for(i=3; i <= 8; i++){
		atual = ant1 + ant2;
		printf("%d ", atual);
		ant2 = ant1;
		ant1 = atual;
		
	}
	
	return 0;
}
