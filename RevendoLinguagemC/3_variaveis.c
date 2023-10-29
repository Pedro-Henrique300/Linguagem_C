#include <stdio.h>

#define texto "Estou estudando programacao!" // Para criar uma variavel constante!!!

main()
{
	printf("%s\n\n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50];
	
	printf("Digite seu nome:\n");
		scanf("%s", nome);
		
	printf("Digite sua idade:\n");
		scanf("%d", &idade);
		
	printf("Digite sua altura:\n");
		scanf("%f", &altura);
		
    printf("\tAs informacoes apresentadas foram:\n\n");
    printf("\tNome: %s\n", nome);
    printf("\tIdade: %d\n", idade);
    printf("\tAltura: %.2f\n", altura);
}
