
/*Faça um programa que receba dois números e mostre o maior deles.
Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais".*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	puts("\nInforme o 1º número inteiro: ");
	scanf("%d", &n1);
	 
	puts("\nInforme o 2º número inteiro: ");
	scanf("%d", &n2);
	
	if(n1 > n2){
		printf("\n%d é maior!", n1);
	}
	
	else if(n2 > n1){
		printf("\n%d é maior!", n2);
	}
	
	else{
		puts("\nOs números são iguais!");
	}
	
	return 0;
}
