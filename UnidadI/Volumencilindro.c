#include <stdio.h>
int main(){
     printf ("%s\n", "Programa para calcular el área y el volumen de un cilindro");

    float pi=3.1416;

    int radio;
    printf("%s", "Dame el radio:");
    scanf("%d", &radio);

    int altura; 
    printf("%s", "Dame la altura:");
    scanf("%d", &radio);

    float area= (2*pi*radio*altura)+((2*pi)*(radio*radio));
    float volumen= (pi* (radio*radio)* altura);

    printf ("%s%.2f\n", "Tu area es:", area);
    printf ("%s%.2f\n", "Tu volumnen es:", volumen);
}

