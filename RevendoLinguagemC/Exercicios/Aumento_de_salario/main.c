/*Faça um programa que receba o salário de um funcionário
e o perceitual de aumento, calcule e mostre o valor do 
aumento e o novo salário.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, perceitual_aumento, valor_aumento, novo_salario;
	
	puts("\nInforme o salário do funcionário: ");
	scanf("%f", &salario);
	
	puts("\nInforme o perceitual de aumento (sem % por favor): ");
	scanf("%f", &perceitual_aumento);
	
	novo_salario = salario + (salario * perceitual_aumento / 100);
	valor_aumento = novo_salario - salario;
	
	printf("\nEsse funcionário recebeu um aumento de: R$%.2f.\n", valor_aumento);
	printf("E passará a ganhar: R$%.2f.", novo_salario);
	
	return 0;
}
