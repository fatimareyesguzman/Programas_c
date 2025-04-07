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


void multiplicarMatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas])
{
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
matrizr[i][j] = matriz1[i][j] * matriz2[i][j];
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

int matriz_a[filas][columnas];
int matriz_b[filas][columnas];
int matriz_r[filas][columnas];


llenarMatriz("Matriz A", filas, columnas, matriz_a);
llenarMatriz("Matriz B", filas, columnas, matriz_b);

imprimirMatriz("Matriz A", filas, columnas, matriz_a);
imprimirMatriz("Matriz B", filas, columnas, matriz_b);

multiplicarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);
imprimirMatriz("Multiplicacion AxB", filas, columnas, matriz_r);

return 0;
}