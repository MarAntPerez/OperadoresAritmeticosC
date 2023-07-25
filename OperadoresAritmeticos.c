#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int numeroUno;
	int numeroDos;
	int a = 16;
	int b = 6;
	int resultado;
	
	printf("Ingresa un numero: ");
	scanf("%d", &numeroUno);
	printf("Ingresa otro numero: ");
	scanf("%d", &numeroDos);
	//resultado = a*(numeroUno * numeroDos) + b*(b - numeroUno);
	resultado = a*b+numeroUno+numeroDos;
	printf("El resultado es: %d", resultado);
	
	return 0;
}
