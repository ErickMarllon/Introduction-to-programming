/*5 - Faça um programa que imprima os múltiplos positivos de 7, inferiores a 100. 
*/

#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL,"");
	int i,cont;
	
	printf("imprima os múltiplos positivos de 7.");
	for(i=7,cont=1;i<=100;i+=7,cont++)
	{
		printf("\n %d x %d",cont, i);
	}
	printf("\n Fim do programa");
	return 0;
}
