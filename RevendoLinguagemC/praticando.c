#include<stdio.h>

main()
{
	int num, idade = 0;
	char nome[10];
	
	
	printf("Informe seu nome: ");
		scanf("%s", nome);
		
	printf("\nOla %s, poderia informar um numero inteiro? ", nome);
		scanf("%d", &num);
	printf("-----------------------------------------------------------");
	
		
	num*=10;
	printf("\n\nSeu numero X10 eh: %d.", num);
	
	num/=2;
	printf("\n\nA metade desse resultado eh: %d.\n", num);
	
	
	if(num>100){
		printf("\n\t\t _______");
		printf("\n\t\t |_^-^_|  Buu!!");
		printf("\n\t\t /\\   /\\");
	}
}
