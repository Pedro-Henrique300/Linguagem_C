#include<stdio.h>
#include<locale.h>

// Para melhor compreenção desse programa, deve ser aberto o arquivo .exe pelo pronpt de comando!!!

int main(int argc, char *argv[]){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	if(argc > 1){
		printf("\nForam escritos %d argumentos!\n", argc);
		for(i=0; i < argc; i++){
			printf("\n%s\n", argv[i]);
		}
	}else{
		printf("\nNão foram inseridos argumentos no programa!\n");	
	}
}
