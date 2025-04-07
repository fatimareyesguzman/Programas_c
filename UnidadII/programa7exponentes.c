#include <stdio.h>
#include <math.h>

void llenarmatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirmatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarmatrizpormatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizr[i][j] = 0;  
            for (int k = 0; k < columnas; k++) {  
                matrizr[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int filas, columnas, veces;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_r[filas][columnas];

    llenarmatriz("Matriz A", filas, columnas, matriz_a);
    imprimirmatriz("Matriz A", filas, columnas, matriz_a);

    printf("Ingrese el expontente al que desea elevar la matriz: ");
    scanf("%d", &veces);

    for (int i = 1; i <= veces; i++) {
        multiplicarmatrizpormatriz(filas, columnas, matriz_a, matriz_a, matriz_r);
        imprimirmatriz("Resultado", filas, columnas, matriz_r);

        for (int x = 0; x < filas; x++) {
            for (int y = 0; y < columnas; y++) {
                matriz_a[x][y] = matriz_r[x][y];
            }
        }
    }

    return 0;
}
