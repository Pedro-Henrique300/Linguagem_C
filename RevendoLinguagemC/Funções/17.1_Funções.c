#include<stdio.h>
#include<locale.h>


float maior(float valor_1, float valor_2){
	if(valor_1 > valor_2){
		return valor_1;
	}else{
		return valor_2;
	}
}


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	float num_1, num_2, m;
	
	printf("Digite o 1º valor: ");
	scanf("%f", &num_1);
	
	printf("Digite o 2º valor: ");
	scanf("%f", &num_2);
	
	m = maior(num_1, num_2);
	
	printf("\nO maior valor é: %.2f", m);

	return 0; 
}
