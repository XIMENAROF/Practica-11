/* Este programa genera un arreglo de dos dimensiones (arreglo
multidimensional) y accede a sus elementos a través de un apuntador utilizando
un ciclo for.
*/


//Funcion principal
int main(){
	//variables
   int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //arreglo 3x3
   int i, cont=0, *ap;  //declarando variables
   ap= matriz;
   
   //Bloque de instrucciones
   printf("Imprimir Matriz\n ",*ap);
      for (i=0 ; i<9 ; i++){ 
        if (cont == 3){
           printf("\n");
             cont = 0;
}
   printf("%d\t",*(ap+i));
   cont++;
}
printf("\n");
return 0;
}
