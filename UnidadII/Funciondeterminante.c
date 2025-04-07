#include <stdio.h>



void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {

 printf("Nombre de la matriz: %s\n", nombre);

 for (int i = 0; i < filas; i++) {

 for (int j = 0; j < columnas; j++) {

 printf("Ingrese el valor para la posición [%d][%d]: ", i, j);

 scanf("%d", &matriz[i][j]);

 }

 }

}



void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {

 FILE *archivo = fopen("../matriz.txt", "w");

 if (archivo == NULL) {

 printf("Error al abrir el archivo.\n");

 return;

 }

 

 for (int i = 0; i < filas; i++) {

 for (int j = 0; j < columnas; j++) {

 fprintf(archivo, "%d ", matriz[i][j]);

 }

 fprintf(archivo, "\n");

 }

 

 fclose(archivo);

 printf("Matriz guardada en 'matriz.txt' exitosamente.\n");

}



void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {

 printf("Nombre de la matriz: %s\n", nombre);

 printf("Matriz ingresada:\n");

 for (int i = 0; i < filas; i++) {

 for (int j = 0; j < columnas; j++) {

 printf("%4d ", matriz[i][j]);

 }

 printf("\n");

 }

}



void sumarMatriz(int filas, int columnas, 

 int matriz1[filas][columnas], int matriz2[filas][columnas], 

 int matrizr[filas][columnas]){

 for (int i = 0 ; i < filas; i++){

 for (int j = 0 ; j < columnas; j++){

 matrizr[i][j] = matriz1[i][j] + matriz2[i][j];

 }

 }

}


void escalarMatrizA(int filas, int columnas, int num1,

    int matriz1[filas][columnas],
   
    int matriz_escA[filas][columnas]){

    printf("ingresa el numero por el que desea multiplicar la matriz A:\n");
    scanf("%d",&num1);
   
    for (int i = 0 ; i < filas; i++){
   
    for (int j = 0 ; j < columnas; j++){
   
    matriz_escA[i][j] = matriz1[i][j] *num1;
   
    }
   
    }
   
   }
   void escalarMatrizB(int filas, int columnas, int num2,

    int matriz2[filas][columnas],
   
    int matriz_escB[filas][columnas]){

    printf("ingresa el numero por el que desea multiplicar la matriz B:\n");
    scanf("%d",&num2);

    
   
    for (int i = 0 ; i < filas; i++){
   
    for (int j = 0 ; j < columnas; j++){
   
    matriz_escB[i][j] = matriz2[i][j] *num2;
   
    }
   
    }
   
   }


//Realizar el método para determinante 



int main() {

 int filas, columnas,num1,num2;

 

 printf("Ingrese el numero de filas: ");

 scanf("%d", &filas);

 printf("Ingrese el numero de columnas: ");

 scanf("%d", &columnas);



 

 int matriz_a[filas][columnas];

 int matriz_b[filas][columnas];

 int matriz_r[filas][columnas];

 int matriz_escalarA[filas][columnas];

 int matriz_escalarB[filas][columnas];



 llenarMatriz("Matriz A", filas, columnas, matriz_a);

 llenarMatriz("Matriz B", filas, columnas, matriz_b);

 imprimirMatriz("Matriz A", filas, columnas, matriz_a);

 imprimirMatriz("MAtriz B", filas, columnas, matriz_b);

 sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);

 imprimirMatriz("SUMA A-B", filas, columnas, matriz_r);

 escalarMatrizA(filas,columnas,num1, matriz_a,matriz_escalarA);

 imprimirMatriz("Matriz A multplicada por el numero ingresado:",filas,columnas,matriz_escalarA);

 escalarMatrizB(filas,columnas,num2,matriz_b,matriz_escalarB);

 imprimirMatriz("matriz B multiplicada por el numero ingresado:",filas,columnas,matriz_escalarB);



 saveMatriz(filas, columnas, matriz_r); 



 return 0;

}