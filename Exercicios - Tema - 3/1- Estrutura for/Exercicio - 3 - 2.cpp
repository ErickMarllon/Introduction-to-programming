/*3 - 2 - Fa�a um programa que leia dois valores para as vari�veis A e B e
efetue a troca dos valores de forma que a vari�vel A passe a possuir 
o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A.
Apresente os valores trocados. O programa dever� permitir a troca dos n�meros cinco vezes. 
*/

#include<stdio.h>
#include<locale>
 main()
{
	setlocale(LC_ALL,"");
	int i,A,B, TROCA;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Troca de n�:%d.",i);
		printf("\n Entre com o valor de A: ");
		 scanf("%d",&A);
		printf("\n Entre com o valor de B: ");
		 scanf("%d",&B);
	
		TROCA=A;
		A=B;
		B=TROCA;
	
		printf("\n O valor de A � -> %d .\n O valor de B � -> %d.\n",A,B);
		if(i!=5)
		  printf("\n------------------------\n");
		 else
		 	printf("\n Fim do programa");
		
	}

	return 0;
}
