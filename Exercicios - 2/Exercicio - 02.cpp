/*2. Entrar com 3 notas de um aluno e informar a sua situação
 (APROVADO caso média aritmética >=7 e REPROVADO caso contrário).  
*/

#include<stdio.h>
#include<locale>

int main()
{
	setlocale(LC_ALL,"");
	float n1,n2,n3,media;
	
	printf("\n Insira a primeira nota -> ");
		scanf("%f",&n1);
	printf("\n Insira a segunda  nota -> ");
		scanf("%f",&n2);
	printf("\n Insira a terceira nota -> ");
		scanf("%f",&n3);
	media=(n1+n2+n3)/3;
		if (media>=7)
			printf("\n Aluno APROVADO");
		else 
		printf("\n Aluno REPROVADO");
		
	return 0;
	
}
