/*4. Um banco concede um cr�dito especial aos seus clientes, 
vari�vel com o saldo m�dio no �ltimo ano. 
Construa um programa que leia o saldo m�dio de um cliente
 e calcule o valor do cr�dito de acordo com a tabela abaixo.
  Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito. 
  
Considerar:

-  Saldo m�dio  de 0 a 200:  nenhum cr�dito
- Saldo m�dio de 200,01 a 400:  20% do valor do saldo m�dio 
- Saldo m�dio de 400,01 a 600: 30% do valor do saldo m�dio 
- Saldo m�dio acima de 600,01: 40% do valor do saldo m�dio
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	float saldo, vcred;
	
	printf("\n Saldo M�dio -> ");
		scanf("%f",&saldo);
		 if(saldo<200)
		   vcred = 0;
		  else if (saldo < 400)	  
		    vcred = saldo*0.20;
		     else if (saldo < 600)	  
		       vcred = saldo*0.30;
     	      else
		    	vcred = saldo*0.40;
	printf("\n Saldo Medio = %.2f",saldo);
    printf("\n Credito     = %.2f",vcred);		
	return 0;	
}



