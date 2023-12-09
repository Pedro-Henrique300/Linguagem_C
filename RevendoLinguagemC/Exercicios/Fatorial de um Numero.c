#include <stdio.h>
#include <locale.h>


int calcularFatorial(int valor);


int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int num, fatorial;
	
	puts("Vamos calcular o fatorial de um número.");
	
	puts("Digite um número inteiro não negativo:");
	scanf("%d", &num);
	
	fatorial = calcularFatorial(num);
	
	printf("\nO fatorial de %d é: %d", num, fatorial);
	
	return 0;
	
}


int calcularFatorial(int valor){
	int fatorial_num = 1;
	int i;
	
	if(valor <= 0){
		return -1;
	}
	
	for(i = 1; i <= valor; i++){
		fatorial_num *= i;
	}
	
	return fatorial_num;
}
