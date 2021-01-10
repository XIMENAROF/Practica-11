#include <stdio.h> //biblioteca
/*
Este programa genera un arreglo unidimensional de 5 elementos y
accede a cada elemento del arreglo a través de un apuntador
utilizando un ciclo for.
*/
   int main (){//Funcion principal
   #define TAMANO 5 
   //VARIABLES
   int lista[TAMANO] = {10, 8, 5, 8, 7}; //sintaxis del arreglo
   int *ap = lista; //se utiliza de esta manera para no tener que escribir elemento por elemento 
   
   //BLOQUE DE ISNTRUCCUONES
    printf("\tLista\n");
        for (int indice = 0 ; indice < 5 ; indice++){ //utiliza un ciclo for 
            printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
}
    printf("\n");
    return 0;
}
