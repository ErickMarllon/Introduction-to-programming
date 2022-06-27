#include<stdio.h>
main()
{
	int j,i,n;
	
    for(j=1;j<=20;j++)
    {
        printf("\n --------------------- ");
        printf("\n Entre com o numero: ");
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	printf("\n %d x %d = %d",i,n,i*n);
    }
}
