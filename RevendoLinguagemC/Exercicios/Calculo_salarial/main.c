
/*Faça um programa que receba o número de horas trabalhadas por um gestor e o valor do sálario mínimo vigente.
Crie uma função que calcule o salário a receber do gestor, seguindo as regras abaixo:

I - a hora trabalhada vale a metade do salário mínimo;
II - o salário bruto equivalente ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada;
III - o imposto equivalente a 3% do salário bruto;
IV - o salário a receber equivale ao salário bruto menos o imposto.

Crie um algoritmo que invoque a respectiva função e mostre o salário a receber. */



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float calSalRec(float n_hr, float s_min){
	float hr_t, s_brt, imp, s_rec;
	hr_t = s_min / 2.0;
	s_brt = n_hr * hr_t;
	imp = s_brt * 3 /100;
	s_rec = s_brt - imp;
	return s_rec;
}


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");	
	
	float horas_trab, sal_min, sal_rec;
	
	printf("Insira o número de horas trabalhadas: ");
	scanf("%f", &horas_trab);
	
	printf("Insira o salário minimo: ");
	scanf("%f", &sal_min);
	
	sal_rec = calSalRec(horas_trab, sal_min);
	
	printf("Salário a receber: R$%.2f.", sal_rec);
	
	return 0;
}
