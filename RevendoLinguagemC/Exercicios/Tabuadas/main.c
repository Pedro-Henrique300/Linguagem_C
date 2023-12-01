
/*Desenvolva um algoritmo que mostre a tabuada de todos os números inteiros 
compreendidos entre 1 e 10 (inclusive).*/

#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int i, j;
	
	for(i=1; i<=10; i++){
		printf("\t-=--=--=--=--=--=--=-\n");
		printf("\t   Tabuada do %d\n", i);
		printf("\t-=--=--=--=--=--=--=-\n");
		for(j=1; j<=10; j++){
			printf("\t    %d X %2d = %2d\n", i, j, i*j);
		}
		printf("\n");
	}
	
	return 0;
}
