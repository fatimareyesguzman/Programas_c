#include <stdio.h>
#include <stdbool.h>

void llenarmatriz(int val, char matriz[val][val]) {
    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            printf("Ingrese el caracter para [%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]); 
        }
    }
}

void imprimirmatriz(int val, char matriz[val][val]) {
    printf("\nMatriz de caracteres %dx%d:\n", val, val);
    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            printf("%c\t", matriz[i][j]);
        }
        printf("\n");
    }
}



void almacenarenarreglo(int val, char matriz[val][val], char arreglo[]) {
    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            arreglo[i * val + j] = matriz[i][j]; 
        }
    }
}



void imprimirarreglo(int val, char arreglo[]) {
    printf("\nArreglo con los caracteres:\n");
    for (int i = 0; i < val * val; i++) {
        printf("%c ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int numere;
    printf("Ingrese un numero para verificar su raiz cuadrada: ");
    scanf("%d", &numere);
    
    bool flag = false;
    int raiz = 0;
    
    for(int i = 0; i <= numere; i++) {
        if(i * i == numere) {
            flag = true;
            raiz = i;
            break;
        }
    }
    

    char matriz[raiz][raiz];
    char arreglo[raiz * raiz]; 
    
    llenarmatriz(raiz, matriz);
    imprimirmatriz(raiz, matriz);
    
    almacenarenarreglo(raiz, matriz, arreglo);
    imprimirarreglo(raiz, arreglo);
    
    return 0;
}
