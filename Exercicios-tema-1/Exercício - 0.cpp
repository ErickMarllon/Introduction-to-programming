#include <stdio.h>
#include <locale.h> 

int main()
{

int n1, n2, n3, n4, soma=0;
setlocale(LC_ALL," ");
	
	printf("Informe 4 n�meros inteiros: \n" );
		printf("Informe o primeiro n�mero ->" );
			scanf("%d", &n1);
		printf("Informe o segundo n�mero  ->" );
			scanf("%d", &n2);
		printf("Informe o terceiro n�mero ->" );
			scanf("%d", &n3);
		printf("Informe o quarto n�mero   ->" );
			scanf("%d", &n4);
		soma=n1+n2+n3+n4;
		printf("\n A soma dos n�meros informados �: %d", soma);
		return 0;
}
