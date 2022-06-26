/*Exercicio 3 
- Faça um programa que leia um conjunto de números (X) e imprima a quantidade 
de números pares (QPares) e a quantidade de números impares (QImpares) lidos. 
Admita que o valor 9999 é utilizado como sentinela para fim de leitura.
Ex.: 1,2,3,4,5 => Pares=2 Impares=3
*/
#include<stdio.h>
#include<locale>
main()
{
	setlocale(LC_ALL,"");
	int X,QPares=0,QImpares=0;
	do
	{
		printf("\n Entre com um número: "); scanf("%d",&X);
		if(X==9999)
		 break;
		if(X%2==0)
		  QPares++;
		else
		  QImpares++;
	}
	while(X!=9999);
	printf("\n Quantidade de Números pares: %d",QPares);
	printf("\n Quantidade de Números ímpares: %d",QImpares);
	return 0;
}
