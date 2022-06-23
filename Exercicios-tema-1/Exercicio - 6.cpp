//6. A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco)
// prestações sem juros. Faça um programa que receba um valor 
//de uma compra e mostre o valor das prestações.

#include <stdio.h>
#include <locale>

main( )
{
	setlocale(LC_ALL,"");
	float vc,cal;

	printf("Insira o valor da compra -> ");
		scanf("%f",&vc);
	cal=vc/5;
	printf("\nO Valor das prestações: R$ %.2f",cal);
	return 0;
}
