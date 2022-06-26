/* Exercícios 1
Solicitar várias idades e informar:
a. Quantidade de idosos (ID >= 65)
b. Quantidade de eleitores (ID >= 16)
c. Soma das idades da pessoas aptas a dirigir (ID >= 18)
Para de solicitar dados quando idade igual 0.
*/

#include<stdio.h>

int main()
{
	int ID,IDOSOS,ELEIT,APTAS;
	
	printf("\nPara sair digite 0 ou Informe a idade:");scanf("%f",&ID);
	while(ID!=0)
	{
	if(ID>=65)	
		IDOSOS++;
	if(ID>=16)
		ELEIT++;
	if(ID>=18)
		APTAS=APTAS+ID;
	printf("\nInforme a idade: "); scanf("%d",&ID);  
	}
	printf("\n Quantidade de idosos                      : %d ",IDOSOS);
	printf("\n Quantidade de eleitores                   : %d ",ELEIT);
    printf("\n Soma das idades da pessoas aptas a dirigir: %d",APTAS); 	
    
    return 0;
	
}
