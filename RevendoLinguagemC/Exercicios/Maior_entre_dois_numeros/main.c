
/*Fa�a um programa que receba dois n�meros e mostre o maior deles.
Caso eles sejam iguais, deve-se mostrar a mensagem "Os n�meros s�o iguais".*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	puts("\nInforme o 1� n�mero inteiro: ");
	scanf("%d", &n1);
	 
	puts("\nInforme o 2� n�mero inteiro: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("\n%d � maior!", n1);
	}
	
	else if(n2 > n1){
		printf("\n%d � maior!", n2);
	}
	
	else{
		puts("\nOs n�meros s�o iguais!");
	}
	
	return 0;
}
