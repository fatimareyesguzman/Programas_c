#include <stdio.h>

void llenarmatriz( int filas, int columnas, int matriz[filas][columnas]) {

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirmatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz dada:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void transpuesta(int filas, int columnas, int matriz[filas][columnas], int matriztrans[columnas][filas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriztrans[j][i] = matriz[i][j]; 
        }
    }
}

int main() {
    int filas, columnas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int matriztrans[columnas][filas];  

    llenarmatriz( filas, columnas, matriz);

    imprimirmatriz("Matriz", filas, columnas, matriz);

    transpuesta(filas, columnas, matriz, matriztrans);

    imprimirmatriz("Matriz transpuesta", columnas, filas, matriztrans);

    return 0;
}
