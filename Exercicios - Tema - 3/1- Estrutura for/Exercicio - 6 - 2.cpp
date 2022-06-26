/*6 - Obter um número e imprimir a tabuada de multiplicar, seguindo o seguinte layout: 

Entre com o número: 5 

*** TABUADA DO NÚMERO 5 *** 

5 x 1 = 5 

5 x 2 = 10 

... 

5 x 10 = 50
*/


#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL,"");
	int i,n;
	
	printf("Entre com o número: ");
		scanf("%d",&n);
	printf("\n *** TABUADA DO NÚMERO %d ***\n",n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d x %d = %d\n",n,i,n*i);
		
	}
	printf("\n Fim do programa");
	return 0;
}
