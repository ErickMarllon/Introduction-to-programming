//4. Em épocas de pouco dinheiro, os comerciantes estão 
//procurando aumentar suas vendas oferecendo desconto. 
//Faça um programa que possa receber um valor de um produto 
//e que escreva o novo valor tendo em vista que o desconto foi de 9%. 
#include <stdio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL,"");
float vp,des,vdes;
	printf("Entre com o Valor do produto -> ");
	scanf("%f",&vp);
	des=vp*0.9;
	vdes=vp-des;
	printf("\nO Valor do produto é    R$:%.2f.", vp);
	printf("\nO valor do desconto foi R$:%.2f.",vdes);
	printf("\nO valor com desconto é  R$:%.2f.",des);
	return 0;
}
