#include<stdio.h>
#include<locale.h>

/*
C = Capital
I = CDI
t = Valor da taxa
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	
	float C, I, t;
	int i, meses;
	
	printf("Informe o quanto de dinheiro vai ser investido: R$ ");
	scanf("%f", &C);
	fflush(stdin);
	
	printf("\nInforme a taxa de CDI atualmente (sem o %%, e troque , por . por favor): ");
	scanf("%f", &I);
	fflush(stdin);
	
	printf("\nInforme o tempo em meses: ");
	scanf("%d", &meses);
		
		t = 100 + I;
		t /= 100; 
		
		
	for(i=1; i<=meses; i++){
		
		C *= t;
		printf("\nNo %dº mês após o investimento você estará com R$%.2f\n", i, C);
}
	
	printf("\nPressione >Enter< para encerrar...");
	getchar();
	getchar();
	
	return 0;
	
}
