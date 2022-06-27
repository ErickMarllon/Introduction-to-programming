#include<stdio.h>
main()
{
	float litros,VL,D,VP;
	char tipo;
	
	printf("\n Tipo de combustivel  A-alcool, G-gasolina: ");scanf("%c",&tipo);
	printf("\n Numero de litros vendidos                : ");scanf("%f",&litros);
	if(tipo=='A')
	{
		VL=3.90;
		if(litros<=20)
		  D = 3;
		else
		  D = 5;  
	}
	else
		if(tipo=='G')
		{
		 VL=4.30;
		 if(litros<=20)
		  D = 4;
		 else
		  D = 6; 
		
		}
		else
		{
		printf("\n Tipo inválido");
		VL=0; D=0;
		}
	   VP=litros*VL;
	   VP=VP-(VP*D/100);
	   printf("\n Valor a pagar : %8.2f",VP);
}
