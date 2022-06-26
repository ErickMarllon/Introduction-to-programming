/*1- Faça um programa que leia cinco temperaturas em graus Celsius e
apresente-as convertidas em graus Fahrenheit.
A fórmula de conversão é: F = (9 * C + 160) / 5,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.
*/

#include<stdio.h>


int main()
{
	float tempc, tempf;
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n Celsius :"); scanf("%f",&tempc);
		tempf=(9*tempc+160)/5;
		printf(" Farenheit : %f\n",tempf);
    }
    return 0;
}

