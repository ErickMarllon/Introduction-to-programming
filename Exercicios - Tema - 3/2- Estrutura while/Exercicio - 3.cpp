/* Exercícios 3
1 - Elaborar um programa para entrar com o salário mínimo vigente e o 
salário de n funcionários (parar quando for digitado salário = 0) e informe: 
a. A quantidade de funcionários que recebem um salário mínimo;
b. A porcentagem de funcionários que recebem mais do que 3 salários mínimos.
c. A média salarial.
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	float salmin,salm3,sal,pc,media,m;
	int q1=0,q3=0,total=0;
	
	printf("Entre com o salário mínimo vigente: R$: ");
		scanf("%f",&salmin);
	salm3=salmin*3;
	printf("\n Informe o salário: R$ ");
		scanf("%f",&sal);
	while(sal!=0)
	{
		if (sal<=salmin)
		q1++;
		if (sal>salm3)
		q3++;
		total++;
		m+=sal;
	printf("\n Informe o salário: R$ ");
		scanf("%f",&sal);	
	}
	pc=q3*100/total;
	media=m/total;
	printf("\n Quantidade de funcionários que recebem um salário Mínimo              : %d",q1);
	printf("\n porcentagem de funcionários que recebem mais do que 3 salários mínimos: %.1f %%",pc);
	printf("\n Média salarial: %.2f",media);
	
	return 0;
}
