//Tipo de Datos
#include <stdio.h>
int main (){
char letra='a'; 
int entero=100; 
unsigned int enteropositivo=400; 
short int enterocorto=40; 
long int enterolargo=123456789; 
long long int enteromuylargo=4444466666688888; 
float decimalcorto=3.14; 
double decimallargo=3.14159265; 
char nombre[24]="alejandro12345678910";

printf("%c\n", letra);
printf("%d\n", entero);
printf("%u\n", enteropositivo);
printf("%hd\n", enterocorto);
printf("%ld\n",enterolargo);
printf("%lld\n", enteromuylargo);
printf("%f\n", decimalcorto);
printf("%lf\n", decimallargo);
printf( "%s\n", nombre);
}

