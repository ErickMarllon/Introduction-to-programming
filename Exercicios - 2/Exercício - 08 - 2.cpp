/*8. O custo ao consumidor, de um carro novo,
� a soma do custo de f�brica com a percentagem 
do distribuidor e dos impostos 
(aplicados ao custo de f�brica). Supondo que 
a percentagem do distribuidor seja de 28% 
e os impostos de 45%, escrever um programa 
para ler o custo de f�brica de um carro e 
escrever o custo ao consumidor.*/

#include <stdio.h>
#include <locale>

main()
{
setlocale(LC_ALL,"");
float cf, calcpc,calcimp,total,pc,impostos;

	printf("\n Insira o custo de f�brica: R$ ");
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
	printf("\n O custo ao consumidor ser�: R$ %.2f",total);
	return 0;
}
