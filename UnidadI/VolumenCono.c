#include<stdio.h>
#include <math.h>
int main (){
    float pi=3.1416;
    int radio; 
    printf("%s", "Dame el radio:");
    scanf("%d", &radio);

    int altura; 
    printf("%s", "Dame la altura:");
    scanf("%d", &altura);

    double g= sqrt((radio*radio)+(altura*altura));
    float areal=(pi*radio*g);
    float areab=pi*(radio*radio);
    float areat= areal+areab;
    float volumen= (pi*(radio*radio)*altura)/3;

    printf("%s%.2f\n", "Su area lateral es:", areal);
    printf("%s%.2f\n", "Su area base es:", areab);
    printf("%s%.2f\n", "Su area total es:", areat);
    printf("%s%.2f\n", "Su volumen es: ", volumen);
}
