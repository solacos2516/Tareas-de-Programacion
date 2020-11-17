#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci(int numero){
	if(numero == 0 || numero == 1){
		return 1;
	}else{
		return fibonacci(numero-1) +
		fibonacci(numero-2);
	}
}

int main(int numero_de_argumentos, char **valores) {
	int posicion_a_calcular = 10;
	if(numero_de_argumentos > 0){
		posicion_a_calcular = atoi(valores[1]);
	}
	printf("n: %d\n f: %d", posicion_a_calcular, fibonacci (posicion_a_calcular));
	return 0;
}
