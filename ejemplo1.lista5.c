/*
Este programa genera un arreglo unidimensional de 5 elementos y los
accede a cada elemento del arreglo a través de un ciclo while.
*/
#include <stdio.h> //biblioteca

int main (){  //funcion principal

//VARIABLES
#define TAMANO 5  
int lista[TAMANO] = {10, 8, 5, 8, 7};  //SINTAXIS DEL ARREGLO UNIDIMENSIONAL
int indice = 0;   //CONTADOR

//Bloque de instrucciones
printf("\tLista\n");
  
  while (indice < 5 ){  //condicional
         printf("\nCalificacion del alumno %d es %d", indice+1, lista[indice]); //se agrega el +1 para que al mostrarlo en pantalla inicie en 1
         indice += 1; // análogo a indice = indice + 1;
}

printf("\n");
return 0;
} 

