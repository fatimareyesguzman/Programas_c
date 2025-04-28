#include <stdio.h>

void limpiarpantalla() {
    printf("\033[2J");
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}



void llenarMatriz(char *nombre, int matriz[3][3]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}



void imprimirmatriz(int x, int y, char *nombre, int matriz[3][3]) {
    gotoxy(x + 5, y);
    printf("%s", nombre);
    
    
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + 1 + i);     
        printf("*");
        
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j*4, y + 1 + i);
            printf("%3d", matriz[i][j]);
        }
        
        gotoxy(x + 15, y + 1 + i); 
        printf("*");
    }
}

void sumarMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void restaMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void escalarMatriz(int matriz1[3][3], int escalar, int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] * escalar;
        }
    }
}

int determinante(int MatrizA[3][3]) {
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

int main() {
    int escalar;
    printf("Dame el numero para escalar la matriz A: ");
    scanf("%d", &escalar);

    int matriza[3][3];
    int matrizb[3][3];
    int matrizsuma[3][3];
    int matrizresta[3][3];
    int matrizescalar[3][3];

    llenarMatriz("Matriz A", matriza);
    llenarMatriz("Matriz B", matrizb);

    limpiarpantalla();
    
    sumarMatriz(matriza, matrizb, matrizsuma);
    restaMatriz(matriza, matrizb, matrizresta);
    escalarMatriz(matriza, escalar, matrizescalar);
    

    imprimirmatriz(5, 2, "Matriz A", matriza);
    imprimirmatriz(30, 2, "Matriz B", matrizb);
    imprimirmatriz(55, 2, "A + B", matrizsuma);
    imprimirmatriz(80, 2, "A - B", matrizresta);
    imprimirmatriz(105, 2, "Escalar por A", matrizescalar);
    
    gotoxy(5, 10);
    int det = determinante(matriza);
    printf("Determinante de Matriz A: %d\n", det);
    

    gotoxy(0, 15);
    return 0;
}