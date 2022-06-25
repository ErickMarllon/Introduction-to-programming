/*8. O custo ao consumidor, de um carro novo,
é a soma do custo de fábrica com a percentagem 
do distribuidor e dos impostos 
(aplicados ao custo de fábrica). Supondo que 
a percentagem do distribuidor seja de 28% 
e os impostos de 45%, escrever um programa 
para ler o custo de fábrica de um carro e 
escrever o custo ao consumidor.*/

#include <stdio.h>
#include <locale>

main()
{
setlocale(LC_ALL,"");
float cf, calcpc,calcimp,total,pc,impostos;

	printf("\n Insira o custo de fábrica: R$ ");
		scanf("%f",&cf);
	printf("\n Insira a percentagem do distribuidor: %% ");
		scanf("%f",&pc);
	printf("\n Insira o valor do imposto: %% ");
		scanf("%f",&impostos);
	calcpc=cf*pc/100;
	calcimp=cf*impostos/100;
	total=calcpc+calcimp+cf;
	printf("\n Valor do distribuidor: R$ %.2f",calcpc);
	printf("\n Valor dos impostos: R$ %.2f",calcimp);
	printf("\n O custo ao consumidor será: R$ %.2f",total);
	return 0;
}
