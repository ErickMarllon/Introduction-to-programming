/*3. Solicitar um n�mero inteiro e informar se � positivo, negativo ou nulo. 
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	int num, positivo, negativo;
	
	printf("Insira um n�mero inteiro -> ");
		scanf("%d",&num);
		if(num>0)
			printf("\n N�mero Positivo");
		else if(num<0)
			printf("\n N�mero Negativo");
		else 
			printf("\n N�mero Nulo");
		return 0;
	
}
