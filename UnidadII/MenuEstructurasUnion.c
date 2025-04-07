#include <stdio.h>
#include <string.h>

#define FILAS 2
#define COLUMNAS 2

typedef struct {
    char nombre[50];
    int edad;
} Persona;

typedef struct {
    char nomproducto[50];
    float precio;
} Producto;

typedef union {
    Persona persona;
    Producto producto;
} Dato;

typedef struct {
    Dato valor;
    int tipo;
} Celda;

int main() {
    Celda matriz[FILAS][COLUMNAS];

for (int i = 0; i < FILAS; i++) {
    for (int j = 0; j < COLUMNAS; j++) {
            printf("Selecciona opción (1 para persona, 2 para producto) [%d][%d]: ", i, j);
            int opc;
            scanf("%d", &opc);

switch (opc) {
case 1:
    printf("Ingrese el nombre de la persona: ");
    scanf("%s", matriz[i][j].valor.persona.nombre);

    printf("Ingrese la edad de la persona: ");
    scanf("%d", &matriz[i][j].valor.persona.edad);

    matriz[i][j].tipo = 1; 
    break;

case 2:
    printf("Ingrese el nombre del producto: ");
    scanf("%s", matriz[i][j].valor.producto.nomproducto);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &matriz[i][j].valor.producto.precio);

    matriz[i][j].tipo = 2; 
    break;

    default:
    printf("Opción inválida\n");
    break;
    }}
    }

    for (int i = 0; i < FILAS; i++) {
     for (int j = 0; j < COLUMNAS; j++) {
    printf("Celda [%d][%d]: ", i, j);
        
        if (matriz[i][j].tipo == 1) {
        printf("Persona - Nombre: %s, Edad: %d\n",
            matriz[i][j].valor.persona.nombre,
            matriz[i][j].valor.persona.edad);
            } else if (matriz[i][j].tipo == 2) {
             printf("Producto - Nombre: %s, Precio: %.2f\n",
            matriz[i][j].valor.producto.nomproducto,
            matriz[i][j].valor.producto.precio);
            }
        }
    }

    return 0;
}
