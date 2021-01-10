#include <stdio.h>  //biblioteca
/*
Este programa genera un arreglo unidimensional de 5 elementos y
accede a cada elemento del arreglo a través de un ciclo for.
*/
int main (){ //FUNCION PRINCIPAL
#define TAMANO 5 //Se define para no tener problemas despues
//Variables
int lista[TAMANO] = {10, 8, 5, 8, 7};    //Sintaxis del arreglo unidimensional

//BLOQUE DE INSTRUCCIONES

 printf("\tLista\n");
    for (int indice = 0 ; indice < 5 ; indice++){  //Aqui se declara la variable indice
         printf("\nCalificación del alumno %d es %d", indice+1, lista[indice]);
}
printf("\n");
return 0;
}
