#include <stdio.h>

float cf(float c) {  
    return (c * 1.8) + 32;
}
float fc(float f) {  
    return (f - 32) / 1.8;
}
float kf(float k) {  
    return ((k - 273.15) * 1.8) + 32;
}
float ck(float c) {  
    return c + 273.15;
}
int main() {
    int opc;
    float resultado, c, f, k;

    printf("Seleccione una opción:\n");
    printf("1.- De Celsius a Fahrenheit\n");
    printf("2.- De Fahrenheit a Celsius\n");
    printf("3.- De Kelvin a Fahrenheit\n");
    printf("4.- De Celsius a Kelvin\n");
    
    scanf("%d", &opc);

    switch(opc) {
        case 1:
            printf("Dame el valor de Celsius: ");
            scanf("%f", &c);
            resultado = cf(c); 
            printf("Fahrenheit = %.2f\n", resultado);
            break;

        case 2:
            printf("Dame el valor de Fahrenheit: ");
            scanf("%f", &f);
            resultado = fc(f); 
            printf("Celsius = %.2f\n", resultado);
            break;

        case 3:
            printf("Dame el valor de Kelvin: ");
            scanf("%f", &k);
            resultado = kf(k); 
            printf("Fahrenheit = %.2f\n", resultado);
            break;

        case 4:
            printf("Dame el valor de Celsius: ");
            scanf("%f", &c);
            resultado = ck(c); 
            printf("Kelvin = %.2f\n", resultado);
            break;

    default:
    printf("%s\n", "No ha seleccionado una opción válida");
    break; 
    }
    return 0; 
}