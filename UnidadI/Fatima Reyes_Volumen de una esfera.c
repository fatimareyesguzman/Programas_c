#include <stdio.h> /*Libreria utilizada*/
int main(){  /*Metodo principal*/
    /*Clculo del volumen de una esferea*/
    float r; /*Definimos variable r*/
    double pi;  /*Definimos variable r*/
    double V; /*Definimos variable r*/
    r=4; /*Asignamos valor a la variable r=4*/
    pi=3.14156; /*Asignamos valor a la variable pi=3.141516*/
   
    double R=r*r*r; /*Establecí variable R para calcular r al cubo*/
    double z=(4*pi)/3; /*Establecí variable z para calcular el 3/4 de pi*/
    V=z*R; /*Realicé la operación para obtener el volumen final */
    printf("Tu volumen es:%.2f\n", V); /*Imprimi el resultado que es V, utilizando el %.2f para que me imprima mi variable float con dos decimales*/
    return 0; /*El programa finalizó*/
}