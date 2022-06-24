//Faça um programa em C que receba do usuário o valor do seu salário, 
//calcule e mostra o resultado de um aumento de 15% esse salário.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float sal, nsal, aumento;
	
	printf("Entre com seu salário para calcular o aumento-> ");
		scanf("%f", &sal);
		aumento=sal*0.15;
		nsal=sal+aumento;
		printf("\n Seu salário teve um aumento de R$:%.2f",aumento);
		printf("\n Seu novo salário é: R$: %.2f", nsal);
		return 0;
}

