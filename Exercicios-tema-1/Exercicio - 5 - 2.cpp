// 5. Faça o programa que calcule o valor em Reais, 
// correspondente aos dólares que um turista possui 
// no cofre do hotel. Solicitar os dados: 
// Quantidade de dólares guardados no cofre e 
// cotação do dólar naquele dia. 

#include <stdio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL,"");
float c, dolargc,cotacao;

	printf("Quantidade de dólares guardados no cofre é: U$ ");scanf("%f",&dolargc);
	printf("\nInforme o a cotação atual do Dolar: U$ ");scanf("%f",&cotacao);
	c=dolargc*cotacao;
	printf("\nO valor em Reais é: R$ %.2f.",c);
	return 0;
	
	
}
