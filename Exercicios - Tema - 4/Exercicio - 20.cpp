#include<stdio.h>
void testanum(int n)
{
	if((n>=10) && (n<=99))
	  printf("\n Dezena");
	else
	 if((n>=100) && (n<=999))
	   printf("\n Centena");
	 else
	   if((n>=1000) && (n<=9900))
	      printf("\n Milhar");
}
main()
{
	int num;
	printf("\n Numero: ");
	scanf("%d",&num);
	testanum(num);
}
