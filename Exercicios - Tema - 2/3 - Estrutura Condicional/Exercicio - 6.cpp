/*
1. Tendo como dados de entrada a altura e o sexo de uma pessoa
 (M - masculino e F - feminino), construa um programa que calcule seu peso ideal.,
  utilizando as seguintes fórmulas: 

- para homens: (72.7*h)-58 

- para mulheres: (62.1*h)-44.7 

*/

#include<stdio.h>
#include<locale>

int main()
{
	char sexo;
	float peso, alt, conv;
	
	printf("Entre com altura  -> ");
		scanf("%f",&alt);
	printf("\nEntre com o sexo ->");
		scanf(" %c",&sexo);
	switch (sexo){
		case'M':{
			peso =(72.7*alt)-58;			
			break;
			}
		case 'F':{
			peso = (62.1*alt)-44.7;		
			break;
			}
		default:{
	printf("\n Sexo invalido");
	break;
		}
		
	}
	printf("\n Peso ideal = %2.2f",peso);
	return 0;		
}
  
