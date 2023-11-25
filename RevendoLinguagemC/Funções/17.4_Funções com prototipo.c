#include<stdio.h>


float maior(float valor_1, float valor_2);


int main(){
	
	float num1, num2, m;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &num1);
	
	printf("\nInforme o segundo valor: ");
	scanf("%f", &num2);
	
	m = maior(num1, num2);
	
	printf("\nMaior: %.2f", m);
	
}


float maior(float valor_1, float valor_2){
	if(valor_1 > valor_2){
		return valor_1;
	}else{
		return valor_2;
	}
}
