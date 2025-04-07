#include <stdio.h>

int main() {
    int fno, sno, *ptr, *qtr, sum; 
    printf("\n\nPointer: ADD two numbers: \n\n");
    printf("-------------------------------\n");

    printf("Ingresa el primer número:"); 
    scanf("%d", &fno);

    printf("Ingresa el segundo número:");
    scanf("%d", &sno);

    ptr = &fno;
    qtr = &sno;
    printf("\n\nPointer 1: %p", ptr);
    printf("\n\nPointer 2: %p", qtr);

    sum =  *ptr  +  *qtr;
    
    printf("\n\nLa suma ingresada de los números es: %d\n\n", sum);

    return 0;
}
