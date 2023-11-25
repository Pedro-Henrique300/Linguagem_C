#include<stdio.h>

main()
{
	int d;
	
	printf("Digite um numero de 1 a 7: ");
	scanf("%d", &d);
	
	switch(d){
		case 1:
			printf("\nDomingo.");
			break;
		case 2:
			printf("\nSegunda-feira");
			break;
		case 3:
			printf("\nTerca-feira");
			break;
		case 4:
			printf("\nQuarta-feira");
			break;
		case 5:
			printf("\nQuinta-feira");
			break;
		case 6:
			printf("\nSexta-feira");
			break;
		case 7:
		printf("\nSabado");
			break;
		default:
			printf("\nNumero Invalido!!!");
			break;
		}
}
