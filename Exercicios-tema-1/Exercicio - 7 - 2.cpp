/*7. Faça um programa que receba o preço de custo de um produto
 e mostre o valor de venda. Sabe-se que será acrescido um 
percentual informado pelo usuário sobre o preço de custo. */

#include <stdio.h>
#include <locale>

main()
{
setlocale(LC_ALL,"");
float pcusto,pc,nv, vvenda;
	printf("Entre com o preço do poduto ->");
		scanf("%f",&pcusto);
	printf("\nEntre com o valor em porcentagem que será adicionado: ");
		scanf("%f",&pc);
	vvenda=pcusto*pc/100;
	nv=pcusto+(pcusto*pc/100);
	printf("\nO valor do produto é R$ %.2f. \nO valor adicionado é R$ %.2f. \nO Novo valor do produto será: R$ %.2f",pcusto,vvenda,nv);
	return 0;
}


