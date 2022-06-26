/*5- Elabora um programa que dada a idade de um nadador 
classifica-o em uma das seguintes categorias:
infantil A = 5-7  anos
infantil B = 8-10 anos
juvenil  A = 11-13 anos
juvenil  B = 14-17 anos
adulto = maiores de 18 anos.
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	int idade=0;
	
	printf("\n Insira a idade -> ");
		scanf("%d",&idade);
		if (idade <= 4 )
		  printf("\n Idade não  atendida por nenhuma categoria.");	
		 else if (idade <= 7)
		   printf("\n infantil A.");
		  else if(idade <= 10)
		    printf("\n infantil B.");
		   else if (idade <= 13)
		     printf("\n juvenil  A.");
		    else if(idade <= 17)
		      printf("\n juvenil  B.");
		      else
		       printf("\n Adulto.");
		       
	return 0;
}
