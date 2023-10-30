#include<stdio.h>

/*
C = Montante
I = Taxa ( CDI )
t = Valor da taxa
*/


main()
{
	float C, I, t;
	int i;
	
	printf("Informe o quanto de dinheiro vai ser investido: R$ ");
	scanf("%f", &C);
	
	printf("\nInforme a taxa de CDI atualmente ( sem o sinal de %% por favor ): ");
	scanf("%f", &I);
	
		
		t = 100 + I;
		t /= 100; 
		
		
	for(i=1; i<=12; i++){
		C *= t;
		printf("\nNo mes %d apos o investimento voce estara com R$%.2f\n", i, C);
	}
	
	
	printf("\nPessione Enter para continuar...");
	getchar();
	
	return 0;
	
}
