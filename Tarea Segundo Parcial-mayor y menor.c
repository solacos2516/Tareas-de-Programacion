#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_array_length(int *valores){
    int lenght = 0;
    while(valores[lenght]){
        lenght++;
    }
    return lenght - 1;
}

 

int menor(int valor1, int valor2){
	if(valor1< valor2){
		return valor1;
	}else
    return valor2;
}

 

int mayor(int valor1, int valor2){
    return valor1 > valor2 ? valor1 : valor2;
}

 int suma(int valor1, int valor2){
 	return valor1 + valor2;
 }

int reduccion(int *valores, int cantidad_de_valores, int (*funcion_comparadora)(int,int)){
    int indice = 0;
    int valor_final = valores[0];
    for(indice =0; indice < cantidad_de_valores; indice++){
       valor_final = funcion_comparadora(valor_final, valores[indice]);
    }
    return valor_final;

}

int main(){
    int valores[] = {1,2,3,4,5,6,7,8,9,20,0,21,-300,100};
    int cantidad = 14;//get_array_length(valores);
    int minimo = reduccion(valores, cantidad, menor);
    int maximo = reduccion(valores, cantidad, mayor);
    int sumatoria = reduccion(valores, cantidad, suma);
	printf("cantidad: %d \nminimo: %d \nmaximo: %d", cantidad, minimo, maximo);

	return 0;
}
