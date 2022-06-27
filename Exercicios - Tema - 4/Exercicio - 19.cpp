#include<stdio.h>
main()
{
	float nota,maior=0,menor=10,soma=0,media,pa,pr;
	int total=0,qa=0,qr=0;
	
	printf("\n Nota: ");scanf("%f",&nota);
	while(nota!=-1)
	{
		total++; //ou total=total+1;
		if(nota>maior)
		  maior=nota;
		if(nota<menor)
		  menor=nota;
		if(nota>=7)
		  qa++;
		else
		  qr++;    
		soma=soma+nota; //ou soma+=nota;    
		printf("\n Nota: ");scanf("%f",&nota);	
	}
	media=soma/total;
	pa=qa*100/total;
	pr=qr*100/total;
	printf("\n Maior nota                = %4.1f",maior);
	printf("\n Menor nota                = %4.1f",menor);
	printf("\n Media da turma            = %4.1f",media);
	printf("\n Porcentagem de aprovados  = %4.1f %%",pa);
	printf("\n Porcentagem de reprovados = %4.1f %%",pr);
}
