/*1- Fa�a um programa que leia cinco temperaturas em graus Celsius e
apresente-as convertidas em graus Fahrenheit.
A f�rmula de convers�o �: F = (9 * C + 160) / 5,
na qual F � a temperatura em Fahrenheit e C � a temperatura em Celsius.
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

