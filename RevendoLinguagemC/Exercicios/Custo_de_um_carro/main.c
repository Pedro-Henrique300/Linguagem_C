
/*O custo de um carro novo ao consumidor final � o pre�o de f�brica somado ao percentual de 
lucro do distribuidor, acrescido dos impostos aplicados ao pre�o de f�brica. Fa�a um programa
que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o 
percentual de impostos.

Em cada item, crie uma fun��o distinta para calcular e retornar:

a) o valor correspondente ao lucro do distribuidor;
B) o valor correspondente aos impostos;
c) o pre�o final do ve�culo.

Ap�s criar cada uma das fun��es, desenvolva um algoritmo que declare e invoque cada uma.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float lucro_distribuidor(float preco_fabrica, float per_lucro);
float percentual_imposto(float preco_fabrica, float per_imposto);
float preco_final(float preco_fabrica, float per_lucro, float per_imposto);


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float fabrica, per_distri, imposto, lucro_dist, imp, valor_final;
	
	puts("Informe o pre�o de f�brica: ");
	scanf("%f", &fabrica);
	
	puts("\nInforme o % de lucro do distribuidor: ");
	scanf("%f", &per_distri);
	
	puts("\nInforme o % de impostos: ");
	scanf("%f", &imposto);
	
	lucro_dist = lucro_distribuidor(fabrica, per_distri);
	imp = percentual_imposto(fabrica, imposto);
	valor_final = preco_final(fabrica, lucro_dist, imp);
	
	printf("\nLucro do Distribuidor: %.2f\n", lucro_dist);
	printf("Impostos: %.2f\n", imp);
	printf("Pre�o final do veiculo: %.2f", valor_final);
	
	return 0;
}


float lucro_distribuidor(float preco_fabrica, float per_lucro){
	float result = preco_fabrica * (per_lucro / 100);
	return result;
}

float percentual_imposto(float preco_fabrica, float per_imposto){
	float result = preco_fabrica * (per_imposto / 100);
	return result;
}

float preco_final(float preco_fabrica, float per_lucro, float per_imposto){
	float result = preco_fabrica + per_lucro + per_imposto;
	return result;
}
