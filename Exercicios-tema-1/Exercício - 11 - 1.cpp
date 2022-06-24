/* 11. Fazer um algoritmo ler uma temperatura dada em graus Celsius
 e imprimir o equivalente em Farenheit.*/
 
 #include <stdio.h> 
 #include <locale>
 
 main()
 {
 setlocale(LC_ALL,"");
 float temp,conv;
 
	printf("\n Entre com a temperatura em graus celsius: ");
 		scanf("%f",&temp);
 	conv=(temp*1.8)+32;
 	printf("\n Temperatura em Farenheit: %.1f°F ",conv);
 	return 0;
 }

