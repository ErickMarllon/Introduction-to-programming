/*2. Entrar como um n�mero inteiro e informar o dia da semana correspondente. 
*/
#include <locale>
#include <stdio.h>
main ( )
{
	setlocale(LC_ALL,"");
	int N;
    printf("\n N�mero: ");
	scanf("%d",&N);
	    switch (N) {
		case 1:
		     printf (" \n Domingo");
		     break;
		case 2:
		     printf (" \n Segunda-feira");
		     break;
		case 3:
		     printf (" \n Terca-feira");
		     break;     
		case 4:
		     printf (" \n Quarta-feira");
		     break;
		case 5:
		     printf (" \n Quinta-feira");
		     break;
		case 6:
		     printf (" \n Sexta-feira");
		     break;
		case 7:
		     printf (" \n S�bado");
		     break;	 	 	      
		default:
		     printf (" \n Valor inv�lido!");
		     		    
	     }
	return 0;
} 

