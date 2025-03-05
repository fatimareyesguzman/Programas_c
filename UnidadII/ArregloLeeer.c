//Programa que crea un arreglo a partir de un tamaño indicado


#include <stdio.h>
int main(){
    int size; 
    printf("Ingrese el tamaño del arreglo: \n");
    scanf ("%d", &size);
    
    int arregloNumeros[size]; //declarando tamaño del arreglo

    for(int i=0; i<size; i++){
        printf("Ingrese valor en posicion [%d]:\n",  i);
        int swap; 
        scanf("%d", &swap);
        arregloNumeros[i]=swap; //recuperar lo del teclado y lo asigna a una posición 
    }
    //imprimiendo los valores del arreglo
    for (int i=0; i<size; i++){
        printf("arreglo en[%d]=%d\n", i, arregloNumeros[i]);
    }
}

