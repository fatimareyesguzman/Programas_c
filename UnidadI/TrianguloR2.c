#include <stdio.h>
int main (){
int espacio=6;
    int asterisco=1;
    for(int g=6;g>=0;g--){
    for(int h=1;h<=espacio;h++){
        printf("%4s","$");
    }
    espacio--;
    for(int k=1;k<=asterisco;k++){
        printf("%4s","*");
    }
    asterisco++;
    printf("\n");
}
}
