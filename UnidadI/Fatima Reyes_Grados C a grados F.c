#include <stdio.h> /*Librerias*/
/*Imprime la tabla Fahrenheit-celsius
para fahr=0, 20,...,300*/
int main( ) /*Metodo principal*/
{
    int fahr, celsius; 
    int lower, upper, step;
    lower= 0;        /*Limite inferior dela tabla de temperatura*/
    upper=300;      /*Limite superiro*/
    step=20;       /*tamaño del incremeto*/
    fahr = lower;  /*Se dice que la variable fahr es igual a lower 0=0*/
    while (fahr<=upper) {   /*Es la condición de que los fahrenheit deben ser menor o igual a 300*/
        celsius= 5*(fahr-32)/9;    /*Se hace la operacion para obtener fahrenheit*/
        printf("%d\t%d\n",fahr, celsius);     /*Se imprime ambas fahr y su igualdad en celsius */
        fahr=fahr+step;       /*Es nuestro contador*/

    }

}
