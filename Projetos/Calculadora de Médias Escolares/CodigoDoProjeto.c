#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

struct nota_aluno{
    char nome[50];
    int idade;
    float matematica;
    float portugues;
    float ingles;
    float geografia;
    float ciencias;
    float historia;
};

typedef struct nota_aluno nota_aluno;

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i, numero_alunos;

    printf("\nQuantos alunos são? ");
    scanf("%d", &numero_alunos);
    fflush(stdin);

    nota_aluno lista[numero_alunos];
    float media[numero_alunos];
    char situacao[20]; 

    printf("\n\nOK! Vamos calcular a média e verificar a situacão de %d aluno(s) então.", numero_alunos);
    Sleep(4000);
    system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for(i = 0; i < numero_alunos; i++){
        media[i] = 0; // Inicializando as médias para evitar valores inesperados

        printf("-------------------------------------\n");
        printf("Informe os dados do(a) %dº aluno(a):\n", i+1);
        printf("-------------------------------------\n");

        printf("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Nota Final em Matemática: ");
        scanf("%f", &lista[i].matematica);
        fflush(stdin);

        printf("Nota Final em Português: ");
		scanf("%f", &lista[i].portugues);
		fflush(stdin);
		
		printf("Nota Final em Inglês: ");
		scanf("%f", &lista[i].ingles);
		fflush(stdin);
		
		printf("Nota Final em Ciências: ");
		scanf("%f", &lista[i].ciencias);
		fflush(stdin);
		
		printf("Nota Final em História: ");
		scanf("%f", &lista[i].historia);
		fflush(stdin);
		
		printf("Nota Final em Geográfia: ");
		scanf("%f", &lista[i].geografia);
		fflush(stdin);

        media[i] = (lista[i].matematica + lista[i].portugues + lista[i].ingles +
                    lista[i].ciencias + lista[i].historia + lista[i].geografia) / 6;

        puts("\nUm Momento...");
        Sleep(3000);
        system("cls");
    }

    printf("Preparando Resultados...");
    Sleep(4000);
    system("cls");

    for(i = 0; i < numero_alunos; i++){
        
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Restaurar cor padrão
        printf("\n-------------Resultado %dº aluno(a)------------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n\n", lista[i].idade);

        printf("\tNota Final em Matemática: %.2f\n", lista[i].matematica);
		printf("\tNota Final em Português: %.2f\n", lista[i].portugues);
		printf("\tNota Final em Inglês: %.2f\n", lista[i].ingles);
		printf("\tNota Final em Ciências: %.2f\n", lista[i].ciencias);
		printf("\tNota Final em História: %.2f\n", lista[i].historia);
		printf("\tNota Final em Geográfia: %.2f\n\n", lista[i].geografia);

        printf("\tMédia Final: %.2f\n", media[i]);
        printf("\tSituação: ");
        
    	if(media[i] < 5){
    		SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Alterando a cor do texto para vermelho
            printf("REPROVADO!\n");
        }else if(media[i] < 7){
        	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // Alterando a cor do texto para amarelo
            printf("RECUPERAÇÃO!\n");
        }else{
        	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Alterando a cor do texto para verde
            printf("APROVADO!\n");
        }
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Restaurar cor padrão
        printf("-------------------------------------------------------\n\n");
    }
    
	puts("\nTecle >Enter< para encerrar o programa!");
    getchar();

    return 0;
}

