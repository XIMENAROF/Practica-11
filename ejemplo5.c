*/
//FUNCION PRINCIPAL
int main () {
	
	//VARIABLES
   int arr[] = {5, 4, 3, 2, 1};  //declaracion de nuestro arreglo
   int *apArr;
   apArr = arr;
   
   //BLOQUE DE INSTRUCCIONES
      printf("int arr[] = {5, 4, 3, 2, 1};\n"); // se imprime todo el arreglo
      printf("apArr = &arr[0]\n");
      
      int x = *apArr;
      
      printf("x = *apArr \t -> x = %d\n", x);//x esta en la posicion 0 que es iguala a 5
      
	  x = *(apArr+1);// al sumar lo que hace es recorrer una posicion
	  
     printf("x = *(apArr+1) \t -> x = %d\n", x);
     
      x = *(apArr+2);//si se vueleve a sumar se vuelve a recorrer una posicion
      
      printf("x = *(apArr+1) \t -> x = %d\n", x);
      
      
return 0;
}
