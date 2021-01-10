#include <stdio.h>  //Biblioteca
/*
Este programa muestra el manejo de cadenas en lenguaje C.
*/
//Funcion principal
int main(){
	//VARIABLES
    char palabra[20];//arreglo de caracter, se le va un numero maximo de caracteres que puedes ingresar
    int i=0; //Indice
    
    //Bloque de instrucciones
     printf("Ingrese una palabra: ");
     scanf("%s", palabra); //se va aguarad en el arreglo
     printf("La palabra ingresada es: %s\n", palabra);
        for (i = 0 ; i < 20 ; i++){  //se guarda caracter por caracter
           printf("%c\n", palabra[i]);//es un contador 
}
return 0;
}
