#include <stdio.h>
int fibonacci (int n){
    if (n<=1)
    return n; 
    return fibonacci (n-1)+fibonacci (n-2);
}
int main (){
    int n;
    printf("Dame un numero");
    scanf("%d",  &n);
    int resultado= fibonacci(n);
    printf ("Resultado=  %d", resultado);
}