#include <stdio.h>
int main (){
printf("%s", "Carácteres de escape\n");
printf("%s", "Salto de linea: \n");
printf("%s\t%s", "Tabulación", "Tabulación\n");
printf("%s\n","\rretorno de carro");
printf ("%s\n", "\bEsta salida hace un retroceso");
printf ("%s\n", "\fSalto de página");
printf("%s\v%s\n", "Tabulación", "Vertical");
printf("%s\\\n", "Imprimir diagonal invertida");
printf("%s\?\n", "Imprime signo de interrogación");
printf("%s\"\n", "Imprime comillas dobles");
int numdecimal=44; 
printf("%s%o\n", "Imprime numero en octal:", numdecimal);
printf("%s%x\n", "Impime numero en hexadecimal:", numdecimal);
char cadena[]="Hola, mundo";
printf("%s\n", cadena);
cadena [5]='\0'; 
printf("%s%s", "Cadena despues del fin de cadena:", cadena);
}



