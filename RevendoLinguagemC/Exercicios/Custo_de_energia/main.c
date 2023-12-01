
/*Sabe-se que o quilowatt de energia custa um mil�simo do sal�rio m�nimo.
Fa�a um procedimento que receba o valor do sal�rio m�nimo e quantidade de quilowatts consumida por uma resid�ncia.
O procedimento deve calcular e retornar atrav�s de passagem de par�metros por refer�ncia:

a) o valor, em reais, de cada quilowatt;
b) o valor, em reais, a ser pago por essa resid�ncia;
c) o valor, em reais, a ser pago com desconto de 15%.

Sabendo disso, desenvolva um algoritmo que pe�a para o usu�rio inserir o valor do 
sal�rio m�nimo e a quantidade de quilowatts consumida.
Invoque o respectivo procedimento e mostre, na tela, as informa��es dos itens a), b) e c).*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
	*v_kw = v_sal / 1000;
	*v_rs = *v_kw * q_kw;
	*v_dsc = *v_rs * 0.85;
}

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float val_sal, qtde_kw, val_kw, val_reais, val_desc;
	
	printf("Insira o sal�rio m�nimo: ");
	scanf("%f", &val_sal);
	
	printf("Insira a quantidade de KW gastos: ");
	scanf("%f", &qtde_kw);
	
	calcKW(val_sal, qtde_kw, &val_kw, &val_reais, &val_desc);
	
	printf("\nValor de 1 KW (em R$): %.2f.\n", val_kw);
	printf("Valor a ser pago pela resid�ncia (em R$): %.2f.\n", val_reais);
	printf("Valor com desconto (em R$): %.2f.\n", val_desc);
	
	
	
	return 0;
}
