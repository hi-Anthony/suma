#include <stdio.h>

	int main() 

{

	int a, b , suma;
	char respuesta[100];

	printf("Hola como estas? ");
	fgets(respuesta, sizeof(respuesta), stdin);

	printf("Listo para ver mis habilidades?\n  ");

	printf("Escriba el primer numero: ");
	scanf("%d", &a);

	printf("Escriba el segundo numero: ");
	scanf("%d", &b);

	suma = a + b;

	printf("La suma es %d.\n", suma);
	printf("Gracias por participar .\n");

	return 0;

}

 
