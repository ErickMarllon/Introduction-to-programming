/*
 Exercícios 7
 Faça um programa que leia o sexo e a idade de 10 pessoas e ao final informe: 
 - Quantidade e porcentagem de homens; 
 - Quantidade e porcentagem de mulheres; 
 - Média das idades; 
 - Maior idade do grupo; 
 - Menor idade do grupo.
*/
#include<stdio.h>
#include<locale>

int main ()
{
	setlocale(LC_ALL,"");
	char sexo;
	int i,idade,maior=0,menor=0,c,qh=0,qm=0;
	float ph,pm,media;
	printf("Instruções: F - Feminino ou M - Masculino.\n");
	for(i=1;i<=10;i++)
	{
	printf("\n Dados da %d° Pessoa.",i);
	printf("\n Entre com o sexo: ");
	 scanf(" %c",&sexo);
	printf(" Entre com a idade: ");
	 scanf("%d",&idade);
	 if (sexo=='M' ||sexo=='m')
	 qh++;
	 else
	 	if (sexo=='F'||sexo=='f')
	qm++;
	c+=idade;	 
		if(idade>maior || i==1)
		   maior=idade;
		if(idade<menor || i==1)
		   menor=idade; 
	 	
	}
	ph=qh*100/10;
	pm=qm*100/10;
	media=c/10;
	printf("\nQuantidade e porcentagem de homens   : %d",qh);
	printf("\nQuantidade e porcentagem de mulheres : %d",qm);
	printf("\nMédia das idades                     : %.1f",media);
	printf("\nMaior idade do grupo                 : %d",maior);
	printf("\nMenor idade do grupo                 : %d", menor);
	printf("\n Fim do programa.");
	return 0;
}
