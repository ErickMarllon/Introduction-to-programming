// 5. Fa�a o programa que calcule o valor em Reais, 
// correspondente aos d�lares que um turista possui 
// no cofre do hotel. Solicitar os dados: 
// Quantidade de d�lares guardados no cofre e 
// cota��o do d�lar naquele dia. 

#include <stdio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL,"");
float c, dolargc,cotacao;

	printf("Quantidade de d�lares guardados no cofre �: U$ ");scanf("%f",&dolargc);
	printf("\nInforme o a cota��o atual do Dolar: U$ ");scanf("%f",&cotacao);
	c=dolargc*cotacao;
	printf("\nO valor em Reais �: R$ %.2f.",c);
	return 0;
	
	
}
