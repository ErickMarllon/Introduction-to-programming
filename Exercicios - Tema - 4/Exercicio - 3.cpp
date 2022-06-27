/*Questão 3  

#include <stdio.h>
main() 
{
  float VALOR,NVALOR,DESCONTO;  

  printf("\nEntre com o valor do produto:  ");
  scanf("%f", &VALOR);
  DESCONTO = VALOR*9/100;
  NVALOR = VALOR - DESCONTO;
  printf("Desconto            =   %6.2f \n", DESCONTO);
  printf("Valor com  Desconto =   %6.2f", NVALOR); 
}
*/
#include <stdio.h>

float desconto(float v)
{
	return v*9/100;
}

float novoValor(float v)
{
	return v - desconto(v);
}

main() 
{
    
  float VALOR;
  printf("\nEntre com o valor do produto:  ");
  scanf("%f", &VALOR);
  printf("Desconto            =   %6.2f \n", desconto(VALOR));
  printf("Valor com  Desconto =   %6.2f", novoValor(VALOR));
  
}
