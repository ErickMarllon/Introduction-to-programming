//4. Em �pocas de pouco dinheiro, os comerciantes est�o 
//procurando aumentar suas vendas oferecendo desconto. 
//Fa�a um programa que possa receber um valor de um produto 
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
	printf("\nO Valor do produto �    R$:%.2f.", vp);
	printf("\nO valor do desconto foi R$:%.2f.",vdes);
	printf("\nO valor com desconto �  R$:%.2f.",des);
	return 0;
}
