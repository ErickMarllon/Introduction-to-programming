//Fa�a um programa em C que receba do usu�rio o valor do seu sal�rio, 
//calcule e mostra o resultado de um aumento de 15% esse sal�rio.

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float sal, nsal, aumento;
	
	printf("Entre com seu sal�rio para calcular o aumento-> ");
		scanf("%f", &sal);
		aumento=sal*0.15;
		nsal=sal+aumento;
		printf("\n Seu sal�rio teve um aumento de R$:%.2f",aumento);
		printf("\n Seu novo sal�rio �: R$: %.2f", nsal);
		return 0;
}

