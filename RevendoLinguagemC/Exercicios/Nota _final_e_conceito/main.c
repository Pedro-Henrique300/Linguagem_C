/*A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente 
a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três
notas mencionadas anteriormente obedece aos pesos a seguir

Nota                          Peso
Trabalho de Laboratório       2
Avaliação semestral           3
Exame final                   5

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito
que  segue a tabela abaixo:

Média pontedara     Conceito
8,0 ~ 10,0          A
7,0 ~ 8,0           B
6,0 ~ 7,0           C
5,0 ~ 6,0           D
0,0 ~ 5,0           E*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float trabalho_lab, avaliacao_semestre, exame_final ,media_pon;
	
	puts("Informe a nota do Trabalho de Laboratório: ");
	scanf("%f", &trabalho_lab);
	
	puts("Informe a nota da Avaliação Semestral: ");
	scanf("%f", &avaliacao_semestre);
	
	puts("Informe a nota do Exame Final: ");
	scanf("%f", &exame_final);
	
	media_pon = (2*trabalho_lab + 3*avaliacao_semestre + 5*exame_final) / (2+3+5);
	
	printf("\n Média: %.1f       Conceito: ", media_pon);
	
	if(media_pon < 5.0){
		puts("E");
	}
	else if(media_pon < 6.0){
		puts("D");
	}
	else if(media_pon < 7.0){
		puts("C");
	}
	else if(media_pon < 8.0){
		puts("B");
	}
	else{
		puts("A");
	}
	
	return 0;
}
