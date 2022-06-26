/*3. Solicitar um número inteiro e informar se é positivo, negativo ou nulo. 
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	int num, positivo, negativo;
	
	printf("Insira um número inteiro -> ");
		scanf("%d",&num);
		if(num>0)
			printf("\n Número Positivo");
		else if(num<0)
			printf("\n Número Negativo");
		else 
			printf("\n Número Nulo");
		return 0;
	
}
