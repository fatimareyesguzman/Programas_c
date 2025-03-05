#include <stdio.h>
struct Direccion{
    char calle [50];
    int numero;
};
struct Persona {
    char nombre[50];
    struct Direccion domicilio; 
};
int main (){
    struct Persona personal={"Carlos Ramírez", {"Av.Reforma", 123}};
    printf("Nombre: %s\n", personal.nombre);
    printf("Domicilio: %s #%d\n", personal.domicilio.calle, personal.domicilio.numero);
    return 0;
}