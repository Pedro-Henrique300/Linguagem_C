
/*Faça um programa que carregue um vetor e nove elementos numéricos inteiros, calcule e mostre 
os números primos e suas respectivas posições..*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num[9], j, i, cont;
	
	printf("Você está prestes a verificar se um número é ou não primo.\n");
	
	for(i=0; i<9; i++){
		printf("\nInsira o dado da posição %d: ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<9; i++){
		cont = 0;
		
		for(j=1; j<=num[i]; j++){
			if(num[i] % j == 0){
				cont++;
			}
		}
		
		if(cont==2){
			printf("\n%d é primo, posição %d", num[i], i+1);
		}
	}
	
	return 0;
}
