/*15. Escrever um algoritmo que leia o nome de um funcionário,
seu o salário,numero de horas trabalhadas por dia e o numero de dias trabalhados
e que calcule o valor que este funcionário recebe por hora. 
*/

#include<stdio.h>
#include<locale>

main()
{
	setlocale(LC_ALL,"");
	char nome[20];
	int nht,ndt;
	float vrh,vs, calc;
	
		printf("\n nome do funcionário -> ");
			scanf("%s",&nome);
		printf("\n valor do salário R$ ");
			scanf("%f",&vs);
		printf("\n número de horas trabalhadas por dia -> ");
			scanf("%d",&nht);
		printf("\n número de dias trabalhados -> ");
			scanf("%d",&ndt);

		
		calc=vs/ndt/nht;
		printf("\n nome do funcionário -> %s ", nome);
		printf("\n Este funcionário recebe R$ %.2f por hora." ,calc);
		return 0;
	
}
