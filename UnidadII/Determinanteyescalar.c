#include <stdio.h>

void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void saveMatriz(int filas, int columnas, int matriz[filas][columnas])
{
    FILE *archivo = fopen("matriz.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return;
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            fprintf(archivo, "%d ", matriz[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
    printf("Matriz guardada en 'matriz.txt' exitosamente.\n");
}

void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void sumarMatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void escalarMatrizA(int filas, int columnas, int matriz1[filas][columnas], int matriz_escA[filas][columnas])
{
    int numero;
    printf("Ingrese el número por el que desea multiplicar la matriz A:\n");
    scanf("%d", &numero);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz_escA[i][j] = matriz1[i][j] * numero;
        }
    }
}

void escalarMatrizB(int filas, int columnas, int matriz2[filas][columnas], int matriz_escB[filas][columnas])
{
    int numero2;
    printf("Ingrese el número por el que desea multiplicar la matriz B:\n");
    scanf("%d", &numero2);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz_escB[i][j] = matriz2[i][j] * numero2;
        }
    }
}

int calculardeterminante(int MatrizA[3][3])
{
    int MatrizExp[3][5], determinante = 0;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MatrizExp[i][j] = MatrizA[i][j];
        }
        for (j = 3; j < 5; j++)
        {
            MatrizExp[i][j] = MatrizA[i][j - 3];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        determinante += MatrizExp[0][i] * MatrizExp[1][i + 1] * MatrizExp[2][i + 2];
    }

    for (int i = 0; i < 3; i++)
    {
        determinante -= MatrizExp[0][i + 2] * MatrizExp[1][i + 1] * MatrizExp[2][i];
    }

    return determinante;
}

int main()
{
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_b[filas][columnas];
    int matriz_r[filas][columnas];
    int matriz_escA[filas][columnas];
    int matriz_escB[filas][columnas];

    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    llenarMatriz("Matriz B", filas, columnas, matriz_b);

    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("Matriz B", filas, columnas, matriz_b);

    sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirMatriz("Suma A+B", filas, columnas, matriz_r);

    escalarMatrizA(filas, columnas, matriz_a, matriz_escA);
    imprimirMatriz("Matriz A multiplicada por el número ingresado:", filas, columnas, matriz_escA);

    escalarMatrizB(filas, columnas, matriz_b, matriz_escB);
    imprimirMatriz("Matriz B multiplicada por el número ingresado:", filas, columnas, matriz_escB);

    saveMatriz(filas, columnas, matriz_r);

    if (filas == 3 && columnas == 3)
    {
        int determinante = calculardeterminante(matriz_a);
        printf("El det de la matriz es: %d\n", determinante);
    }
    else
    {
        printf("No se puede calcular el determinante ");
    }

    return 0;
}
