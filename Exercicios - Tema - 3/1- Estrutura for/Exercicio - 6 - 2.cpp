/*6 - Obter um n�mero e imprimir a tabuada de multiplicar, seguindo o seguinte layout: 

Entre com o n�mero: 5 

*** TABUADA DO N�MERO 5 *** 

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
	
	printf("Entre com o n�mero: ");
		scanf("%d",&n);
	printf("\n *** TABUADA DO N�MERO %d ***\n",n);
	for(i=1;i<=10;i++)
	{
		printf("\n %d x %d = %d\n",n,i,n*i);
		
	}
	printf("\n Fim do programa");
	return 0;
}
