/* 10 - Fa�a um programa que possa receber um valor de um 
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
		
	printf("\n O novo valor ser�: %.2f",cal=vp*perc/100);
	return 0;
}
