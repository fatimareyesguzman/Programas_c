#include <stdio.h>

// estructura base de las fracciones a/b
typedef struct {
    int num;
    int den;
} Fraccion;

// funcion del maximo comun divisor 
int mcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// funcion con la que se simplifica la fraccion
Fraccion simplificar(Fraccion f) {
    if (f.den == 0) {
        printf("Error: división entre cero.\n");
        f.num = 0;
        f.den = 1;
        return f;
    }
    int divisor = mcd(f.num, f.den);
    f.num /= divisor;
    f.den /= divisor;
    if (f.den < 0) { // aseguramos que el denominador sea positivo
        f.num = -f.num;
        f.den = -f.den;
    }
    return f;
}

// operaciones basicas con las fracciones
Fraccion sumar(Fraccion a, Fraccion b) {
    Fraccion res = {a.num * b.den + b.num * a.den, a.den * b.den};
    return simplificar(res);
}

Fraccion restar(Fraccion a, Fraccion b) {
    Fraccion res = {a.num * b.den - b.num * a.den, a.den * b.den};
    return simplificar(res);
}

Fraccion multiplicar(Fraccion a, Fraccion b) {
    Fraccion res = {a.num * b.num, a.den * b.den};
    return simplificar(res);
}

Fraccion dividir(Fraccion a, Fraccion b) {
    if (b.num == 0) {
        printf("Error: intento de dividir por cero.\n");
        return (Fraccion){0, 1};
    }
    Fraccion res = {a.num * b.den, a.den * b.num};
    return simplificar(res);
}

// funcion para leer y mostrar resultados. 
void leerMatriz(Fraccion matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++) {
            int num, den;
            printf("Elemento [%d][%d] (a/b): ", i + 1, j + 1);
            while (1) {
                if (scanf("%d/%d", &num, &den) != 2 || den == 0) {
                    printf("Error: entrada inválida. Por favor ingresa en el formato a/b (denominador no puede ser cero).\n");
                    while(getchar() != '\n'); // Limpiar el buffer de entrada
                } else {
                    matriz[i][j].num = num;
                    matriz[i][j].den = den;
                    matriz[i][j] = simplificar(matriz[i][j]);
                    break; // Salir del bucle si la entrada es válida
                }
            }
        }
}


void imprimirMatriz(Fraccion matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d/%d\t", matriz[i][j].num, matriz[i][j].den);
        }
        printf("\n");
    }
}

// Transpuesta
void transpuesta(Fraccion matriz[][10], Fraccion transpuesta[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            transpuesta[j][i] = matriz[i][j];
}

// Traza
Fraccion traza(Fraccion matriz[][10], int n) {
    Fraccion t = {0, 1};
    for (int i = 0; i < n; i++) {
        t = sumar(t, matriz[i][i]);
    }
    return t;
}

// Determinante con método de cofactores
Fraccion determinante(Fraccion matriz[][10], int n) {
    if (n == 1) return matriz[0][0];
    if (n == 2) return restar(multiplicar(matriz[0][0], matriz[1][1]), multiplicar(matriz[0][1], matriz[1][0]));

    Fraccion det = {0, 1};
    Fraccion submatriz[10][10];

    for (int j = 0; j < n; j++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int k = 0; k < n; k++) {
                if (k == j) continue;
                submatriz[subi][subj] = matriz[i][k];
                subj++;
            }
            subi++;
        }
        Fraccion cofactor = multiplicar(matriz[0][j], determinante(submatriz, n - 1));
        if (j % 2 == 1) cofactor = multiplicar(cofactor, (Fraccion) {-1, 1});
        det = sumar(det, cofactor);
    }
    return det;
}

// Adjunta
void adjunta(Fraccion matriz[][10], Fraccion adj[][10], int n) {
    Fraccion submatriz[10][10];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int subi = 0;
            for (int x = 0; x < n; x++) {
                if (x == i) continue;
                int subj = 0;
                for (int y = 0; y < n; y++) {
                    if (y == j) continue;
                    submatriz[subi][subj] = matriz[x][y];
                    subj++;
                }
                subi++;
            }
            Fraccion cofactor = determinante(submatriz, n - 1);
            if ((i + j) % 2 == 1) cofactor = multiplicar(cofactor, (Fraccion) {-1, 1});
            adj[j][i] = cofactor;
        }
}

