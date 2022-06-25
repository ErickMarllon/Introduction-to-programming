/*12. Fazer um algoritmo ler uma quantidade de chuva dada em 
polegadas e imprimir o equivalente em milímetros 
(1 polegada = 25,4 mm). */

#include<stdio.h>
#include<locale>

main()
{
setlocale(LC_ALL,"");
float qchu,pol=25.4, cal;

	printf("Quantidade de chuva em polegadas: ");
		scanf("%f",&qchu);
	cal=qchu*pol;
	printf("\nO equivalente em milímetros é: %.1f", cal);
	return 0;
	
}

