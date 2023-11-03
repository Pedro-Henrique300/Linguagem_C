#include<stdio.h>
#include<time.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int jogador, computador, tentativas;
	char nome[20];
	
	printf("\n  Digite o seu nome: ");
	scanf("%19[^\n]s", nome);
	
	srand(time(NULL));
	computador = rand()%6;
	
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf("  Eu vou pensar em um número entre 0 a 5! E voce vai ter que adivinhar...\n");
	printf("  Voce tem 5 tentativas %s O.o\n", nome);
	printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

	for(tentativas = 0; tentativas <= 5; tentativas ++){
		
		printf("\n\n\tEm qual numero pensei? ");
		scanf("%d", &jogador);
		
		if(tentativas == 5){
			
			printf("\n  Não foi dessa vez! Tente novamente ^-^\n");
			break;
		}
		
		if(jogador == computador){
			
			printf("\n  Acertooouu!!! Parabens! ^-^\n");
			break;
		}
		
		else{
			
			printf("\n  Errooouu!!!\n  Eu pensei no número %d e não no número %d O.o\n", computador, jogador);
			printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		}
	}
	
	printf("\nTecle >ENTER< para encerrar...");
	getchar();
	getchar();
	
	return 0;
	
}
