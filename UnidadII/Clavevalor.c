#include <stdio.h>
#include <string.h>
struct KeyValue{
    char clave[50];
    char valor [100];
};
int main (){
    struct KeyValue tabla[3]={
        {"usurio", "admin"},
        {"contraseña", "1234"},
        {"servidor", "localhost"},

    };

    printf("Tabla Clave-valor:\n ");
    for (int i=0; i<3; i++){
        printf("%s; %s\n", tabla [i].clave, tabla[i]. valor);
    }
    }