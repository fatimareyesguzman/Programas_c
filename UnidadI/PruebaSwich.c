#include <stdio.h>
int main (){
    int opc; 
    printf("%s\n", "Seleccione una opción:");
    printf("%s\n", "1.-Sumar");
    printf("%s\n", "2.-Restar");
    scanf("%d", &opc);
    switch(opc){
        case 1: 
            printf ("%s\n", "Ha seleccionado suma");
            break; 
        case 2:
            printf ("%s\n", "Ha seleccionado resta");
            break; 
        default:
        printf("%s\n", "No ha seleccionado una opción válida");
        break; 
    }
    return 0; 
}