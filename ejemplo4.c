#include<stdio.h> //BIBLIOTECA
/*
Este programa accede a las localidades de memoria de distintas variables a
través de un apuntador.
*/
int main () {  //Funcion principal

//VARIABLES
int a = 5;
int  b = 10;
int c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}; //Sintaxis de un arreglo
int *apEnt; //sintaxis de un apuntador **ap  es el apuntador y Ent es el nombre del apuntador
apEnt = &a;

//BLOQUE DE INSTRUCCIONES
printf("a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n"); //se imprimen todas las variables tal cual estan
printf("apEnt = &a\n"); //nos indica que apEnt guardara lo que este en a
b = *apEnt; //b va a guardar el valor del apuntador
printf("b = *apEnt \t-> b = %i\n", b); 
b = *apEnt +1;// Va modificar el apuntador
printf("b = *apEnt + 1 \t-> b = %i\n", b);
*apEnt = 0; //Va a modificar el apuntador
printf("*apEnt = 0 \t-> a = %i\n", a); //va a imprimer el valor de a que se modifico anteriormente con el apuntador
apEnt = &c[0];//modifica la ubicacion del apuntador
printf("apEnt = &c[0] \t-> apEnt = %i\n", *apEnt);//se imprime el valor que gusrda el apuntador
return 0;
}
