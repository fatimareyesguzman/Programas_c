//Una union en C es similar a una estructura, pero todos los miembros comparten la misma ubicación de meoria.
//Esto significa que solo se puede almacenar un valor a la vez, o que la hace útil para ahorrrar memoria cuado se necesita
//Cada asignación sobreescribe el valor anterior, porque todos los dato comparten el mismo espacio enmemoria.
#include <stdio.h>
union Dato{
    int entero;
    float decimal;
    char texto [20];
};

int main (){
    union Dato variable;
    variable.entero=42;
    printf( "Entero: %d\n", variable.entero);

    variable.decimal=3.14;
    printf("Entero: %.2f\n", variable.entero);
    
    variable.texto, "Hola C";
     printf("Texto: %s\n", variable.texto);

}