#include <stdio.h>

 main()
 {
    int idade; 
    char nome[30];
    float salario;
    
    printf("\nDigite sua idade: ");
    scanf("%d",&idade);
    
    printf("\nDigite seu nome: ");
    scanf("%s",nome);
    
    printf("\nDigite seu salario: ");
    scanf("%f",&salario);
    
    printf("\nNome: %s", nome);
    printf("\nIdade: %d", idade);
    printf("\nSalario: %0.2f",salario);
}
