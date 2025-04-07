#include <stdio.h>
#include <string.h>

#define FILAS 3
#define COLUMNAS 2  

struct maquillaje {
    char nombre[20];
    int cantidad;
    int precio;
};

int main() {
    char matriz[FILAS][COLUMNAS][50];  
    struct maquillaje datos[FILAS];

    for (int i = 0; i < FILAS; i++) {
        printf("Ingrese los datos del maquillaje\n");

        printf("ID del maquillaje: ");
        scanf("%s", matriz[i][0]);  

        printf("Tipo de maquillaje: ");
        scanf("%s", matriz[i][1]); 

        printf("Nombre del producto: ");
        scanf("%s", datos[i].nombre);

        printf("Cantidad: ");
        scanf("%d", &datos[i].cantidad);

        printf("Precio: ");
        scanf("%d", &datos[i].precio);
    }

    printf("\n%-15s| %-15s| %-15s| %-15s| %-15s\n", "ID", "Tipo de makeup", "Nombre", "Cantidad", "Precio");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < FILAS; i++) {
        printf("%-15s| %-15s| %-15s| %-15d| %-15d\n", 
               matriz[i][0], matriz[i][1], 
               datos[i].nombre, 
               datos[i].cantidad, 
               datos[i].precio);
    }

    return 0;
}
