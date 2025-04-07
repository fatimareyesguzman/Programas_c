#include <stdio.h>

#define FILAS 3
#define COLUMNAS 2

struct operaciones{
    int suma;
    int resta;
    int multiplicacion;
    float division; 
};

int main(){
int matriz [FILAS][COLUMNAS];
struct operaciones resultado[FILAS];
for (int i=0; i<FILAS; i++){
    for(int j=0;j<COLUMNAS; j++){
         printf("Dame los numeros para hacer la operacion");
         scanf("%d", &matriz[i][j]);
    }
}
for (int i=0; i<FILAS; i++){
    int num1=matriz[i][0];
    int num2=matriz[i][1];

    resultado[i].suma=num1+num2;
    resultado[i].resta=num1-num2;
    resultado [i].multiplicacion=num1*num2;
    resultado[i].division=(float)num1/num2;
    
}
printf("%-15s|%-15s|%-15s|%-15s|%-15s|%-15s", "Val1","Val2","Suma","Resta", "Multiplicacion", "Division\n");
printf("---------------------------------------------------------------------------------\n");


for (int i=0; i<FILAS; i++){
    printf ("%-15d|%-15d|%-15d|%-15d|%-15d|%-15.2f\n",
    matriz[i][0],
    matriz[i][1],
    resultado[i].suma,
    resultado[i].resta,
    resultado[i].multiplicacion,
    resultado[i].division);
}
return 0;
}