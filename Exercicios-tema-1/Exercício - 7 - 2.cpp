/*7. Fa�a um programa que receba o pre�o de custo de um produto
 e mostre o valor de venda. Sabe-se que ser� acrescido um 
percentual informado pelo usu�rio sobre o pre�o de custo. */

#include <stdio.h>
#include <locale>

main()
{
setlocale(LC_ALL,"");
float pcusto,pc,nv, vvenda;
	printf("Entre com o pre�o do poduto ->");
		scanf("%f",&pcusto);
	printf("\nEntre com o valor em porcentagem que ser� adicionado: ");
		scanf("%f",&pc);
	vvenda=pcusto*pc/100;
	nv=pcusto+(pcusto*pc/100);
	printf("\nO valor do produto � R$ %.2f. \nO valor adicionado � R$ %.2f. \nO Novo valor do produto ser�: R$ %.2f",pcusto,vvenda,nv);
	return 0;
}


