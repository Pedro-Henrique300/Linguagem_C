#include<stdio.h>
#include<locale.h>

/*
C = Capital
I = Juros
t = Valor da taxa
*/


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float C, I, t;
	int i, meses;
	
	printf("\nInforme o seu capital: R$ ");
	scanf("%f", &C);
	fflush(stdin);
	
	printf("\nInforme a taxa de juros (sem o %%, por favor): ");
	scanf("%f", &I);
	fflush(stdin);
	
	printf("\nInforme o tempo em meses: ");
	scanf("%d", &meses);
		
		t = 100 + I;
		t /= 100; 
		
		
	for(i=1; i<=meses; i++){
		
		C *= t;
		printf("\nNo %dº mês com o juros aplicado o valor será: R$%.2f\n", i, C);
}
	
	printf("\nPressione >Enter< para encerrar...");
	getchar();
	getchar();
	
	return 0;
	
}
