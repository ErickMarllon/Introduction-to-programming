/* Exerc�cios 3
1 - Elaborar um programa para entrar com o sal�rio m�nimo vigente e o 
sal�rio de n funcion�rios (parar quando for digitado sal�rio = 0) e informe: 
a. A quantidade de funcion�rios que recebem um sal�rio m�nimo;
b. A porcentagem de funcion�rios que recebem mais do que 3 sal�rios m�nimos.
c. A m�dia salarial.
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	float salmin,salm3,sal,pc,media,m;
	int q1=0,q3=0,total=0;
	
	printf("Entre com o sal�rio m�nimo vigente: R$: ");
		scanf("%f",&salmin);
	salm3=salmin*3;
	printf("\n Informe o sal�rio: R$ ");
		scanf("%f",&sal);
	while(sal!=0)
	{
		if (sal<=salmin)
		q1++;
		if (sal>salm3)
		q3++;
		total++;
		m+=sal;
	printf("\n Informe o sal�rio: R$ ");
		scanf("%f",&sal);	
	}
	pc=q3*100/total;
	media=m/total;
	printf("\n Quantidade de funcion�rios que recebem um sal�rio M�nimo              : %d",q1);
	printf("\n porcentagem de funcion�rios que recebem mais do que 3 sal�rios m�nimos: %.1f %%",pc);
	printf("\n M�dia salarial: %.2f",media);
	
	return 0;
}
