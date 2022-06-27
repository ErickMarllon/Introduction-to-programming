#include <stdio.h>
int fatorial (int  n)
{
   int  i=1, resultado=1;
   while(i<=n)
   {
     resultado*=i;
     i++;
   }
   return  resultado;
} 
main()
{
   int n,i;
   float E=1;
   printf("\n Entre com o numero: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      E=E+(1.0/fatorial(i));
   printf("\n Expressao = %f",E);   
   
}

