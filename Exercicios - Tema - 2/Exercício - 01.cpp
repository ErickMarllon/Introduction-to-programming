//1. Dado um n�mero inteiro n�o-nulo, imprima o seu quadrado. 
#include <stdio.h>
#include <locale.h>
int main()
{	setlocale(LC_ALL,"");
	int n1,quad;
	printf("Entre com um n�meto inteiro n�o-nulo para saber seu quadrado -> ");
	scanf("%d",&n1);
	quad=n1*n1;
	printf("\n O quadrado do n�mero %d �: %d",n1,quad);
	return 0;
}
