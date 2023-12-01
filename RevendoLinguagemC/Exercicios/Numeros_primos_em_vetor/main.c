
/*Fa�a um programa que carregue um vetor e nove elementos num�ricos inteiros, calcule e mostre 
os n�meros primos e suas respectivas posi��es..*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num[9], j, i, cont;
	
	printf("Voc� est� prestes a verificar se um n�mero � ou n�o primo.\n");
	
	for(i=0; i<9; i++){
		printf("\nInsira o dado da posi��o %d: ", i+1);
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
			printf("\n%d � primo, posi��o %d", num[i], i+1);
		}
	}
	
	return 0;
}
