//2. Fa�a um programa que leia as 3 notas de um aluno e calcule a m�dia aritm�tica deste aluno. 

#include<stdio.h>
#include<locale.h>

main()
{
setlocale(LC_ALL,"");
float n1,n2,n3,media=0;
	printf("Entre com as notas para saber a m�dia :");
	printf("\n Primeira nota ->");
	scanf("%f", &n1);
	printf("\n Segunda nota  ->");
	scanf("%f", &n2);
	printf("\n Terceira nota ->");
	scanf("%f", &n3);
	media=(n1+n2+n3)/3;
	printf("\n Sua m�dia �: %.2f", media);
	return 0;
}
