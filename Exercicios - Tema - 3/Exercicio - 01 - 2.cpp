/*1. Uma empresa resolveu conceder descontos de 10% nas vendas superiores a 1000 reais.
 Faça um programa que leia o valor da venda e informe o valor a ser pago. */

#include<stdio.h>
#include<locale>

main()
{
	setlocale(LC_ALL,"");
	float desc,vpg, vendas;
	
	printf("\n Informe o valor da venda: ");
	scanf("%f",&vendas);
		if (vendas > 1000)
			desc = vendas*0.10;
		else
			desc = 0;
		vpg=vendas-desc;
		printf("\n Valor a ser pago = %.2f",desc);
		return 0;
		
}



