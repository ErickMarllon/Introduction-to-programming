/*13. Escrever um algoritmo que leia: 
• a percentagem do IPI a ser acrescido no valor das pecas;
• o código da peca 1, valor unitário da peca 1, 
quantidade de pecas 1; • o código da peca 2,
valor unitário da peca 2, 
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

	printf("Percentagem do IPI a ser acrescido no valor das peças: ");
		scanf("%f",&ipi);
	printf("\nInsira o código da peça 1: ");
		scanf("%d",&cp);
	printf("\nInsira o valor unitário da peça 1: ");
		scanf("%f",&vup);
	printf("\nInsira a quantidade de peças 1: ");
		scanf("%f",&qp);
		
	printf("\nInsira o código da peça 2: ");
		scanf("%d",&cp2);
	printf("\nInsira o valor unitário da peça 2: ");
		scanf("%f",&vup2);
	printf("\nInsira a quantidade de peças 2: ");
		scanf("%f",&qp2);
		
		cal=(vup*qp+vup2*qp2)*(ipi/100+1);
		
	printf("\nCódigo da peça 1 ->%d.\nCódigo da peça 2 ->%d.",cp,cp2);
	printf("\nValor total a ser pago: R$ %.2f.",cal);
	return 0;


}
 
 
