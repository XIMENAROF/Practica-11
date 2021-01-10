#include<stdio.h>  //biblioteca

/* Este programa genera un arreglo de dos dimensiones (arreglo
multidimensional) y accede a sus elementos a través de dos ciclos
for, uno anidado dentro de otro.
*/

int main(){ //Funcion principal
   //Variables locales
   int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};  //arreglo bidimensional
    int i, j;  //i y j son indices del arreglo, 
   //Bloque de instrucciones
   printf("Imprimir Matriz\n");
       for (i=0 ; i<3 ; i++){  //for anidado
         for (j=0 ; j<3 ; j++){ //limite es el tamaño del arreglo que es igual a 3
            printf("%d, ",matriz[i][j]);  //va a imprimir toda la matriz
}
            printf("\n");
}

return 0;
}
