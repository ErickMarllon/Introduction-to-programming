/*3 - 2 - Faça um programa que leia dois valores para as variáveis A e B e
efetue a troca dos valores de forma que a variável A passe a possuir 
o valor da variável B e a variável B passe a possuir o valor da variável A.
Apresente os valores trocados. O programa deverá permitir a troca dos números cinco vezes. 
*/

#include<stdio.h>
#include<locale>
 main()
{
	setlocale(LC_ALL,"");
	int i,A,B, TROCA;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Troca de n°:%d.",i);
		printf("\n Entre com o valor de A: ");
		 scanf("%d",&A);
		printf("\n Entre com o valor de B: ");
		 scanf("%d",&B);
	
		TROCA=A;
		A=B;
		B=TROCA;
	
		printf("\n O valor de A é -> %d .\n O valor de B é -> %d.\n",A,B);
		if(i!=5)
		  printf("\n------------------------\n");
		 else
		 	printf("\n Fim do programa");
		
	}

	return 0;
}
