#include<stdio.h>

main()
{
	float m;
	
	printf("Digite a nota: ");
	scanf("%f", &m);
	
	if(m >= 7){
		printf("\nAprovado(a)!");
	}
	else{
		printf("\nReprovado(a)!");
	}
	
	return 0;
}
