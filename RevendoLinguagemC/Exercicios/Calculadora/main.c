
/*Desenvolva um algoritmo que simule uma calculadora.
Você deve dar opção de o usuário escolhar entre:
1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir.
O usuário só conseguirá processar dois números inteiros por vez.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int op, n1, n2, result;
	
	puts("\nInforme o primeiro número: ");
	scanf("%d", &n1);
	
	puts("\nInforme o segundo número: ");
	scanf("%d", &n2);
	
	puts("\nEscolha uma opção:");
	puts("[1] - Soma");
	puts("[2] - Subtração");
	puts("[3] - multiplicação");
	puts("[4] - Divisão Inteira");
	
	puts("\nSua resposta: ");
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
			
			printf("\n%d + %d = %d", n1, n2, n1 + n2);
			break;
			
		case 2:
			
			printf("\n%d - %d = %d", n1, n2, n1 - n2);
			break;
			
		case 3:
			
			printf("\n%d * %d = %d", n1, n2, n1 * n2);
			break;
		
		case 4:
		
			printf("\n%d / %d = %d", n1, n2, n1 / n2);
			break;
		
		default:
			
			printf("\nOpção Invalida!");
			
	}
	
	return 0;
}
