#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa lista[TAM];
	int i;
	
	for(i=0; i<TAM; i++){
		
		printf("\nInforme os dados da %dº pessoa:\n", i+1);
		
		printf("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		printf("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		printf("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
		
	}
	
	system("cls");
	
	puts("Seus dados:\n");
	for(i=0; i<TAM; i++){
		
		printf("------------%dº Pessoa------------\n", i+1);
		printf("\tNome: %s\n", lista[i].nome);
		printf("\tPeso: %.2f\n", lista[i].peso);
		printf("\tIdade: %d\n", lista[i].idade);
		printf("---------------------------------\n\n");
	}
}
