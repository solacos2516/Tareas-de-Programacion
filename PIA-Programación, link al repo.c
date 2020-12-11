#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 	FILE *fp;
 	int i ;
 	char car;
 		
 	fp = fopen("Caracter.txt", "w+" ); 
	i = 1;
 	while( i <= 30 ) 
                      {  
                          printf("\n Escriba el carácter:   ");
                          car = getchar() ;
	     fputc( car, fp );
 	     i = i + 1 ;                    
 	}
 	fclose (fp);
 	
 	return 0;
}

Profe aquí está el link de mi pia, por si acaso no lo puede ver, no pude hacer la carpeta
https://github.com/solacos2516/PIA.git
