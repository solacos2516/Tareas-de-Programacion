#include <stdio.h>
#include <stdlib.h>

/* Ciclos para dibujar un cuadrilatero definiendo el largo y el ancho como variables */

int main() {
	int caracter = '&';
	int largo = 30, alto = 20;
	printf("\n");
	int alto_actual;
	int posicion_actual;
	for(alto_actual = 0; alto_actual < alto; alto_actual = alto_actual = alto_actual+1){
	for(posicion_actual = 0; posicion_actual < largo; posicion_actual = posicion_actual+1){
		printf("%c", caracter);
	}	
	printf("\n");
	}
	return 0;
}
