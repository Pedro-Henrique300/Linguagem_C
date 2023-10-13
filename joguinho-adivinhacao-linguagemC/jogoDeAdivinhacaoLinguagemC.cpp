#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	
	int jogador, computador, tentativas;
	char nome[10];
	
	printf("\n  Digite o seu nome: ");
	scanf("%9[^\n]s", nome);
	
	srand(time(NULL));
	computador = rand()%6;
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf("  Eu vou pensar em um numero entre 0 a 5! E voce vai ter que adivinhar...\n");
	printf("  Voce tem 5 tentativas %s O.o\n", nome);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

	for(tentativas = 0; tentativas <= 5; tentativas ++)
	{
		printf("\n\n\tEm qual numero pensei? ");
		scanf("%d", &jogador);
		
		if(tentativas == 5)
		{
			printf("\n  Nao foi dessa vez! Tente novamente ^-^");
			break;
		}
		if(jogador == computador)
		{
			printf("\n  Acertooouu!!! Parabens! ^-^");
			break;
		}
		else
		{
			printf("\n  Errooouu!!!\n  Eu pensei no numero %d e nao no numero %d O.o\n", computador, jogador);
			printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		}
	}
}
