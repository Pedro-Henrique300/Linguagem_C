
/*Desenvolva um algoritmo que simule uma calculadora.
Voc� deve dar op��o de o usu�rio escolhar entre:
1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir.
O usu�rio s� conseguir� processar dois n�meros inteiros por vez.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int op, n1, n2, result;
	
	puts("\nInforme o primeiro n�mero: ");
	scanf("%d", &n1);
	
	puts("\nInforme o segundo n�mero: ");
	scanf("%d", &n2);
	
	puts("\nEscolha uma op��o:");
	puts("[1] - Soma");
	puts("[2] - Subtra��o");
	puts("[3] - multiplica��o");
	puts("[4] - Divis�o Inteira");
	
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
			
			printf("\nOp��o Invalida!");
			
	}
	
	return 0;
}
