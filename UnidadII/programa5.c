#include <stdio.h>

typedef struct {
    int numerador;
    int denominador;
} Fraccion;

void llenarmatriz(char *nombre, int filas, int columnas, Fraccion matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posición [%d][%d] (numerador y denominador): ", i, j);
            scanf("%d%d", &matriz[i][j].numerador, &matriz[i][j].denominador);
        }
    }
}

void imprimirmatriz(char *nombre, int filas, int columnas, Fraccion matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d/%-4d ", matriz[i][j].numerador, matriz[i][j].denominador);
        }
        printf("\n");
    }
}

void multiplicarmatrices(int filas, int columnas, Fraccion matriz1[filas][columnas], Fraccion matriz2[filas][columnas], Fraccion matrizr[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizr[i][j].numerador = matriz1[i][j].numerador * matriz2[i][j].numerador;
            matrizr[i][j].denominador = matriz1[i][j].denominador * matriz2[i][j].denominador;
        }
    }
}

int main()
{
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    Fraccion matriz_a[filas][columnas];
    Fraccion matriz_b[filas][columnas];  
    Fraccion matriz_r[filas][columnas];

    llenarmatriz("Matriz A", filas, columnas, matriz_a);
    llenarmatriz("Matriz B", filas, columnas, matriz_b);

    imprimirmatriz("Matriz A", filas, columnas, matriz_a);
    imprimirmatriz("Matriz B", filas, columnas, matriz_b);

    multiplicarmatrices(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirmatriz("Resultado A * B", filas, columnas, matriz_r);

    return 0;
}
