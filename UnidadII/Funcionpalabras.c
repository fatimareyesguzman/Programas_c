#include <stdio.h>
void palabras(int opc){ 
    switch(opc){
        case 1: 
            printf ("%s\n", "Ferrari");
            break; 
        case 2:
            printf ("%s\n", "Mercedes");
            break; 
        case 3:
            printf ("%s\n", "Redbull");
            break; 
        case 4:
            printf ("%s\n", "Mclaren");
            break; 
        default:
        printf("%s\n", "No ha seleccionado una opción válida");
        break; 

    }
     
}
int main (){
    int opc;
    printf("Escoge un número 1, 2, 3, 4:");
    scanf ("%d", &opc);
    palabras(opc);
    return 0;
}