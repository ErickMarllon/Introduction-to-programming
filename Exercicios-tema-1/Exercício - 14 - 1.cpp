/*14. Escrever um algoritmo que leia o nome de um funcion�rio,
seu numero de horas trabalhadas, o valor que recebe por hora,
o n�mero de filhos com idade menor que 14 anos
e o valor do sal�rio fam�lia (pago por filho com menos de 14 anos),
e que calcule o sal�rio total deste funcion�rio. 
Ao final escreva o seu nome e o seu sal�rio total. 
*/

#include<stdio.h>
#include<locale>

main()
{
	setlocale(LC_ALL,"");
	char nome[20];
	int nht,nfc;
	float vrh,vsf, calc;
	
		printf("\n nome do funcion�rio -> ");
			scanf("%s",&nome);
		printf("\n n�mero de horas trabalhadas -> ");
			scanf("%d",&nht);
		printf("\n valor que recebe por hora R$ ");
			scanf("%f",&vrh);
		printf("\n n�mero de filhos com idade menor que 14 anos -> ");
			scanf("%d",&nfc);
		printf("\n valor do sal�rio fam�lia (pago por filho com menos de 14 anos) R$ ");
			scanf("%f",&vsf);
		
		calc=nht*vrh+nfc*vsf;
		printf("\n nome do funcion�rio -> %s ", nome);
		printf("\n o sal�rio total deste funcion�rio �: R$ %.2f",calc);
		return 0;
	
}
