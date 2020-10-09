#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct cuadrilatero{
	int base;
	int altura;
};

int main(int argc, char *argv[]) {
  struct cuadrilatero cuadrilatero1;	
  struct cuadrilatero cuadrilatero2;
  cuadrilatero1.base = 10;
  cuadrilatero1.altura = 16;
  cuadrilatero2.base = 15;
  cuadrilatero2.altura = 8;
  printf("Base del cuadrilatero1: %d cm \n", cuadrilatero1.base);
  printf("Altura del cuadrilatero1: %d cm \n", cuadrilatero1.altura);
  printf("Primer cuadrilatero:\n");
  int i, j;
  for(i=0; i<= cuadrilatero1.base; i++){
  	for(j=0; j<= cuadrilatero1.altura; j++){
  		printf("&");
	  }
	  printf("\n");
  }
	return 0;
}
