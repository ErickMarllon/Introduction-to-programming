/*4 - Crie um programa que calcula o desconto previdenci�rio de dez funcion�rios.
Dado um sal�rio, o programa deve retornar o valor do desconto proporcional ao mesmo. 
O c�lculo segue a regra: o desconto � de 11% do valor do sal�rio, entretanto, 
o valor m�ximo de desconto � 318,20. Sendo assim, ou o programa retorna o valor 
equivalente a 11% sobre o sal�rio ou 318,20. 
*/

#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL,"");
	int i=1;
	float INSS,mdesc,sal,nsal;
	
	printf("\nVamos calcular o desconto previdenci�rio de dez funcion�rios.\n");
	for (i=1;i<=10;i++)
	{
	printf("\n Entre com o sal�rio do %d� funcion�rio: ",i);
	 scanf("%f",&sal);
	INSS=sal*0.11;
	nsal=sal-INSS;
	 if(INSS>318.20)
	  INSS=318.20;
	  nsal=sal-INSS;
	  printf("\n INSS: R$%.2f.",INSS);
	  printf("\n O Sal�rio com desconto previdenci�rio: R$%.2f.",nsal);
	  printf("\n----------------------------------------------------\n");

	}
	return 0;
}
