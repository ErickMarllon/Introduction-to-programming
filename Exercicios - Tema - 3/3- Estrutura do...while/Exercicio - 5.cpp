/*Exercicio 5 
- Fa�a um programa que leia informa��es de alunos (Matricula, Nota1, Nota2 , Nota3)
com o fim das informa��es indicado por Matricula = 9999 . 
Para cada aluno deve ser calculada a m�dia final de acordo com a seguinte f�rmula:
M�dia final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9
Se a m�dia final for igual ou superior a 5, o algoritmo deve mostrar Matr�cula, 
M�dia Final e a mensagem "APROVADO" ; se a m�dia final for inferior a 5, o
algoritmo deve mostrar Matricula, M�dia Final e a mensagem "REPROVADO".
Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e o 
total de reprovados.
*/
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"");
	int Mat,tt=0,tta=0,ttr=0; 
	float Nota1, Nota2 , Nota3, Media;
	do
	{
		printf("\n Informe o N�mero de Matr�cula: "); scanf("%d",&Mat);
		if(Mat==9999)
		  break;
		printf("\n Nota1    : "); scanf("%f",&Nota1);
		printf("\n Nota2    : "); scanf("%f",&Nota2);
		printf("\n Nota3    : "); scanf("%f",&Nota3);
		Media = ((2*Nota1)+(3*Nota2)+(4*Nota3))/9;
		if(Media>=5)
		{
		  printf("\n Matr�cula= %d - M�dia Final= %.1f - APROVADO \n",Mat,Media);
		  printf("\n ===============================================\n");
		  ttr++;
	    }
	    else
	    {
		  printf("\n Matr�cula= %d - M�dia Final= %.1f - REPROVADO",Mat,Media);
		  ttr++;
	    }
	}
	while(Mat!=9999);
	tt = tta + ttr;
	printf("\n Total de Aprovados  = %d",tta);
	printf("\n Total de Alunos     = %d",tt);
	printf("\n Total de Reprovados = %d",ttr);
}
