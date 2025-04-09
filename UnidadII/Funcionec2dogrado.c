#include <stdio.h>
#include <math.h>
#include <string.h>

struct Ecuadratica {
    int a;
    int b;
    int c;
    int discriminante;
    float x1;
    float x2;
    char solucion[30];
};

struct Ecuadratica leerCoeficientes() {
    struct Ecuadratica ec;
    printf("Dame valor de a:\n");
    scanf("%d", &ec.a);
    printf("Dame valor de b:\n");
    scanf("%d", &ec.b);
    printf("Dame valor de c:\n");
    scanf("%d", &ec.c);
    return ec;
}

struct Ecuadratica resolverEcuacion(struct Ecuadratica ec) {
    ec.discriminante = (ec.b * ec.b) - (4 * ec.a * ec.c);

    if (ec.discriminante < 0) {
        strcpy(ec.solucion, "No tiene solucion");
        ec.x1 = 0;
        ec.x2 = 0;
    } else {
        ec.x1 = ((-1.0 * ec.b) + sqrt(ec.discriminante)) / (2 * ec.a);
        ec.x2 = ((-1.0 * ec.b) - sqrt(ec.discriminante)) / (2 * ec.a);
        strcpy(ec.solucion, "Tiene solucion");
    }

    return ec;
}

void imprimirEncabezado() {
    printf("a|b|c|x1|x2|Sol\n");
}

void imprimirResultados(struct Ecuadratica ec) {
    printf("%d|%d|%d|%.2f|%.2f|%s\n", ec.a, ec.b, ec.c, ec.x1, ec.x2, ec.solucion);
}

int main() {
    int size;
    printf("Ingrese el tamaño del arreglo:\n");
    scanf("%d", &size);

    struct Ecuadratica arreglo[size];

    for (int i = 0; i < size; i++) {
        arreglo[i] = leerCoeficientes();
        arreglo[i] = resolverEcuacion(arreglo[i]);
    }

    imprimirEncabezado();

    for (int i = 0; i < size; i++) {
        imprimirResultados(arreglo[i]);
    }

    return 0;
}
