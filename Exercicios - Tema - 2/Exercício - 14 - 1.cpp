/*14. Escrever um algoritmo que leia o nome de um funcionário,
seu numero de horas trabalhadas, o valor que recebe por hora,
o número de filhos com idade menor que 14 anos
e o valor do salário família (pago por filho com menos de 14 anos),
e que calcule o salário total deste funcionário. 
Ao final escreva o seu nome e o seu salário total. 
*/

#include<stdio.h>
#include<locale>

main()
{
	setlocale(LC_ALL,"");
	char nome[20];
	int nht,nfc;
	float vrh,vsf, calc;
	
		printf("\n nome do funcionário -> ");
			scanf("%s",&nome);
		printf("\n número de horas trabalhadas -> ");
			scanf("%d",&nht);
		printf("\n valor que recebe por hora R$ ");
			scanf("%f",&vrh);
		printf("\n número de filhos com idade menor que 14 anos -> ");
			scanf("%d",&nfc);
		printf("\n valor do salário família (pago por filho com menos de 14 anos) R$ ");
			scanf("%f",&vsf);
		
		calc=nht*vrh+nfc*vsf;
		printf("\n nome do funcionário -> %s ", nome);
		printf("\n o salário total deste funcionário é: R$ %.2f",calc);
		return 0;
	
}
