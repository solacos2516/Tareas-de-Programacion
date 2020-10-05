#include <stdio.h>
#include <stdlib.h>

/*  Dado un caracter, decir el tipo de caracter que es usando los codigos ascii
	caso digito
	caso mayuscula
	caso minuscula
	caso caracter especial */

int main() {
	char caracter = 'H';
	int valor_ascii = (int)caracter;
	printf("El valor ascii es %d\n", valor_ascii);
	if (valor_ascii >= 48 && valor_ascii <= 57){
		printf("El valor %c es digito", caracter);
	}else{
		if(valor_ascii >= 65 && valor_ascii <= 90){
			printf("El valor %c es mayuscula", caracter);
	}else{
		if(valor_ascii >= 97 && valor_ascii <=122, caracter){
			printf("El valor %c es minuscula", caracter);
	}else{
		//if(valor_ascii >= 123 && valor_ascii <=255, caracter)
		//if(valor_ascii >= 32 && valor_ascii <= 47, caracter)
		//if(valor_ascii >= 58 && valor_ascii <= 64, caracter)
		//if(valor_ascii >= 91 && valor_ascii <= 96, caracter)
		printf("El valor %c es un caracter especial", caracter);
			}
		}
	}

	return 0;
}
