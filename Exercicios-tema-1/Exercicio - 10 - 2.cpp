/*Faça um programa que possa receber um valor de um 
produto e que escreva o novo valor 
tendo em vista que o lojista pode alterar o percentual de desconto.*/

#include <stdio.h>
#include <locale>

main()
{
setlocale(LC_ALL,"");
float vp,cal,perc;

	printf("Entre com o valor do produto: "); 
		scanf("%f",&vp);
	printf("Entre com a porcentagem do desconto: %% "); 
		scanf("%f",&perc);
		cal=vp*perc/100;
	printf("\n O novo valor será: %.2f",cal);
	return 0;
}
