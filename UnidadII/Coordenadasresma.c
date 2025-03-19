#include <stdio.h>
#include <string.h>
#include <math.h>
struct Coordenada{
    int x;
    int y;
struct Coordenada arreglo[4];
};
int main(){
    int opc;
    int i
    printf("%s\n", "Seleccione una opción:");
    printf("%s\n", "1.Cuadrado");
    printf("%s\n", "2. Triangulo");
    scanf("%d", &opc);
    
    switch(opc){
        case 1: //Cuadrado
        int posicion=i+1;
        for (int i=0; i<4; posicion);
        printf ("%s\n", "Ingrese coordenada x", i++);
        scanf("%d", arreglo[i].x);
        printf("%s%d\n", "Ingrese coordenada y", i++);
        scanf("%d", arreglo[i].y);
    }
    float ab=sqrt(
        pow(arreglo[1].x-arreglo[0].x,2)+
        pow (arreglo [1].y-arreglo[0].y,2));
    float bc=sqrt(
        pow(arreglo[2].x-arreglo[1].x,2)+
        pow (arreglo [2].y-arreglo[1].y,2));
    float dc=sqrt(
        pow(arreglo[3].x-arreglo[2].x,2)+
        pow (arreglo [3].y-arreglo[2].y,2));
    float ad=sqrt(
        pow(arreglo[3].x-arreglo[1].x,2)+ 
        pow (arreglo [3].y-arreglo[1].y,2));

    float perimetro=ab+bc+dc+ad;
    float area= dc*ad;
    printf("%s%f\n", "Perimetro toal:", perimetro);
    printf("%s%f\n", "Area:", area);
    break;


}}
