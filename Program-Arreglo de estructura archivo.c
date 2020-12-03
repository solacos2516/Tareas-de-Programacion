#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct datos{
	char matricula[30];
	int edad;
	int primer_parcial;
	int segundo_parcial;
	int pia;
	float calificacion_final;
}alumnos[3];

void main(/*struct datos e[x]*/) {
	int i;
	for(i = 0; i < 3; i++){
		printf("Ingresa la Matricula del Alumno #%d:",(i+1));
		gets(alumnos[i].matricula);
		fflush(stdin);
		printf("Ingresa la Edad del Alumno #%d:", (i+1));
		scanf("%d", &alumnos[i].edad);
		printf("Ingresa el Primer Parcial del Alumno #%d:", (i+1));
		scanf("%d", &alumnos[i].primer_parcial);
		printf("Ingresa el Segundo Parcial del Alumno #%d:", (i+1));
		scanf("%d", &alumnos[i].segundo_parcial);
		printf("Ingresa la Calificacion del Pia del Alumno #%d:", (i+1));
		scanf("%d", &alumnos[i].pia);
		printf("Ingresa la Calificacion Final del Alumno #%d:", (i+1));
		scanf("%f", &alumnos[i].calificacion_final);
		fflush(stdin);
	}
	
//void mostrar_datos(/*struct datos e[x], FILE *fp*/){
	printf("Mostrando los datos de los Alumnos\n");
	for(i = 0; i < 3; i++){
		printf(" \n");
		printf("Alumno #%d\n", (i+1));
		printf("Matricula: %s\n", alumnos[i].matricula);
		printf("Edad: %d\n", alumnos[i].edad);
		printf("Primer Parcial: %d\n", alumnos[i].primer_parcial);
		printf("Segundo Parcial: %d\n", alumnos[i].segundo_parcial);
		printf("Calificacion del Pia: %d\n", alumnos[i].pia);
		printf("Calificacion final: %.2f\n", alumnos[i].calificacion_final);
	}
}
	
	FILE *fp;
	fp = fopen("C:/Users/Hp/Documents/Calificaciones.csv", "w+");
	struct datos;
	//main(datos);
	//mostrar_datos (datos, fp);
	close(fp);
	printf("\nArchivo guardado");
	return 0;
}
/*Maestro una disculpa, primero hice el arreglo de estructura y luego no supe como impriirlo en el FILE, se generaba un excel pero no se ponían los datos:(*/
