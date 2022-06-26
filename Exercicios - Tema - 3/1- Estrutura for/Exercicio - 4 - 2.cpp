/*4 - Crie um programa que calcula o desconto previdenciário de dez funcionários.
Dado um salário, o programa deve retornar o valor do desconto proporcional ao mesmo. 
O cálculo segue a regra: o desconto é de 11% do valor do salário, entretanto, 
o valor máximo de desconto é 318,20. Sendo assim, ou o programa retorna o valor 
equivalente a 11% sobre o salário ou 318,20. 
*/

#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL,"");
	int i=1;
	float INSS,mdesc,sal,nsal;
	
	printf("\nVamos calcular o desconto previdenciário de dez funcionários.\n");
	for (i=1;i<=10;i++)
	{
	printf("\n Entre com o salário do %d° funcionário: ",i);
	 scanf("%f",&sal);
	INSS=sal*0.11;
	nsal=sal-INSS;
	 if(INSS>318.20)
	  INSS=318.20;
	  nsal=sal-INSS;
	  printf("\n INSS: R$%.2f.",INSS);
	  printf("\n O Salário com desconto previdenciário: R$%.2f.",nsal);
	  printf("\n----------------------------------------------------\n");

	}
	return 0;
}
