#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int m1[3][3], m2[3][3], m3[3][3], x=0, y=0;
	
	printf("Ingresar datos en M1");
for(x=0;x<3;x++)//filas
	for(y=0;y<3;y++)//columnas
	{
		printf("\nCoordenada [%d][%d]:",x,y);
		scanf("%d",&m1[x][y]);
	}
	system("cls");
	printf("Ingresar datos en M2");
for(x=0;x<3;x++)//filas
	for(y=0;y<3;y++)//columnas
	{
		printf("\nCoordenada [%d][%d]:",x,y);
		scanf("%d",&m2[x][y]);
		m3[x][y]=m1[x][y]+m2[x][y];
	}
	system("cls");
	printf("\n\nMatriz M1\n");
for(x=0;x<3;x++)//filas
	{
	for(y=0;y<3;y++)//columnas
	printf("%d",m1[x][y]);
	printf("\n");
	}
	printf("\n\nMatriz M2\n");
for(x=0;x<3;x++)//filas
	{
	for(y=0;y<3;y++)//columnas
	printf("%d",m2[x][y]);
	printf("\n");
	}
printf("\n\nMatriz M3\n");
for(x=0;x<3;x++)//filas
	{
	for(y=0;y<3;y++)//columnas
	printf("%d",m3[x][y]);
	printf("\n");
	}
	return 0;
}
