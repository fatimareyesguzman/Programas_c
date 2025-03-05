#include<stdio.h>

int main(){
    printf("%s\n", "Seleccione una opc");
    printf("%s\n", "a)Seleccionar opcion 1");
    printf("%s\n", "b)Selecionar opcion 2"); 
    char opc; 
    scanf("%c", &opc);
    switch (opc){
        case 'a':
        printf("%s\n", "Seleccionó opc1"); 
        break;
        case 'b':
        printf ("%s\n", "Seleccionó opc2");
        break; 
        default: 
            printf("%s\n", "Opción inválida");
    }
    return 0; 
}