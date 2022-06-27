#include<stdio.h>
main()
{
	int nc;
	float vt,sf,vc,sal;
	printf("\n Numero de carros vendidos: ");scanf("%d",&nc);
	printf("\n Valor total das vendas   : ");scanf("%f",&vt);
	printf("\n Salario fixo             : ");scanf("%f",&sf);
	printf("\n Valor da comissao        : ");scanf("%f",&vc);
	sal=sf+(nc*vc)+(vt*5/100);
	printf("\n Salario final do vendedor: %8.2f",sal);
}
