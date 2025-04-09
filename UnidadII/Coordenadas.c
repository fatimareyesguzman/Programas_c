#include <stdio.h> //Incluimos librería stdio
#include <math.h> //Incluimos libreria math para que se pueda hacer la raiz cuadrada
#include <string.h> //Incluimos string para los decimales

struct Puntos {  //Establecimos neuestra estructura
    float x;     //Las variables que va a incluir nuestro programa x en los puntos 
    float y;     //Varibale y en cada punto
};               //Se cierra la especificación de variables

int main() {     //Métod principal
    struct Puntos p1, p2, p3, p4;    //Establecemos el arreglo que sera puntos, en el cuál habran 4 por cada cuadrante
    float d12, d23, d34, d41, d13; //Establecemos las distancias entre los puntos con d12, d23 etc
    float perimetro, area; //Establecemos el perimetro y el area para cada caso (posteriormente se verá)
    
    
    printf("Ingrese valor de x para el punto en el cuadrante 1 : "); //Pedimos el valor de x en el cuadrante 1 al usuario
    scanf("%f", &p1.x);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    printf("Ingrese valor de y para el punto en el cuadrante 1: "); //Pedimos el valor de y en el cuadrante 1 al usuario
    scanf("%f", &p1.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes


    printf("Ingrese valor de x para el punto  en el cuadrante 2: "); //Pedimos el valor de x en el cuadrante 2 al usuario
    scanf("%f", &p2.x);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    printf("Ingrese valor de y para el punto en el cuadrante 2: "); //Pedimos el valor de y en el cuadrante 2 al usuario
    scanf("%f", &p2.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes


    printf("Ingrese valor de x para el punto en el cuadrante 3: "); //Pedimos el valor de x en el cuadrante 3 al usuario
    scanf("%f", &p3.x);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    printf("Ingrese valor de y para el punto en el cuadrante 3 : "); //Pedimos el valor de y en el cuadrante 3 al usuario
    scanf("%f", &p3.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes

    printf("Ingrese valor de x para el punto en el cuadrante 4 : "); //Pedimos el valor de x en el cuadrante 4 al usuario
    scanf("%f", &p4.x);                                               //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    printf("Ingrese valor de y para el punto en el cuadrante 4 : ");//Pedimos el valor de y en el cuadrante 4 al usuario
    scanf("%f", &p4.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes


    d12= sqrt(((p2.x-p1.x)* (p2.x-p1.x))+ ((p2.y-p1.y)*(p2.y-p1.y))); //Con base en una formula ivnestigada se calcula la distancia entre el punto 1 y el 2
    d23=sqrt(((p3.x-p2.x)* (p3.x-p2.x))+ ((p3.y-p2.y)*(p3.y-p2.y))); //Con base en una formula ivnestigada se calcula la distancia entre el punto 2 y el 3
    d34=sqrt(((p4.x-p3.x)* (p4.x-p3.x))+ ((p4.y-p3.y)*(p4.y-p3.y)));//Con base en una formula ivnestigada se calcula la distancia entre el punto 3 y el 4
    d41=sqrt(((p1.x-p4.x)* (p1.x-p4.x))+ ((p1.y-p4.y)*(p1.y-p4.y))); //Con base en una formula ivnestigada se calcula la distancia entre el punto 4 y el 1
    d13=sqrt(((p3.x-p1.x)* (p3.x-p1.x))+ ((p3.y-p1.y)*(p3.y-p1.y))); //Es la distancaia de la línea para formar el triángulo 

int opc;             //Comenzamos con el menú para calcular el area y el perimetro de un triángulo o de un cuadrado
    printf("%s\n", "Seleccione una opción:\n"); //Pedimos al usuario que nos de una opción
    printf("%s\n", "1.-Cuadrado\n"); //Damos la opción de hacer un cuadrado
    printf("%s\n", "2.-Triángulo\n"); //Damos la opción de hacer un triángulo
    scanf("%d", &opc); //Leemos la opción que el usuario brindó
    switch(opc){  //Comenzamos estableciendo qué se hace en cada caso
    
    case 1: //En el caso uno se hará
    printf("Ha seleccionado cuadrado\n"); //Decimos que se ha seleccionado el cuadrado
    perimetro = d12+d23+d34+d41; //Hacemos la operación para calcular el perímetro del cuadrado
    area = d12 * d23; //Hacemos la operación para calcular el área del cuadrado, suponiendo como se dijo en clase que el usuario da los valores correctos
    printf("\nTu perímetro es: %.2f", perimetro); //Imprimimos el valor del perimetro
    printf("\nTu área es: %.2f", area); //Imprimimos el valor del area
    break;     //cerramos el caso para que no existan errores

    case 2:    //comenzamos ocn el segundo caso
    printf("Ha seleccionado triángulo\n"); //Decimos que se ha seleccionado el triangulo
    perimetro = d12+d23+d13;     //Calculamos el perimetro del triángulo sumando sus lados
    area = ((sqrt(3))/4) * (d12*d12);         //Calculamos el área suponiendo que se trata de un triángulo equilátero con la formula investigada
    printf("\nTu perímetro es: %.2f", perimetro); //Imprimimos el valor del perimetro
    printf("\nTu área es: %.2f", area);  //Imprimirmos el valor del área


    break;    //Cerramos el caso 2
       default: //Ponemos una opción default
            printf("%s\n", "\nOpción inválida\n"); //Y en caso de que no se seleccione ninguna opción se imprimira opción inválida
        break; //se cierra el default
    return 0; //Return 0 del for para que no quiebre el código
}
}