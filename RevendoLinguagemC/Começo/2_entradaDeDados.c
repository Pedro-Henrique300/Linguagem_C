#include <stdio.h>

main()
{
	int idade = 0;
	char nome[10];
	
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	
	printf("Digite seu nome:\n");
	scanf("%s", &nome);
	
	printf("Voce se chama %s e tem %d anos de idade!", nome, idade);
}
