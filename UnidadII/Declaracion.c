#include <stdio.h>
int main(){
    
    int numeros[]={12, 20, 30, 20};
    int size=sizeof(numeros)/sizeof(numeros[0]); //Para saber el tamaño del arreglo 

    printf("Tamaño: %d\n", size);
    for(int i=0; i<size; i++){
        printf("numeros [%d]=%d\n", i, numeros[i]);
    }
}
