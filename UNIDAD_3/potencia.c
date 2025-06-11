#include <stdio.h>
int power(int base, int exponente){
    if (exponente == 0)
    return 1; 
    else return base*power(base, exponente -1);
}
int main(){
    int base, exponente;
    printf("Dame tu base");
    scanf("%d", &base);
    printf("Dame tu exponente");
    scanf ("%d", &exponente);
    power(base, exponente);
    int resultado = power(base, exponente);
    printf("Resultado= %d", resultado);
    return 0;
}