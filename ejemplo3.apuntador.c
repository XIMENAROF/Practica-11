#include <stdio.h>  //Biblioteca
/*
Este programa crea un apuntador de tipo carácter.
*/
int main () {  //FUNCION PRINCIPAL
//VARIABLES
char *ap, c = 'a';  //Sintaxis de una apuntador
ap = &c;  //& su usa para guardar informacion como un scanf

//BLOQUE DE INSTRUCCIONES
printf("Caracter: %c\n",*ap); //Va a mostrar la informacion que guarda
printf("Codigo ASCII: %d\n",*ap); //es su equivalente en el codigo ascii
printf("Direccion de memoria: %d\n",ap); //al quitar el * se muestra la ubicacion de la memoria
return 0;
}
//omiti los acentos para que no se modificaran las palabras
