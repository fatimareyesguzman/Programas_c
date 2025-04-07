#include <stdio.h>
#include <math.h>

void llenarmatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
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

void multiplicarmatriz(int filasa, int columnasa, int columnasb, int matriza[filasa][columnasa], int matrizb[columnasb][columnasb], int matrizR[filasa][columnasb]) {

    for (int i = 0; i < filasa; i++) {
        for (int j = 0; j < columnasb; j++) {
            matrizR[i][j] = 0; 
            for (int k = 0; k < columnasa; k++) { 
                matrizR[i][j] += matriza[i][k] * matrizb[k][j];
            }
        }
    }
}

int main() {
    int filasa, columnasa, filasb, columnasb;

    printf("Ingrese el número de filas de la matriz A: ");
    scanf("%d", &filasa);
    printf("Ingrese el número de columnas de la matriz A: ");
    scanf("%d", &columnasa);


    printf("Ingrese el número de filas de la matriz B: ");
    scanf("%d", &filasb);
    printf("Ingrese el número de columnas de la matriz B: ");
    scanf("%d", &columnasb);

    int matriza[filasa][columnasa];
    int matrizb[filasb][columnasb];
    int matrizresult[filasa][columnasb]; 

    llenarmatriz("Matriz A", filasa, columnasa, matriza);
    llenarmatriz("Matriz B", filasb, columnasb, matrizb);



    imprimirmatriz("Matriz A", filasa, columnasa, matriza);
    imprimirmatriz("Matriz B", filasb, columnasb, matrizb);



    multiplicarmatriz(filasa, columnasa, columnasb, matriza, matrizb, matrizresult);
    imprimirmatriz("Resultado de A * B", filasa, columnasb, matrizresult);

    return 0;
}

