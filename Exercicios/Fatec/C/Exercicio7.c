#include<stdio.h>
#include<conio.h>

main()
{
	float custo_fabrica, perc_revendedor, imposto, preco_final;
	
	printf("\nEntre com o custo de fabrica: ");
	scanf("%f",&custo_fabrica);
	
		//custo_fabrica=40000;
		perc_revendedor=(25* custo_fabrica)/100;
		imposto=(45* custo_fabrica)/100;
		preco_final= custo_fabrica+perc_revendedor+imposto;
		
	printf("\n O custo de fabrica......: %.2f", custo_fabrica);
	printf("\n O percentual do revendedor:.......: %.2f",perc_revendedor);
	printf("\n Os impostos........: %.2f",imposto);
	printf("\n O preco final.........: %.2f",preco_final);
	printf("\n\n\n........FIM..........");
	
	getch(); //esperar uma tecla
}

