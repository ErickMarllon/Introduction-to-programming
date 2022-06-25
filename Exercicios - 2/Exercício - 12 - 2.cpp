/*12. Fazer um algoritmo ler uma quantidade de chuva dada em 
milímetros e imprimir o equivalente em polegadas 
( 1mm = 0,0393701 polegada). */

#include<stdio.h>
#include<locale>

main()
{
setlocale(LC_ALL,"");
float qchu,pol=25.4, cal;

	printf("Quantidade de chuva em milímetros: ");
		scanf("%f",&qchu);
	cal=qchu/pol;
	printf("\nO equivalente em milímetros é: %.6f", cal);
	return 0;
	
}

