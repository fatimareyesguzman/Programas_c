#include <stdio.h>
int size;
struct Usuario
{
    char nombre[50];
    int edad;
    char correo[50];
    int telefono;
    int matricula;
    char domicilio[50];
    char pais[50];
    char licenciatura[50];
};
int main()
{
    printf("Ingrese el tamaño del arreglo: \n");
    scanf("%d", &size);
    struct Usuario usuarios[size];

    for (int i = 0; i < size; i++)
    {
        struct Usuario usuario1;
        printf("Ingrese su nombre;\n");
        scanf("%s", usuario1.nombre);

        printf("Ingrese su edad:\n");
        scanf("%d", &usuario1.edad);

        printf("Ingrese su correo:\n");
        scanf("%s", usuario1.correo);

        printf("Ingrese su telefono:");
        scanf("%d", &usuario1.telefono);

        printf("Ingrese su matricula:");
        scanf("%d", &usuario1.matricula);

        printf("Ingrese su domicilio:");
        scanf("%s", usuario1.domicilio);

        printf("Ingrese su pais:");
        scanf("%s", usuario1.pais);

        printf("Ingrese su licenciatura:");
        scanf("%s", usuario1.licenciatura);
        usuarios[i] = usuario1;
    }
 
    for (int i = 0; i < size; i++)
    {
        printf("\nUsuario %d:\n", i + 1);
        printf("Nombre: %s\n", usuarios[i].nombre);
        printf("Edad: %d\n", usuarios[i].edad);
        printf("Correo: %s\n", usuarios[i].correo);
        printf("Telefono: %d\n", usuarios[i].telefono);
        printf("Matricula: %d\n", usuarios[i].matricula);
        printf("Domicilio: %s\n", usuarios[i].domicilio);
        printf("Pais: %s\n", usuarios[i].pais);
        printf("Licenciatura: %s\n", usuarios[i].licenciatura);
    }

    return 0;
}