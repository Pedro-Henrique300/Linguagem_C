
/*Fa�a um programa que receba o n�mero de horas trabalhadas por um gestor e o valor do s�lario m�nimo vigente.
Crie uma fun��o que calcule o sal�rio a receber do gestor, seguindo as regras abaixo:

I - a hora trabalhada vale a metade do sal�rio m�nimo;
II - o sal�rio bruto equivalente ao n�mero de horas trabalhadas multiplicado
pelo valor da hora trabalhada;
III - o imposto equivalente a 3% do sal�rio bruto;
IV - o sal�rio a receber equivale ao sal�rio bruto menos o imposto.

Crie um algoritmo que invoque a respectiva fun��o e mostre o sal�rio a receber. */



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
	
	printf("Insira o n�mero de horas trabalhadas: ");
	scanf("%f", &horas_trab);
	
	printf("Insira o sal�rio minimo: ");
	scanf("%f", &sal_min);
	
	sal_rec = calSalRec(horas_trab, sal_min);
	
	printf("Sal�rio a receber: R$%.2f.", sal_rec);
	
	return 0;
}
