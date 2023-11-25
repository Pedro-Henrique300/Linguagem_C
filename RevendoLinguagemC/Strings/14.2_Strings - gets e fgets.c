#include<stdio.h>

int main(){
	
	char s[10];
	
	printf("Digite algo ( letura do gets ): \n");
	gets(s);
	fflush(stdin);
	
	puts("\nResultado:\n");
	puts(s);
	puts("");
	
	
	printf("\nDigite algo ( leitura do fgets ): \n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	puts("\nResultado:\n");
	puts(s);
	puts("");
	
	return 0;
	
}
