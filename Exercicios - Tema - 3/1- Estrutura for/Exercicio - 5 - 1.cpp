/*5 - Faça um programa que imprima os múltiplos positivos de 7, inferiores a 100. 
*/

#include<stdio.h>
#include<locale>
int main()
{
	setlocale(LC_ALL,"");
	int i;
	
	printf("imprima os múltiplos positivos de 7.");
	for(i=7;i<=100;i+=7)
		printf("\n %d",i);
	
	
	return 0;
}
