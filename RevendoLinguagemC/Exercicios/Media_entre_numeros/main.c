#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

/* Faça um programa que receba quatro números inteiros, calcule e mostre a média desses números */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, num4;
	float media = 0;
	
	puts("\nDigite o primeiro número: ");
	scanf("%d", &num1);
	
	puts("\nDigite o segundo número: ");
	scanf("%d", &num2);
	
	puts("\nDigite o terceiro número: ");
	scanf("%d", &num3);
	
	puts("\nDigite o quarto número: ");
	scanf("%d", &num4);
	
	media = (float)(num1 + num2 + num3 + num4) / 4;
	
	printf("\nA média dos quatro números inteiros eh: %.2f.", media);
	
	return 0;
}
