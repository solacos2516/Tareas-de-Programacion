#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>
#include <stdlib.h>

int f_factorial(int number){
          if (number <= 0){
                  return 1;
          } else {
                  return number * f_factorial(number - 1);
          }
}

int main (int arg_cont, char **arg_v){
          int numero = 0;
          int resultado;
          int i = 0;

          for (i = 1; i < arg_cont; i ++){
                  numero = atoi(arg_v[i]);
                  resultado = f_factorial(numero);
                  printf("El factorial del numero %d es %d\n", numero, resultado);
          }
            return 0;
}
	return 0;
}
