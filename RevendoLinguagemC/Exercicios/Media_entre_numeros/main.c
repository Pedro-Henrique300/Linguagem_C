#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* Fa�a um programa que receba quatro n�meros inteiros, calcule e mostre a m�dia desses n�meros */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, num4;
	float media = 0;
	
	puts("\nDigite o primeiro n�mero: ");
	scanf("%d", &num1);
	
	puts("\nDigite o segundo n�mero: ");
	scanf("%d", &num2);
	
	puts("\nDigite o terceiro n�mero: ");
	scanf("%d", &num3);
	
	puts("\nDigite o quarto n�mero: ");
	scanf("%d", &num4);
	
	media = (float)(num1 + num2 + num3 + num4) / 4;
	
	printf("\nA m�dia dos quatro n�meros inteiros eh: %.2f.", media);
	
	return 0;
}
