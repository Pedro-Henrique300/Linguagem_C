#include<stdio.h>

int main(){
	
	float A, B, Result=0;
	int escolha;
	
	printf("\n\tATENCAO!!! Apenas 2 digitos depois do '.' serao considerados!\n");
	printf("\nDeseja realizar qual operacao? \n");
	printf("\nDigite [1] para + Adicao ( A + B ).");
	printf("\nDigite [2] para - Subtracao ( A - B ).");
	printf("\nDigite [3] para * Multiplicacao ( A * B ).");
	printf("\nDigite [4] para / Divisao ( A / B ).");
	
	
	printf("\n\nDigite aqui sua resposta: ");
	scanf("%d", &escolha);
	
	
	switch(escolha){
		case 1:
			printf("\n\nDigite um valor para A: ");
			scanf("%f", &A);
			printf("\nDigite um valor para B: ");
			scanf("%f", &B);
				Result = A + B;
			printf("\nO resultado de %.2f + %.2f = %.2f", A, B, Result);
			break;
		case 2:
			printf("\n\nDigite um valor para A: ");
			scanf("%f", &A);
			printf("\nDigite um valor para B: ");
			scanf("%f", &B);
				Result = A - B;
			printf("\nO resultado de %.2f - %.2f = %.2f", A, B, Result);
			break;
		case 3:
			printf("\n\nDigite um valor para A: ");
			scanf("%f", &A);
			printf("\nDigite um valor para B: ");
			scanf("%f", &B);
				Result = A * B;
			printf("\nO resultado de %.2f * %.2f = %.2f", A, B, Result);
			break;
		case 4:
			printf("\n\nDigite um valor para A: ");
			scanf("%f", &A);
			printf("\nDigite um valor para B: ");
			scanf("%f", &B);
				Result = A / B;
			printf("\nO resultado de %.2f / %.2f = %.2f", A, B, Result);
			break;
			
	}
	
	return 0;
	
}
