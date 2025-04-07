#include<stdio.h>
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    int result=a -b;
    return result; 
}
int multiplicacion (int a){
    return a*a;
}
float dividir (int a, int b){
    return a/b; 
}
void imprimir(int a, int b, int c, float d){
printf("\nResultados:\n Suma:%d\n Resta:%d\n Multiplicación: %d\n División:%.2f\n ", a, b,c, d);
}
int main (){
    //mandar a llamar las funciones 
    int opc1=suma (3, 2);
    int opc2=resta(5, 3);
    int opc3= multiplicacion(3);
    float opc4= dividir(5, 3);
    imprimir (opc1, opc2, opc3, opc4);
}
