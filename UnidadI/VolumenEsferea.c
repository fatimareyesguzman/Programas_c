#include <stdio.h>
int main (){
    printf ("%s\n", "Programa para calcular el área y el volumen de una esfera");
    
    float pi=3.1416;

    int radio;
    printf("%s", "Dame el radio ");
    scanf("%d", &radio);

    float area=(4*pi)*(radio*radio);
    float volumen=((4*pi)*(radio*radio*radio))/3; 

    printf("%s%.2f\n", "Tu area es:", area);
    printf("%s%.2f\n", "Tu volumen es:", volumen);
    

    }