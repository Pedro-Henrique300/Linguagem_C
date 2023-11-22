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

    printf("\nQuantos alunos s�o? ");
    scanf("%d", &numero_alunos);
    fflush(stdin);

    nota_aluno lista[numero_alunos];
    float media[numero_alunos];
    char situacao[20]; 

    printf("\n\nOK! Vamos calcular a m�dia e verificar a situac�o de %d aluno(s) ent�o.", numero_alunos);
    Sleep(4000);
    system("cls");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for(i = 0; i < numero_alunos; i++){
        media[i] = 0; // Inicializando as m�dias para evitar valores inesperados

        printf("-------------------------------------\n");
        printf("Informe os dados do(a) %d� aluno(a):\n", i+1);
        printf("-------------------------------------\n");

        printf("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);

        printf("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Nota Final em Matem�tica: ");
        scanf("%f", &lista[i].matematica);
        fflush(stdin);

        printf("Nota Final em Portugu�s: ");
		scanf("%f", &lista[i].portugues);
		fflush(stdin);
		
		printf("Nota Final em Ingl�s: ");
		scanf("%f", &lista[i].ingles);
		fflush(stdin);
		
		printf("Nota Final em Ci�ncias: ");
		scanf("%f", &lista[i].ciencias);
		fflush(stdin);
		
		printf("Nota Final em Hist�ria: ");
		scanf("%f", &lista[i].historia);
		fflush(stdin);
		
		printf("Nota Final em Geogr�fia: ");
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
        
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Restaurar cor padr�o
        printf("\n-------------Resultado %d� aluno(a)------------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n\n", lista[i].idade);

        printf("\tNota Final em Matem�tica: %.2f\n", lista[i].matematica);
		printf("\tNota Final em Portugu�s: %.2f\n", lista[i].portugues);
		printf("\tNota Final em Ingl�s: %.2f\n", lista[i].ingles);
		printf("\tNota Final em Ci�ncias: %.2f\n", lista[i].ciencias);
		printf("\tNota Final em Hist�ria: %.2f\n", lista[i].historia);
		printf("\tNota Final em Geogr�fia: %.2f\n\n", lista[i].geografia);

        printf("\tM�dia Final: %.2f\n", media[i]);
        printf("\tSitua��o: ");
        
    	if(media[i] < 5){
    		SetConsoleTextAttribute(hConsole, FOREGROUND_RED); // Alterando a cor do texto para vermelho
            printf("REPROVADO!\n");
        }else if(media[i] < 7){
        	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN); // Alterando a cor do texto para amarelo
            printf("RECUPERA��O!\n");
        }else{
        	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); // Alterando a cor do texto para verde
            printf("APROVADO!\n");
        }
        
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE); // Restaurar cor padr�o
        printf("-------------------------------------------------------\n\n");
    }
    
	puts("\nTecle >Enter< para encerrar o programa!");
    getchar();

    return 0;
}

