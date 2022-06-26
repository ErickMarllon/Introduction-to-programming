/*2- Faça um programa que leia cinco temperaturas em graus Fahrenheit e
apresente-as convertidas em graus Celsius.
A fórmula de conversão é: c = (f - 32) * 5/9,
na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius.
*/
#include<stdio.h>

int main()
{
	int i;
	float tempc,tempf;
	for(i=1;i<=5;i++)
		{
		printf("\n Farenheit :"); scanf("%f",&tempf);
		tempc=(tempf-32)*5/9;
		printf(" Celsius : %f\n",tempc);
    }
    return 0;
}

	

