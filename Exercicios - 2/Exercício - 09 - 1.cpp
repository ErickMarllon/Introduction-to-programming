/*Faça um programa que possa receber um valor de um 
produto e que escreva o novo valor 
tendo em vista que o desconto foi de 9%.*/

#include <stdio.h>
#include <locale>

main()
{
setlocale(LC_ALL,"");
float vp,cal,perc=9;

	printf("Entre com o valor do produto: "); 
		scanf("%f",&vp);
		cal=vp*perc/100;
	printf("\n O novo valor será: %.2f",cal);
	return 0;
}
