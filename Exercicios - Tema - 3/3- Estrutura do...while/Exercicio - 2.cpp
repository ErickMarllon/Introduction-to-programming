/*Exercicio 2 
- Faça um programa que leia um conjunto de dados numéricos (X) e imprima 
o maior (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela.
Ex.: 1, 2, 3 => Maior=3
*/
#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL,"");
   int X,Maximo,i=1;
   
   do
   {
   	printf("\n Informe um Número: "); scanf("%d",&X);
   	
   	 if(X!=9999)
	 {
	 	if ((X>Maximo) || (i==1))
   	      Maximo=X;
   	    i++;
     }
   }
   while(X!=9999);
   printf("\n O maior é= %d",Maximo);
   return 0;
}
