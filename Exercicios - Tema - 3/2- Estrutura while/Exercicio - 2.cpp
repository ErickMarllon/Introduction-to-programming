/*Exercícios 2
Escrever um programa que leia uma quantidade desconhecida de números e conte
quantos deles estão nos seguintes intervalos: [0..25], [26..50], [51..75] e [76..100]. 
A entrada de dados deve terminar quando for lido um número negativo.
*/

#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL,"");
	int n=0,c1=0,c2=0,c3=0,c4=0;
	
	printf("\n Informe um Número: ");scanf("%d",&n);
	while(n>=0)
	{
		if(n<=25)
		  c1++;
	    else
		  if(n<=50)
		    c2++;
		  else
		   if(n<=75)
		     c3++;
		   else
		     if(n<=100)   
		    c4++;		
    printf("\n Informe um Numero: "); scanf("%d",&n);			  
	} 
	 printf("\n Intervalo [ 0..25]  = %d ", c1);
	 printf("\n Intervalo [26..50]  = %d ", c2); 
	 printf("\n Intervalo [51..75]  = %d ", c3);
	 printf("\n Intervalo [76..100] = %d ", c4);
	 return 0;
}
