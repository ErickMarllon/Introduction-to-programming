//3. Fa�a um programa que leia as 3 notas de um aluno e 
//calcule a m�dia final deste aluno. Considerar que a m�dia � 
//ponderada e que o peso das notas �: 2,3 e 5, respectivamente. 

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float n1,n2,n3,media;
	printf("\n Entre com as notas para saber a m�dia:");
	printf("\n Primeira nota -> "); scanf("%f",&n1);
	printf("\n Segunda nota  -> "); scanf("%f",&n2);
	printf("\n Terceira nota -> "); scanf("%f",&n2);
	media=(n1*2+n2*3+n3*5)/10; 
	printf("\n Sua m�dia �: %.2f",media);
	return 0;
}
