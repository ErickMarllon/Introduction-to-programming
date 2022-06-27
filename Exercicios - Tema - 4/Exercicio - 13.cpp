/*Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes
de uma equação do segundo grau e retorne o valor do delta, que é dado por
'b² - 4ac'*/
#include<stdio.h>
int delta (int a, int b, int c)
{
	return (b*b) - (4*a*c);
}
main ()
{
	int n1,n2,n3;
	printf("\n Entre com o numero1: ");
	scanf("%d",&n1);
	printf("\n Entre com o numero2: ");
	scanf("%d",&n2);
	printf("\n Entre com o numero3: ");
	scanf("%d",&n3);
	printf("\n Delta = %d",delta(n1,n2,n3));
}
