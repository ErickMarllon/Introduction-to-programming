/*16. Escrever um algoritmo que leia o valor de uma compra em dólares,
a cotação do dólar no dia da compra,
o percentual de ICMS e o percentual de lucro da empresa.
Calcule e escreva o valor a ser pago em reais, 
sabendo-se que o percentual de lucro e o percentual de ICMS 
incidem sobre o valor em reais.
*/

#include<stdio.h>
#include<locale>

main()
{
	setlocale(LC_ALL,"");
	float vcd, cdc, icms,ple,c,cicms,lucro;
	
	printf("\n valor da compra em dólares ->        U$ ");
		scanf("%f",&vcd);
	printf("\n cotação do dólar no dia da compra -> R$ ");
		scanf("%f",&cdc);
	printf("\n percentual de ICMS ->                %% ");
		scanf("%f",&icms);
	printf("\n percentual de lucro da empresa ->    %% ");
		scanf("%f",&ple);
		
	c=vcd*cdc;
	cicms=c*icms/100;
	lucro=c*ple/100;
	c=c+cicms+lucro;

	printf("\n Valor a ser pago em reais:       R$ %.2f",c);
	return 0;
}
