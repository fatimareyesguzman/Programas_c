#include <stdio.h>

// Función para establecer color
void setColor(const char* color) {
    printf("%s", color);
}

// Función para resetear color
void resetColor() {
    printf("\033[0m");
}

int main() {
    // Dimensiones de la bandera
    int height = 7;           // Altura total
    int width = 24;           // Ancho total

    // Dimensiones del cuadrado rojo
    int squareHeight = 3;     // Alto del cuadrado rojo
    int squareWidth = 5;      // Ancho del cuadrado rojo

    // Coordenadas del inicio del cuadrado rojo (centrado)
    int startY = (height - squareHeight) / 2;
    int endY = startY + squareHeight;
    int startX = (width - squareWidth) / 2;
    int endX = startX + squareWidth;

    // Dibujar la bandera
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // Verificar si el punto está dentro del cuadrado rojo
            if (i >= startY && i < endY && j >= startX && j < endX) {
                setColor("\033[41m"); // Fondo rojo
            } else {
                setColor("\033[47m"); // Fondo blanco
            }
            printf("  "); // Bloque de dos espacios
        }
        resetColor(); // Resetear color al final de la línea
        printf("\n");
    }

    resetColor(); // Resetear color al final por seguridad
    return 0;
}

#include <stdio.h>

void setColor(const char* color) {
    printf("%s", color);
}

void resetColor() {
    printf("\033[0m");
}

int main() {
    int height = 13;  // Altura de la bandera
    int width = 36;   // Ancho de la bandera

    int stripeHeight = 2; // Altura de las franjas azules
    int starY = height / 2; // Línea del centro para la estrella

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            // Franja superior
            if (i < stripeHeight) {
                setColor("\033[44m"); // Azul
            }
            // Franja inferior
            else if (i >= height - stripeHeight) {
                setColor("\033[44m"); // Azul
            }
            // Estrella de David simulada (líneas simbólicas en el centro)
            else if (i == starY - 1 && j >= width / 2 - 3 && j <= width / 2 + 3) {
                setColor("\033[44m"); // Línea superior de la estrella
            }
            else if (i == starY && (j == width / 2 - 4 || j == width / 2 + 4)) {
                setColor("\033[44m"); // Puntas laterales
            }
            else if (i == starY + 1 && j >= width / 2 - 3 && j <= width / 2 + 3) {
                setColor("\033[44m"); // Línea inferior de la estrella
            }
            else {
                setColor("\033[47m"); // Blanco
            }
            printf("  ");
        }
        resetColor();
        printf("\n");
    }

    resetColor();
    return 0;
}













