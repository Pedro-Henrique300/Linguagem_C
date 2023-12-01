
/*Desenvolva um algarítimo que some todos os números interios compeendidos entre 1 e 10 (inclusive)*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int soma, i;
	
	soma = 0;
	
	for(i=1; i <= 10; i++){
		soma += i;
	}
	
	printf("A soma de todos os números de 1 a 10 é de: %d", soma);
	
	return 0;
}
