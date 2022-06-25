/*4. Um banco concede um crédito especial aos seus clientes, 
variável com o saldo médio no último ano. 
Construa um programa que leia o saldo médio de um cliente
 e calcule o valor do crédito de acordo com a tabela abaixo.
  Mostre uma mensagem informando o saldo médio e o valor do crédito. 
  
Considerar:

-  Saldo médio  de 0 a 200:  nenhum crédito
- Saldo médio de 200,01 a 400:  20% do valor do saldo médio 
- Saldo médio de 400,01 a 600: 30% do valor do saldo médio 
- Saldo médio acima de 600,01: 40% do valor do saldo médio
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	float saldo, vcred;
	
	printf("\n Saldo Médio -> ");
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



