#include<stdio.h>
//caso caracter
//caso mayusculas
//caso minuscula

char ver(char , int);

int main (int argc, char **argv ) {
// char caracter = 'M' ;
int valor_ascii = (int) argv;

printf("El valor ascii es %d\n", valor_ascii) ;
printf(" %c ", ver(argv[0][0],valor_ascii));

/* if(valor_ascii >= 48 && valor_ascii <= 57){
printf("El valor %c es digito ", caracter) ; //esta linea calcula que es un digito
}else {
if(valor_ascii >= 65 && valor_ascii <=90)// esta calcula si es una mayuscula
{
printf("El valor %c es mayuscula", caracter);//
}else{
if (valor_ascii >= 97 && valor_ascii <= 122 ){ //esta calcula si es minuscula
printf("El valor %c es minuscula", caracter);
}else{
printf("Es valor %c es caracter especial", caracter);//esta calcula si es caracter especial.
}
}
} */
return 0;
}

	char ver(char argv, int valor_ascii){
		if(valor_ascii >= 48 && valor_ascii <= 57){
	return printf("El valor %c es digito ", argv) ;
		}else {
		if(valor_ascii >= 65 && valor_ascii <=90)
	{
	return printf("El valor %c es mayuscula", argv);
	}else{
		if (valor_ascii >= 97 && valor_ascii <= 122 ){ 
	return printf("El valor %c es minuscula", argv);
	}else{
	return printf("Es valor %c es caracter especial", argv);
			}
		}
	}
}
