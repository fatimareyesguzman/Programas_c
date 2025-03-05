#include <stdio.h>
int main(){
    int contador = 0;
    int limite = 10;

    printf("%4s\n","Ejemplo de imprensión ");
    while(contador <= limite){
        //printf(contador);
        //printf("%4d", contador);
        contador++;
    }
   
    printf("%s\n", "Ejemplo de impresion"); 
        int limitey = 10;
        while(limitey >= 0){
            int limitex = 10; 
            while (limitex >= 0){
                printf("%4d", limitex);
                limitex--;
            }
            printf("\n");
            limitey--; 
        }
        
        int tabla = 0;
    while(tabla<=0){
        int numero=0;
        while (numero<= 10){
            int mult = numero * tabla;
            printf("%s%d%s%d%s%d\n", "(", tabla, ")(", numero, ")=", mult);
            numero++; 
        }
        tabla++;
        
    }
}



