#include <stdio.h>
int main(){ //metodo principal
int numero =42; 
int *apuntador= &numero;

printf ("Valor del numero:%d", numero); 
printf("Direccion de numero: %p", &numero);
printf("Valor del apuntador:%p", apuntador);
printf("Valro al que paunta: %d", *apuntador);

return 0;
}
