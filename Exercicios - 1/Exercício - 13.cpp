/*13. Escrever um algoritmo que leia: 
� a percentagem do IPI a ser acrescido no valor das pecas;
� o c�digo da peca 1, valor unit�rio da peca 1, 
quantidade de pecas 1; � o c�digo da peca 2,
valor unit�rio da peca 2, 
quantidade de pecas 2. 
O algoritmo deve calcular o valor total a ser pago
e apresentar o resultado.*/

#include<stdio.h>
#include<locale>

main()
{
setlocale(LC_ALL,"");
float ipi,vup,qp,vup2,qp2,cal;
int cp,cp2;

	printf("Percentagem do IPI a ser acrescido no valor das pe�as: ");
		scanf("%f",&ipi);
	printf("\nInsira o c�digo da pe�a 1: ");
		scanf("%d",&cp);
	printf("\nInsira o valor unit�rio da pe�a 1: ");
		scanf("%f",&vup);
	printf("\nInsira a quantidade de pe�as 1: ");
		scanf("%f",&qp);
		
	printf("\nInsira o c�digo da pe�a 2: ");
		scanf("%d",&cp2);
	printf("\nInsira o valor unit�rio da pe�a 2: ");
		scanf("%f",&vup2);
	printf("\nInsira a quantidade de pe�as 2: ");
		scanf("%f",&qp2);
		
		cal=(vup*qp+vup2*qp2)*(ipi/100+1);
		
	printf("\nC�digo da pe�a 1 ->%d.\nC�digo da pe�a 2 ->%d.",cp,cp2);
	printf("\nValor total a ser pago: R$ %.2f.",cal);
	return 0;


}
 
 
