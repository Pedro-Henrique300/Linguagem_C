#include <stdio.h>


main() {
	float valor_1, valor_2, result_1, result_2, result_3, result_4;
	
		printf("\nDigite um valor: ");
		scanf("%f",&valor_1);
		
		printf("\nDigite outro valor: ");
		scanf("%f",&valor_2);
		
			result_1=valor_1+valor_2;
			result_2=valor_1-valor_2;
			result_3=valor_1/valor_2;
			result_4=valor_1*valor_2;
			
		printf("\n\nAdicao: %0.1f",result_1);
		printf("\n\nSubtracao: %0.1f",result_2);
		printf("\n\nDivisao: %0.1f",result_3);
		printf("\n\nMultiplicacao: %0.1f",result_4);
	return 0;
}
