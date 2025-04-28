#include <stdio.h>

void setColor(int col) {
    printf("\033[7;%dm", col); 
}

int main() {
    int size;
    printf("Ingrese la cantidad de barras que quiera, no tiene que sobrepasar de 7: \n");
    scanf("%d", &size);

    if  (size >= 0 && size <= 7){
        int arreglo[size];

        for (int i = 0; i < size; i++) {
            printf("Ingrese la altura para cada barra [%d]:\n", i);
            scanf("%d", &arreglo[i]);
        }

        int barramasgrande = arreglo[0];
        for (int i = 1; i < size; i++) {
            if (arreglo[i] > barramasgrande) {
                barramasgrande = arreglo[i];
            }
        }

        int colores[] = {31, 32, 33, 34, 35, 36, 37};

        int anchografica = size * 2 +2 ; 

        for (int i = 0; i < anchografica; i++) {
            printf("*");
        }
        printf("\n");

        for (int altura = barramasgrande; altura > 0; altura--) {
            printf("*"); 
            for (int i = 0; i < size; i++) {
                if (arreglo[i] >= altura) {
                    setColor(colores[i]);
                    printf("  "); 
                    printf("\033[0m");
                } else {
                    printf("  "); 
                }
            }
            printf("*\n"); 
        }

        for (int i = 0; i < anchografica; i++) {
            printf("*");
        }
        printf("\n");

    } else {
        printf("Sobrepasa los 7\n");
    }

    return 0;
}
