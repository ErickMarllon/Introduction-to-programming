/*5- Elabora um programa que dada a idade de um nadador 
classifica-o em uma das seguintes categorias:
infantil A = 5-7  anos
infantil B = 8-10 anos
juvenil  A = 11-13 anos
juvenil  B = 14-17 anos
adulto = maiores de 18 anos.
*/

#include <stdio.h>
#include <locale>

int main ( )
{
	setlocale(LC_ALL,"");
	int idade;
    printf("\n Insira a idade -> ");
	scanf("%d",&idade);
	if ((idade>=5)&&(idade<=7))
	  printf("\n Infantil A");
	 else if ((idade>=8)&&(idade<=10))
	   printf("\n Infantil B");
	  else if ((idade>=11)&&(idade<=13))
	    printf("\n Juvenil A");
	   else if ((idade>=14)&&(idade<=17))
	     printf("\n Juvenil B");
	    else if (idade>=18)
	     printf("\n Adulto");
	      else
		   printf("\n Idade não  atendida por nenhuma categoria -> ");
				   
}
