/*Questão 6 

#include<stdio.h>
main()
{
	float PCUSTO,PERC,PVENDA;
	printf("Entre com o preco de custo: ");
	scanf("%f",&PCUSTO);
	printf("Entre com o percentual    : ");
	scanf("%f",&PERC);
	PVENDA= PCUSTO + (PCUSTO*PERC/100);
	printf("Valor da venda = %8.2f",PVENDA);
}
*/
#include<stdio.h>
float calculaVenda (float custo, float percentual)
{
	return custo + (custo*percentual/100);
}
main()
{
	float PCUSTO,PERC;
	printf("Entre com o preco de custo: ");
	scanf("%f",&PCUSTO);
	printf("Entre com o percentual    : ");
	scanf("%f",&PERC);
	
	printf("Valor da venda = %8.2f",calculaVenda(PCUSTO,PERC));
}

