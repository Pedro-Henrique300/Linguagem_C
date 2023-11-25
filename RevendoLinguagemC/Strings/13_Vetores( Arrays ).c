#include<stdio.h>

int main(){
	
	int i, v[5];
	float soma=0;
	
	for(i=0; i<5; i++){
		
		printf("Informe o valor %d: ", i+1);
		scanf("%d", &v[i]);
		
	}
	
	printf("\nOs valores inseridos foram: \n\n");
	
	for(i=0; i<5; i++){
		
		soma += v[i];
		 
		printf("Valor %d: %d\n", i+1, v[i]);
		
	}
	
	printf("\nA media desses valores somados sera: %.2f", soma/5);
	
	return 0;
}
