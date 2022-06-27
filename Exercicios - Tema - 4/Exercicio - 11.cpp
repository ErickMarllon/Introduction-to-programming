#include<stdio.h>
char* testaPositivo (int n)
{
	if (n>0)
	  return "Eh positivo";
	else
	  return "Nao Eh positivo";
}
main ()
{
	int num;
	printf("\n Entre com o numero: ");
	scanf("%d",&num);
	printf("\n %s",testaPositivo(num));
}