// Inversa
void inversa(Fraccion matriz[][10], Fraccion inv[][10], int n) {
    Fraccion det = determinante(matriz, n);
    if (det.num == 0) {
        printf("\nError: la matriz no tiene inversa (det = 0).\n");
        return;
    }
    Fraccion adj[10][10];
    adjunta(matriz, adj, n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            inv[i][j] = dividir(adj[i][j], det);
}

// multiplicacion
void multiplicarMatrices(Fraccion A[][10], Fraccion B[][10], Fraccion C[][10], int f1, int c1, int c2) {
    for (int i = 0; i < f1; i++)
        for (int j = 0; j < c2; j++) {
            C[i][j] = (Fraccion) {0, 1};
            for (int k = 0; k < c1; k++)
                C[i][j] = sumar(C[i][j], multiplicar(A[i][k], B[k][j]));
        }
}

// suma y resta 
void operarMatrices(Fraccion A[][10], Fraccion B[][10], Fraccion C[][10], int f, int c, int op) {
    for (int i = 0; i < f; i++)
        for (int j = 0; j < c; j++)
            C[i][j] = (op == 1) ? sumar(A[i][j], B[i][j]) : restar(A[i][j], B[i][j]);
}

// funcion para calcular el rango de la matriz
int rango(Fraccion matriz[][10], int n) {
    Fraccion Augmented[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            Augmented[i][j] = matriz[i][j];

    int rank = n;

    for (int col = 0; col < n; col++) {
        // Hacer que el elemento en la diagonal sea 1
        int pivotRow = -1;
        for (int row = col; row < n; row++) {
            if (Augmented[row][col].num != 0) {
                pivotRow = row;
                break;
            }
        }

        if (pivotRow == -1) {
            rank--;
            continue; // No hay pivote en esta columna
        }

        // Intercambiar filas
        if (pivotRow != col) {
            Fraccion temp = Augmented[col][0];
            Augmented[col][0] = Augmented[pivotRow][0];
            Augmented[pivotRow][0] = temp;
        }

        // Hacer ceros debajo del pivote
        for (int row = col + 1; row < n; row++) {
            if (Augmented[row][col].num != 0) {
                Fraccion factor = dividir(Augmented[row][col], Augmented[col][col]);
                for (int j = col; j < n; j++) {
                    Augmented[row][j] = restar(Augmented[row][j], multiplicar(Augmented[col][j], factor));
                }
            }
        }
    }

    return rank;
}

// funcion de Gauss-Jordan para resolver AX = B
int gaussJordan(Fraccion A[][10], Fraccion B[][10], Fraccion X[][10], int n) {
    Fraccion Augmented[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Augmented[i][j] = A[i][j];
        }
        Augmented[i][n] = B[i][0];  // columna de la matriz B
    }

    for (int i = 0; i < n; i++) {
        if (Augmented[i][i].num == 0) {
            printf("Error: no tiene solución única.\n");
            return 0;
        }
        Fraccion pivot = Augmented[i][i];
        for (int j = 0; j < n + 1; j++) {
            Augmented[i][j] = dividir(Augmented[i][j], pivot);
        }
        for (int k = 0; k < n; k++) {
            if (k != i) {
                Fraccion factor = Augmented[k][i];
                for (int j = 0; j < n + 1; j++) {
                    Augmented[k][j] = restar(Augmented[k][j], multiplicar(Augmented[i][j], factor));
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        X[i][0] = Augmented[i][n];
    }
    return 1;
}

int main() {
    int n;
    Fraccion A[10][10], B[10][10], C[10][10], X[10][10];

    printf("Por favor ingresa el tamaño de las matrices: ");
    scanf("%d", &n);

    printf("\nIngresa la primera matriz A:\n");
    leerMatriz(A, n, n);

    printf("\nIngrese la segunda matriz B:\n");
    leerMatriz(B, n, n);

    // Operaciones
    printf("\nDeterminante de A: %d/%d\n", determinante(A, n).num, determinante(A, n).den);
    printf("Determinante de B: %d/%d\n", determinante(B, n).num, determinante(B, n).den);
    
    // muestra resultados matrices
    printf("\nTranspuesta de A:\n");
    Fraccion At[10][10];
    transpuesta(A, At, n, n);
    imprimirMatriz(At, n, n);

    printf("\nTranspuesta de B:\n");
    Fraccion Bt[10][10];
    transpuesta(B, Bt, n, n);
    imprimirMatriz(Bt, n, n);

    printf("\nTraza de A: %d/%d\n", traza(A, n).num, traza(A, n).den);
    printf("Traza de B: %d/%d\n", traza(B, n).num, traza(B, n).den);

    printf("\nInversa de A:\n");
    Fraccion A_inv[10][10];
    inversa(A, A_inv, n);
    imprimirMatriz(A_inv, n, n);

    printf("\nInversa de B:\n");
    Fraccion B_inv[10][10];
    inversa(B, B_inv, n);
    imprimirMatriz(B_inv, n, n);

    printf("\nAdjunta de A:\n");
    Fraccion A_adj[10][10];
    adjunta(A, A_adj, n);
    imprimirMatriz(A_adj, n, n);

    printf("\nAdjunta de B:\n");
    Fraccion B_adj[10][10];
    adjunta(B, B_adj, n);
    imprimirMatriz(B_adj, n, n);

    printf("\nSuma de A y B:\n");
    operarMatrices(A, B, C, n, n, 1);
    imprimirMatriz(C, n, n);

    printf("\nResta de A y B:\n");
    operarMatrices(A, B, C, n, n, 2);
    imprimirMatriz(C, n, n);

    printf("\nMultiplicación de A y B:\n");
    multiplicarMatrices(A, B, C, n, n, n);
    imprimirMatriz(C, n, n);

    // Calcular y mostrar el rango de A y B
    printf("\nRango de A: %d\n", rango(A, n));
    printf("Rango de B: %d\n", rango(B, n));

    return 0;
}
