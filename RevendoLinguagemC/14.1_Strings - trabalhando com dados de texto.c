#include<stdio.h>

int main(){
	
	char s[10];
	
	printf("Digite uma frase: ");
	scanf("%s", s);
	fflush(stdin);
	
	
	printf("\nAqui esta a frase: %s\n\n", s);
	
	
	printf("Digite uma frase: ");
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	
	printf("\nAqui esta a frase: %s\n\n", s);
	
	
	return 0;
	
}
