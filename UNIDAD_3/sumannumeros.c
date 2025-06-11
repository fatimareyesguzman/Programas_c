#include <stdio.h>
int sumanenteros (int number){
    if(number==1) return 1; 
    else 
    return number + sumanenteros(number-1);
}

int main (){
    int num;
    printf("Dame un numero");
    scanf("%d", &num); 
   int resultado = sumanenteros(num);
   printf("Resultado=  %d", resultado);
   return 0;
}
