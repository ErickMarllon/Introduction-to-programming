//6. A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco)
// presta��es sem juros. Fa�a um programa que receba um valor 
//de uma compra e mostre o valor das presta��es.

#include <stdio.h>
#include <locale>

main( )
{
	setlocale(LC_ALL,"");
	float vc,cal;

	printf("Insira o valor da compra -> ");
		scanf("%f",&vc);
	cal=vc/5;
	printf("\nO Valor das presta��es: R$ %.2f",cal);
	return 0;
}
