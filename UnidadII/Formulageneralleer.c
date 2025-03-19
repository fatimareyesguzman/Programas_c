#include<stdio.h>  //Usamos la librería stdio
#include<math.h>  //Usamos la librería math para poder hacer las raíces
#include<string.h> //Usamos la librería string para poder meter floats

struct EcCuadratica{ //Comenzamos con definir el nombre de la estructura 
    int a;           //Variable que guarda el valor de a en la función cuadrática
    int b;           //Variable que guarda el valor de b en la función cuadrática
    int c;           //Variable que guarda el valor de c en la función cuadrática
    int discriminante;       //Variable que guarda el valor del discrimiante a la hora de operar la la función cuadrática
    float x1;                //Variable que guarda el valor de x1 en el resutado
    float x2;               //Variable que guarda el valor de x2 en el resultado
    char solucion[30];      //Variable que guarda el enunciado "No tiene solución" o "Si tiene solución"
    
};                           //Se cierra el establecimiento de variables para la estructura

int main(){                 //Método principal
    int size;                //Variable que guardará el tamaño de la estructura
    printf("Ingrese el tamaño del arreglo: \n");    //Pedimos el tamaño del arreglo al usuario es decir el numero de ecuaciones que quiere resolver
    scanf("%d", &size);       //Leemos el tamaño y lo guardamos como size
    struct EcCuadratica arreglo[size]; //Relacionamos el arreglo con la estructura

    for (int i = 0; i < size; i++){   //Comenzamos con un ciclo puesto que depende del tamaño cuantas veces vamos a pedir las variables
        printf("Dame valor de a:\n");  //Pedimos el valor de a
        scanf("%d", &arreglo[i].a); //Leemos y escaneamos el valor de a 
        printf("Dame valor de b:\n"); //Pedimos el valor de b
        scanf("%d",&arreglo [i].b);   //Leemos y escaneamos el valor b
        printf("Dame valor de c:\n"); //Pedimos el valor de c
        scanf("%d", &arreglo[i].c);  //Leemos y escaneamos el valor de c
       
        int d=(arreglo[i].b*arreglo[i].b)-(4*arreglo[i].a*arreglo[i].b);  //Comenzamos sacando el discriminante con la operaión de la raíz en la formula cuadrática
        if(d<0){                                 //Para establecer si tiene solucion o no es necesario poner el if y ahí establecemos la condición de si el discriminante es menor o igual a 0, no tienen solución.
            strcpy(arreglo[i].solucion,"No tiene solucion");  //En caso de que sea menor a cero, el programa imprimirá "No tiene solución, con ayuda de esta linéa de código y con strcpy"
        } else{     //En caso de que no se cumpla la condición, es decir que d sea mayor a 0
            int valx1=((-1)*arreglo[i].b+sqrt(d))/2*arreglo[i].a;  //Continuamos desarrollando la operación para resolver la ecuación cuadrática y ponemos + para obtener la raiz positva 
            int valx2=((-1)*arreglo[i].b-sqrt(d))/2*arreglo[i].a;  //Continuamos desarrollando la operación para resolver la ecuación cuadrática y ponemos - para obtener la raiz negativa 
            strcpy(arreglo[i].solucion,"Tiene solucion"); //En este caso con ayuda de trcpy ponemos el Tiene solución al final 
            arreglo[i].x1=valx1; //Asignamos valores de valx1 a arreglo[i].x1
            arreglo[i].x2=valx2; //Asignamos valores de valx2 a arreglo[i].x2
        } //se cierra el if
        } //se cierra el for
        printf("%s|%s|%s|%s|%s|%s", "a","b", "c", "x1","x2","Sol\n");  //El obetivo de esta linea de código es imprimir los encabezados de cada columna para que quede a|b|c|x1|x2|Sol
        for (int i=0; i<size;i++){   //Se abre otro ciclo, para que conforme se vayan avanzando en las ecuaciones, se vaya imprimiendo su valor obtenido para x1 y x2
        printf("%d|%d|%d|%.2f|%.2f|%s\n",  //Posteriormente, continuamos imprimiendo a modo de columnos el resultado, será como se mostró hace rato, aquí utilizamos diferentes tipos de carácteres de salida para que se impriman acorde al tipo de variable.
        arreglo[i].a,  //Se imprime a en la posición i (el número de ecuación que sea)
        arreglo[i].b,  //Se imprime b en la posición i (el número de ecuación que sea )
        arreglo[i].c,   //Se imprime c en la posición i (el número de ecuación que sea )
        arreglo[i].x1,   //Se imprime x1 en la posición i (el número de ecuación que sea )
        arreglo[i].x2,   //Se imprime x2 en la posición i (el número de ecuación que sea )
        arreglo[i].solucion);    //Se imprime la solución en la posición i (el número de ecuación que sea )
        }   //se cierra el for
        return 0; //para que no truene el código se pone return 0
        } //Se cierra el programa 

