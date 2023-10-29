# include <stdio.h>

main()
{
	int A, B, soma, subt, mult, divi;
	
	printf("Informe um valor para A:\n");
		scanf("%d", &A);
		
	printf("Informe um valor para B:\n");
		scanf("%d", &B);
		
		soma = A + B;
		subt = A - B;
		mult = A * B;
		divi = A / B;
		
	printf("\n%d + %d = %.2d", A, B, soma);
	printf("\n%d - %d = %.2d", A, B, subt);
	printf("\n%d * %d = %.2d", A, B, mult);
	printf("\n%d / %d = %.2d", A, B, divi);
}
