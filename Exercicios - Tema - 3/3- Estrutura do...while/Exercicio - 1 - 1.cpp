/*Exercicio - 1 
- Faça um programa que leia um conjunto de números (X) e imprima sua soma (Soma) 
e sua média (Media). Admita que o valor 9999 é utilizado como sentinela para fim 
de leitura.
Ex.: 1, 2, 3 => Soma=6 Media=2
*/

#include<stdio.h>
#include<locale>
main()
{
	setlocale(LC_ALL,"");
	int X, Soma=0, cont=0;
	float Media;
	do
	{
	  printf("\n Informe um Número: "); scanf("%d",&X);
	  if(X!=9999)
	  {
	  	Soma+=X;
		cont++;
      }
	}
	while(X!=9999);
	Media=Soma/cont;
	printf("\n Soma  = %d",Soma);
	printf("\n Média = %.0f",Media);
	return 0;
}
