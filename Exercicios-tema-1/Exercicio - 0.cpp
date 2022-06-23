#include <stdio.h>
#include <locale.h> 

int main()
{

int n1, n2, n3, n4, soma=0;
setlocale(LC_ALL," ");
	
	printf("Informe 4 números inteiros: \n" );
		printf("Informe o primeiro número ->" );
			scanf("%d", &n1);
		printf("Informe o segundo número  ->" );
			scanf("%d", &n2);
		printf("Informe o terceiro número ->" );
			scanf("%d", &n3);
		printf("Informe o quarto número   ->" );
			scanf("%d", &n4);
		soma=n1+n2+n3+n4;
		printf("\n A soma dos números informados é: %d", soma);
		return 0;
}
