#include <stdio.h>
struct Coordenadas{
    int latitud; 
    int longitud;
};
struct Direccion{
    char colonia [50];
struct Coordenadas coorde; 
};
struct Personas{
    char nombre [50];
    struct Direccion direccion;
};
int main (){
    struct Personas persona;
    
printf ("Ingrese el nombre de la persona:");
scanf ("%s", persona.nombre);

printf ("Ingrese la colonia:");
scanf ("%s", persona.direccion.colonia);

printf ("Ingrese latitud:");
scanf ("%d", &persona.direccion.coorde.latitud);

printf("Ingrese longitud:");
scanf ("%d",&persona.direccion.coorde.longitud);

//Para imprimir valores registrados
printf("\nInformación de la persona:\n");
printf("Nombre: %s\n ", persona.nombre);
printf("Colonia: %s\n ", persona.direccion.colonia);
printf("Latitud: %d\n", persona.direccion.coorde.latitud);
printf("Longitud:%d\n", persona.direccion.coorde.longitud);

}



