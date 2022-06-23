//3. Faça um programa que leia as 3 notas de um aluno e 
//calcule a média final deste aluno. Considerar que a média é 
//ponderada e que o peso das notas é: 2,3 e 5, respectivamente. 

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"");
	float n1,n2,n3,media;
	printf("\n Entre com as notas para saber a média:");
	printf("\n Primeira nota -> "); scanf("%f",&n1);
	printf("\n Segunda nota  -> "); scanf("%f",&n2);
	printf("\n Terceira nota -> "); scanf("%f",&n2);
	media=(n1*2+n2*3+n3*5)/10; 
	printf("\n Sua média é: %.2f",media);
	return 0;
}
