/*12. Fazer um algoritmo ler uma quantidade de chuva dada em 
mil�metros e imprimir o equivalente em polegadas 
( 1mm = 0,0393701 polegada). */

#include<stdio.h>
#include<locale>

main()
{
setlocale(LC_ALL,"");
float qchu,pol=25.4, cal;

	printf("Quantidade de chuva em mil�metros: ");
		scanf("%f",&qchu);
	cal=qchu/pol;
	printf("\nO equivalente em mil�metros �: %.6f", cal);
	return 0;
	
}

