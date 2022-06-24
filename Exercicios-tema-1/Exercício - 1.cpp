//1. Dado um número inteiro não-nulo, imprima o seu quadrado. 
#include <stdio.h>
#include <locale.h>
int main()
{	setlocale(LC_ALL,"");
	int n1,quad;
	printf("Entre com um númeto inteiro não-nulo para saber seu quadrado -> ");
	scanf("%d",&n1);
	quad=n1*n1;
	printf("\n O quadrado do número %d é: %d",n1,quad);
	return 0;
}
