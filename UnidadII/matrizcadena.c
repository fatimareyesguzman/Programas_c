#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

int main(){
char matriz[FILAS][COLUMNAS][50];
for (int i=0; i<FILAS; i++){
    for(int j=0;j<COLUMNAS; j++){
        printf("%s", "Dame una palabra: ");
        scanf("%s", matriz[i][j]);
    
    }
}
printf ("\n");
for (int i=0; i<FILAS; i++){
    for(int j=0; j<COLUMNAS; j++){
    printf("%20s\t|", matriz[i][j]);
    }
 printf ("\n");
}
return 0;
}
