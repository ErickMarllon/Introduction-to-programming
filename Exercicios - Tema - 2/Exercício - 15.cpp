/*15. Escrever um algoritmo que leia o nome de um funcion�rio,
seu o sal�rio,numero de horas trabalhadas por dia e o numero de dias trabalhados
e que calcule o valor que este funcion�rio recebe por hora. 
*/

#include<stdio.h>
#include<locale>

main()
{
	setlocale(LC_ALL,"");
	char nome[20];
	int nht,ndt;
	float vrh,vs, calc;
	
		printf("\n nome do funcion�rio -> ");
			scanf("%s",&nome);
		printf("\n valor do sal�rio R$ ");
			scanf("%f",&vs);
		printf("\n n�mero de horas trabalhadas por dia -> ");
			scanf("%d",&nht);
		printf("\n n�mero de dias trabalhados -> ");
			scanf("%d",&ndt);

		
		calc=vs/ndt/nht;
		printf("\n nome do funcion�rio -> %s ", nome);
		printf("\n Este funcion�rio recebe R$ %.2f por hora." ,calc);
		return 0;
	
}
