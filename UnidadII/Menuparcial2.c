#include <stdio.h> //Incluimos librería stdio
#include <math.h> //Incluimos libreria math para que se pueda hacer la raiz cuadrada
#include <string.h> //Incluimos string para los decimales
#include <stdbool.h> //Booleanos 

#define FILAS 2
#define COLUMNAS 2
#define dolar 20.33  
#define euro 21.96  
#define libreest 26.27
#define PI 3.141516 
#define FILAS1 3
#define COLUMNAS1 3
#define FILASp48 3
#define COLUMNASp48 2


struct Usuario {
    char nombre[50];
    int edad;
    char correo[50];
    int telefono;
    int matricula;
    char domicilio[50];
    char pais[50];
    char licenciatura[50];
};
void programa1(){
    int size; 
    printf("Ingrese el tamaño del arreglo: \n");
    scanf("%d", &size);
    struct Usuario usuarios[size];

    for (int i = 0; i < size; i++)
    {
        struct Usuario usuario1;
        printf("Ingrese su nombre;\n");
        scanf("%s", usuario1.nombre);

        printf("Ingrese su edad:\n");
        scanf("%d", &usuario1.edad);

        printf("Ingrese su correo:\n");
        scanf("%s", usuario1.correo);

        printf("Ingrese su telefono:");
        scanf("%d", &usuario1.telefono);

        printf("Ingrese su matricula:");
        scanf("%d", &usuario1.matricula);

        printf("Ingrese su domicilio:");
        scanf("%s", usuario1.domicilio);

        printf("Ingrese su pais:");
        scanf("%s", usuario1.pais);

        printf("Ingrese su licenciatura:");
        scanf("%s", usuario1.licenciatura);
        usuarios[i] = usuario1;
    }
 
    for (int i = 0; i < size; i++)
    {
        printf("\nUsuario %d:\n", i + 1);
        printf("Nombre: %s\n", usuarios[i].nombre);
        printf("Edad: %d\n", usuarios[i].edad);
        printf("Correo: %s\n", usuarios[i].correo);
        printf("Telefono: %d\n", usuarios[i].telefono);
        printf("Matricula: %d\n", usuarios[i].matricula);
        printf("Domicilio: %s\n", usuarios[i].domicilio);
        printf("Pais: %s\n", usuarios[i].pais);
        printf("Licenciatura: %s\n", usuarios[i].licenciatura);
    }


}
void programa2(){
    int num1, num2;
    int *ptr1, *ptr2; //para declararlo siempre astedisco 4 bytes

    ptr1 = &num1;
    ptr2 = &num2;

printf("%p\n",ptr1 );
printf("%p\n", ptr2);

    num1 = 10;
    num2 = 20;

    ptr1 = ptr2;
    ptr2 = NULL;  //vaciar el apuntador 

printf("%p\n",ptr1 );
printf("%p\n",ptr2);

}

void programa3(){
    int numero =42; 
int *apuntador= &numero;

printf ("Valor del numero:%d", numero); 
printf("Direccion de numero: %p", &numero);
printf("Valor del apuntador:%p", apuntador);
printf("Valro al que paunta: %d", *apuntador);

}

void programa4 (){
    int a, b, c, d, e;
    printf("Ingrese valor A\n");
    scanf("%d", &a);
    printf ("Ingrese valorj B\n");
    scanf("%d", &b);
    printf ("Ingrese valorj C\n");
    scanf("%d", &c);
    printf ("Ingrese valorj D\n");
    scanf("%d", &d);
    printf ("Ingrese valorj E\n");
    scanf("%d", &e);

    int *const pa=&a;
    int *const pb=&b;
    int *const pc=&c;
    int *const pd=&d;
    int *const pe=&e;
   
   printf("Valores ingresados: A=%p\n",&pa);
   printf("Valores ingresados:  B=%p\n",&pb);
   printf("Valores ingresados: C=%p\n",&pc);   
   printf("Valores ingresados: D=%p\n",&pd);   
   printf("Valores ingresados: E=%p\n",&pe);

   int suma=*pa+*pa;
   printf("Resultado de la suma: %d", suma);

   *pa=suma; 
   printf("Valor nuevo A=%d\n", *pa);

   int resta=*pb-*pb;
   printf("Resultado de la resta:\n %d", resta);

   *pb=resta; 
   printf("Valor nuevo B=%d\n", *pb);

   int multiplicacion=*pc * *pc;
   printf("Resultado de la multiplicación: \n%d", multiplicacion);

   *pc=multiplicacion; 
   printf("Valor nuevo C=%d\n", *pc);


   int division=*pd / *pd;
   printf("Resultado de la división:\n %d", division);

   *pd=division; 
   printf("Valor nuevo D=%d\n", *pd);

}

void programa5(){
    int size; 
    printf("Ingrese el tamaño del arreglo: \n");
    scanf ("%d", &size);
    
    int arregloNumeros[size]; //declarando tamaño del arreglo

    for(int i=0; i<size; i++){
        printf("Ingrese valor en posicion [%d]:\n",  i);
        int swap; 
        scanf("%d", &swap);
        arregloNumeros[i]=swap; //recuperar lo del teclado y lo asigna a una posición 
    }
    //imprimiendo los valores del arreglo
    for (int i=0; i<size; i++){
        printf("arreglo en[%d]=%d\n", i, arregloNumeros[i]);
    }
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

void programa6 (){
    
        for(int i=0;i<=3;i++){
        int limitey1 =0;
    
        while (limitey1 >= 0) {
        int limitex1 = 4;
    
        while (limitex1 >= 0){
        setColor("\033[7;34m");
        printf("%4s", "");
        
      limitex1--;
     }
      limitey1--;
     }
    
     int limitey2 =0;
     while (limitey2 >= 0) {
    int limitex2 = 8;
     while (limitex2 >= 0){
     setColor("\033[7;31m");
    printf("%4s", "");
    limitex2--;
    }
    printf("\n");
    limitey2--;
    }
    
    int limitey3 =0;
    while (limitey3 >= 0) {
    int limitex3 = 4;
    while (limitex3 >= 0){
    setColor("\033[7;34m");
    printf("%4s", " ");
    limitex3--;
    }
    limitey3--;
    }
    
    int limitey4 =0;
    while (limitey4 >= 0) {
    int limitex4 = 8;
    while (limitex4 >= 0){
    setColor("\033[7;37m");
    printf("%4s", " ");
    limitex4--;
    }
    printf("\n");
    limitey4--;
    }
        }
        
        for(int i=0;i<=3;i++){
    
    
     int limitey5 =0;
     while (limitey5 >= 0) {
    int limitex5 = 13;
     while (limitex5 >= 0){
     setColor("\033[7;31m");
    printf("%4s", "");
    limitex5--;
    }
    printf("\n");
    limitey5--;
    }
    
    
    int limitey6 =0;
    while (limitey6 >= 0) {
    int limitex6 = 13;
    while (limitex6 >= 0){
    setColor("\033[7;37m");
    printf("%4s", "");
    limitex6--;
    }
    printf("\n");
    limitey6--;
    }
        }
    }


    
    void resetColor() {
        printf("\033[0m");
    }

    void programa7 (){
            int i, j;
        
            for (i = 0; i < 7; i++) {
            setColor("\033[7;32m");
                for (j = 0; j < 8; j++) {
                    printf(" ");
                }
        
                setColor("\033[7;37m");  
                for (j = 0; j < 8; j++) {
                    printf(" ");
                }
        
                setColor("\033[7;31m");  
                for (j = 0; j < 8; j++) {
                    printf(" ");
                }
        
                resetColor();
                printf("\n");
            }
        
        }

        

void programa8 (){
    struct KeyValue{
        char clave[50];
        char valor [100];};

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
void limpiarpantalla (){
    printf("\033[2]");
}


void programa9 (){
        limpiarpantalla();
        gotoxy (5, 3);
        printf("Helloud from(5, 3)");
        }


        struct Puntos {  //Establecimos neuestra estructura
            float x;     //Las variables que va a incluir nuestro programa x en los puntos 
            float y;     //Varibale y en cada punto
        };               //Se cierra la especificación de variables

void programa10 (){
        
    
        struct Puntos p1, p2, p3, p4;    //Establecemos el arreglo que sera puntos, en el cuál habran 4 por cada cuadrante
        float d12, d23, d34, d41, d13; //Establecemos las distancias entre los puntos con d12, d23 etc
        float perimetro, area; //Establecemos el perimetro y el area para cada caso (posteriormente se verá)
        
        
        printf("Ingrese valor de x para el punto en el cuadrante 1 : "); //Pedimos el valor de x en el cuadrante 1 al usuario
        scanf("%f", &p1.x);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
        printf("Ingrese valor de y para el punto en el cuadrante 1: "); //Pedimos el valor de y en el cuadrante 1 al usuario
        scanf("%f", &p1.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    
    
        printf("Ingrese valor de x para el punto  en el cuadrante 2: "); //Pedimos el valor de x en el cuadrante 2 al usuario
        scanf("%f", &p2.x);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
        printf("Ingrese valor de y para el punto en el cuadrante 2: "); //Pedimos el valor de y en el cuadrante 2 al usuario
        scanf("%f", &p2.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    
    
        printf("Ingrese valor de x para el punto en el cuadrante 3: "); //Pedimos el valor de x en el cuadrante 3 al usuario
        scanf("%f", &p3.x);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
        printf("Ingrese valor de y para el punto en el cuadrante 3 : "); //Pedimos el valor de y en el cuadrante 3 al usuario
        scanf("%f", &p3.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    
        printf("Ingrese valor de x para el punto en el cuadrante 4 : "); //Pedimos el valor de x en el cuadrante 4 al usuario
        scanf("%f", &p4.x);                                               //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
        printf("Ingrese valor de y para el punto en el cuadrante 4 : ");//Pedimos el valor de y en el cuadrante 4 al usuario
        scanf("%f", &p4.y);                                             //Escaneamos el valor, en este caso le puse flotante por si el usuario llega a poner flotantes
    
    
        d12= sqrt(((p2.x-p1.x)* (p2.x-p1.x))+ ((p2.y-p1.y)*(p2.y-p1.y))); //Con base en una formula ivnestigada se calcula la distancia entre el punto 1 y el 2
        d23=sqrt(((p3.x-p2.x)* (p3.x-p2.x))+ ((p3.y-p2.y)*(p3.y-p2.y))); //Con base en una formula ivnestigada se calcula la distancia entre el punto 2 y el 3
        d34=sqrt(((p4.x-p3.x)* (p4.x-p3.x))+ ((p4.y-p3.y)*(p4.y-p3.y)));//Con base en una formula ivnestigada se calcula la distancia entre el punto 3 y el 4
        d41=sqrt(((p1.x-p4.x)* (p1.x-p4.x))+ ((p1.y-p4.y)*(p1.y-p4.y))); //Con base en una formula ivnestigada se calcula la distancia entre el punto 4 y el 1
        d13=sqrt(((p3.x-p1.x)* (p3.x-p1.x))+ ((p3.y-p1.y)*(p3.y-p1.y))); //Es la distancaia de la línea para formar el triángulo 
    
    int opc;             //Comenzamos con el menú para calcular el area y el perimetro de un triángulo o de un cuadrado
        printf("%s\n", "Seleccione una opción:\n"); //Pedimos al usuario que nos de una opción
        printf("%s\n", "1.-Cuadrado\n"); //Damos la opción de hacer un cuadrado
        printf("%s\n", "2.-Triángulo\n"); //Damos la opción de hacer un triángulo
        scanf("%d", &opc); //Leemos la opción que el usuario brindó
        switch(opc){  //Comenzamos estableciendo qué se hace en cada caso
        
        case 1: //En el caso uno se hará
        printf("Ha seleccionado cuadrado\n"); //Decimos que se ha seleccionado el cuadrado
        perimetro = d12+d23+d34+d41; //Hacemos la operación para calcular el perímetro del cuadrado
        area = d12 * d23; //Hacemos la operación para calcular el área del cuadrado, suponiendo como se dijo en clase que el usuario da los valores correctos
        printf("\nTu perímetro es: %.2f", perimetro); //Imprimimos el valor del perimetro
        printf("\nTu área es: %.2f", area); //Imprimimos el valor del area
        break;     //cerramos el caso para que no existan errores
    
        case 2:    //comenzamos ocn el segundo caso
        printf("Ha seleccionado triángulo\n"); //Decimos que se ha seleccionado el triangulo
        perimetro = d12+d23+d13;     //Calculamos el perimetro del triángulo sumando sus lados
        area = ((sqrt(3))/4) * (d12*d12);         //Calculamos el área suponiendo que se trata de un triángulo equilátero con la formula investigada
        printf("\nTu perímetro es: %.2f", perimetro); //Imprimimos el valor del perimetro
        printf("\nTu área es: %.2f", area);  //Imprimirmos el valor del área
    
    
        break;    //Cerramos el caso 2
           default: //Ponemos una opción default
                printf("%s\n", "\nOpción inválida\n"); //Y en caso de que no se seleccione ninguna opción se imprimira opción inválida
            break; //se cierra el default
    }
    }

    void setcol(int col) {
        printf("\033[7;%dm", col); 
    }
void programa11(){
    printf("\033[2J"); 
    int area;
    printf("Ingrese un lado del cuadrado: ");
    scanf("%d", &area);

    int colores[] = {31, 32, 33, 34, 35, 36, 37};
    int numc = 7;

    for (int i = 0; i < area; i++) {      
        for (int j = 0; j < area; j++) { 
            int col = colores[(i + j) % numc]; 
            setcol(col);
            printf("  "); 
            printf("\033[0m"); 
        }
        printf("\n");
    }

}
struct Coordenada {
    int x;
    int y;
};

void programa12 (){
        int opc;
        int i;
    
        struct Coordenada arreglo[4];
    
        printf("%s\n", "Seleccione una opción:");
        printf("%s\n", "1. Cuadrado");
        printf("%s\n", "2. Triángulo");
        scanf("%d", &opc);
    
        switch (opc) {
            case 1: // Cuadrado
                for (i = 0; i < 4; i++) {
                    printf("Ingrese coordenada x%d: ", i + 1);
                    scanf("%d", &arreglo[i].x);
    
                    printf("Ingrese coordenada y%d: ", i + 1);
                    scanf("%d", &arreglo[i].y);
                }
    
                // Distancias entre puntos consecutivos
                float ab = sqrt(
                    pow(arreglo[1].x - arreglo[0].x, 2) +
                    pow(arreglo[1].y - arreglo[0].y, 2));
    
                float bc = sqrt(
                    pow(arreglo[2].x - arreglo[1].x, 2) +
                    pow(arreglo[2].y - arreglo[1].y, 2));
    
                float cd = sqrt(
                    pow(arreglo[3].x - arreglo[2].x, 2) +
                    pow(arreglo[3].y - arreglo[2].y, 2));
    
                float da = sqrt(
                    pow(arreglo[0].x - arreglo[3].x, 2) +
                    pow(arreglo[0].y - arreglo[3].y, 2));
    
                float perimetro = ab + bc + cd + da;
                float area = ab * bc; // Solo válido si es cuadrado o rectángulo
    
                printf("Perímetro total: %f\n", perimetro);
                printf("Área: %f\n", area);
                break;
    
            default:
                printf("Opción no válida\n");
                break;
    
    }

}

void programa13 (){
    int numeros[]={12, 20, 30, 20};
    int size=sizeof(numeros)/sizeof(numeros[0]); //Para saber el tamaño del arreglo 

    printf("Tamaño: %d\n", size);
    for(int i=0; i<size; i++){
        printf("numeros [%d]=%d\n", i, numeros[i]);
    }

}
void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void saveMatriz(int filas, int columnas, int matriz[filas][columnas])
{
    FILE *archivo = fopen("matriz.txt", "w");
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo.\n");
        return;
    }
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            fprintf(archivo, "%d ", matriz[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
    printf("Matriz guardada en 'matriz.txt' exitosamente.\n");
}

void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void sumarMatriz(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void escalarMatrizA(int filas, int columnas, int matriz1[filas][columnas], int matriz_escA[filas][columnas])
{
    int numero;
    printf("Ingrese el número por el que desea multiplicar la matriz A:\n");
    scanf("%d", &numero);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz_escA[i][j] = matriz1[i][j] * numero;
        }
    }
}

void escalarMatrizB(int filas, int columnas, int matriz2[filas][columnas], int matriz_escB[filas][columnas])
{
    int numero2;
    printf("Ingrese el número por el que desea multiplicar la matriz B:\n");
    scanf("%d", &numero2);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matriz_escB[i][j] = matriz2[i][j] * numero2;
        }
    }
}

int calculardeterminante(int MatrizA[3][3])
{
    int MatrizExp[3][5], determinante = 0;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            MatrizExp[i][j] = MatrizA[i][j];
        }
        for (j = 3; j < 5; j++)
        {
            MatrizExp[i][j] = MatrizA[i][j - 3];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        determinante += MatrizExp[0][i] * MatrizExp[1][i + 1] * MatrizExp[2][i + 2];
    }

    for (int i = 0; i < 3; i++)
    {
        determinante -= MatrizExp[0][i + 2] * MatrizExp[1][i + 1] * MatrizExp[2][i];
    }

    return determinante;
}


void programa14 (){
    
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_b[filas][columnas];
    int matriz_r[filas][columnas];
    int matriz_escA[filas][columnas];
    int matriz_escB[filas][columnas];

    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    llenarMatriz("Matriz B", filas, columnas, matriz_b);

    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("Matriz B", filas, columnas, matriz_b);

    sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirMatriz("Suma A+B", filas, columnas, matriz_r);

    escalarMatrizA(filas, columnas, matriz_a, matriz_escA);
    imprimirMatriz("Matriz A multiplicada por el número ingresado:", filas, columnas, matriz_escA);

    escalarMatrizB(filas, columnas, matriz_b, matriz_escB);
    imprimirMatriz("Matriz B multiplicada por el número ingresado:", filas, columnas, matriz_escB);

    saveMatriz(filas, columnas, matriz_r);

    if (filas == 3 && columnas == 3)
    {
        int determinante = calculardeterminante(matriz_a);
        printf("El det de la matriz es: %d\n", determinante);
    }
    else
    {
        printf("No se puede calcular el determinante ");
    }

}



void llenarMatrizp2(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
printf("Nombre de la matriz: %s\n", nombre);
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
scanf("%d", &matriz[i][j]);
}
}
}



void imprimirMatrizp2(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
printf("Nombre de la matriz: %s\n", nombre);
printf("Matriz ingresada:\n");
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
printf("%4d ", matriz[i][j]);
}
printf("\n");
}
}


void multiplicarMatrizp2(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas])
{
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
matrizr[i][j] = matriz1[i][j] * matriz2[i][j];
}
}
}


void programa15 (){

int filas, columnas;
printf("Ingrese el número de filas: ");
scanf("%d", &filas);
printf("Ingrese el número de columnas: ");
scanf("%d", &columnas);

int matriz_a[filas][columnas];
int matriz_b[filas][columnas];
int matriz_r[filas][columnas];


llenarMatrizp2("Matriz A", filas, columnas, matriz_a);
llenarMatrizp2("Matriz B", filas, columnas, matriz_b);

imprimirMatrizp2("Matriz A", filas, columnas, matriz_a);
imprimirMatrizp2("Matriz B", filas, columnas, matriz_b);

multiplicarMatrizp2(filas, columnas, matriz_a, matriz_b, matriz_r);
imprimirMatrizp2("Multiplicacion AxB", filas, columnas, matriz_r);


}




struct Direccion{
    char calle [50];
    int numero;
};
struct Persona {
    char nombre[50];
    struct Direccion domicilio; 
};
void programa16 (){
   
    struct Persona personal={"Carlos Ramírez", {"Av.Reforma", 123}};
    printf("Nombre: %s\n", personal.nombre);
    printf("Domicilio: %s #%d\n", personal.domicilio.calle, personal.domicilio.numero);

}
typedef struct {
    char nombre[50];
    int edad; 
    float promedio;
}Estudiante;
void programa17 (){
    
        Estudiante estudiante1={"Maria López", 22, 9.3};
        printf ("Nombre: %s\n", estudiante1.nombre);
        
    }

    struct Coordenadas{
        int latitud; 
        int longitud;
    };
    struct Direccionp18{
        char colonia [50];
    struct Coordenadas coorde; 
    };
    struct Personas{
        char nombre [50];
        struct Direccionp18 direccion;
    };

void programa18 (){
   
        struct Personas persona;
        
    printf ("Ingrese el nombre de la persona:");
    scanf ("%s", persona.nombre);
    
    printf ("Ingrese la colonia:");
    scanf ("%s", persona.direccion.colonia);
    
    printf ("Ingrese latitud:");
    scanf ("%d", &persona.direccion.coorde.latitud);
    
    printf("Ingrese longitud:");
    scanf ("%d",&persona.direccion.coorde.longitud);
    
    //Para imprimir valores registrados
    printf("\nInformación de la persona:\n");
    printf("Nombre: %s\n ", persona.nombre);
    printf("Colonia: %s\n ", persona.direccion.colonia);
    printf("Latitud: %d\n", persona.direccion.coorde.latitud);
    printf("Longitud:%d\n", persona.direccion.coorde.longitud);
    
    }


    struct ID{
        char folio [50];
        char cantidad [20]; 
    };
    struct Labial{
        char nombre [50];
        char marca[50];
        char propietaria[20];
        char tono [50];
        char color [50];
        char edicion[50];
        char tipodelabial [50];
        char precioporpieza [20];
        char paisaenviar [50];
        char tiendaaenviar [50];
        struct ID id;
        
        
    };


    void programa19 (){
            int n;
            printf ("Ingrese cantidad de labiales");
            scanf ("%d", &n);
            getchar ();
        
        struct Labial labiales [n];
        for(int i =0; i<n; i++){
            printf("Ingrese los datos del labial %d\n", i+1);
        
            printf("Folio:");
            scanf("%s", labiales [i].id.folio);
        
            printf("Cantidad pedida:");
            scanf("%s", labiales [i].id.cantidad);
        
            printf("Nombre:");
            scanf("%s",  labiales[i].nombre);
        
            printf("Marca:");
            scanf("%s", labiales [i].marca);
        
            printf ("Propietario:");
            scanf("%s", labiales [i].propietaria);
        
            printf("Tono:");
            scanf("%s", labiales [i].tono);
        
            printf ("Color:");
            scanf("%s", labiales [i].color);
        
        
            printf ("Edición:");
            scanf("%s", labiales [i].edicion);
        
            printf ("Tipo de labial:");
            scanf("%s", labiales [i].tipodelabial);
        
            printf ("Precio por pieza:");
            scanf("%s", labiales [i].precioporpieza);
            
            printf ("Pais a enviar:");
            scanf("%s", labiales [i].paisaenviar);
        
            printf ("Tienda a enviar:");
            scanf("%s", labiales [i].tiendaaenviar);
        
            getchar();
        
        }
        printf("\n%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s|%-10s", "Folio", "Cantidad", "Nombre", "Marca", "Propietaria", "Tono", "Color", "Edicion", "Tipo de labial", "Precio por pieza", "País a enviar", "Tienda a enviar");
            printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        
            for(int i=0; i<n;i++){
                printf("\n%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s|%-15s",
                labiales [i].id.folio,
                labiales [i].id.cantidad,
                labiales[i].nombre,
                labiales [i].marca,
                labiales [i].propietaria,
                labiales [i].tono,
                labiales [i].color,
                labiales [i].edicion,
                labiales [i].tipodelabial,
                labiales [i].precioporpieza,
                labiales [i].paisaenviar,
                labiales [i].tiendaaenviar);
                
        
        
        
        
        }}
    
        struct Usuariop20 {
            char nombre [50];
            int edad; 
            char correo [50];
        };
void programa20 (){
    
    struct Usuariop20 usuario1;
    printf("Ingrese su nombre;");
    scanf("%s", usuario1.nombre);

    printf ("Ingrese su edad:");
    scanf("%d", &usuario1.edad);

    printf("Ingrese su correo:"); 
    scanf("%s", usuario1.correo);

    printf("\nDatos del Usuario: \n");
    printf("Nombre %s\n", usuario1.nombre);
    printf("Edad: %d\n", usuario1.edad);
    printf("Correo: %s\n", usuario1.correo);

    
}

struct Estudiante {
    char nombre [50];
    int edad; 
    float promedio;
};
void programa21 (){


    struct Estudiante estudiante1= {"Alejandro Díaz", 24, 8.5};
    printf("Nombre:%s\n",estudiante1.nombre);
    printf("Edad; %d\n", estudiante1.edad);
    printf("Promedio: %.2f\n", estudiante1.promedio);


}
void programa22 (){
    typedef struct{
        char nombre [50];
        int edad;
    }Persona; //Nombre de estructura
    
    typedef struct {
        char producto [50];
        float precio;
    } Producto;
    
    typedef union{
        Persona persona;
        Producto producto;
    } Dato;
    
    typedef struct{
        Dato valor;
        int tipo;
    } Celda;
    

        Celda matriz [FILAS][COLUMNAS];
        strcpy (matriz [0][0].valor.persona.nombre, "Roberto");
        matriz[0][0].valor.persona.edad=25;
        matriz[0][0]. tipo=1;
    
        strcpy(matriz [0][1].valor.persona.nombre, "Alejandro");
        matriz [0][1].valor.persona.edad=30;
        matriz[0][1].valor.persona.edad=30;
        matriz[0][1].tipo=1;
    
        strcpy(matriz [1][0].valor.producto.producto, "Conejo");
        matriz[1][0].valor.producto.precio=1377.99;
        matriz[1][1].tipo=2;
    
        printf("Recorriendo la matriz de uniones con estructuras:\n");
    
        for(int i=0; i<FILAS; i++){
            for (int j=0;j<COLUMNAS; j++){
                printf("Celda [%d][%d]:", i, j);
                if(matriz[i][j].tipo==1){
                    printf("Persona-Nombre;%s, Edad;%d\n", 
                    matriz[i][j].valor.persona.nombre,
                    matriz[i][j].valor.persona.edad);
                }else if(matriz[i][j].tipo==2){
                    printf("Producto-Nombre: %s, Precio: %.2f\n",
                    matriz[i][j].valor.producto.producto,
                    matriz[i][j].valor.producto.precio);
                }
                }
            }
         
        }
    
    
void programa23 (){
    struct EcCuadratica{
        int a; 
        int b; 
        int c;
        int discriminante;
        float x1;
        float x2;
        char solucion[30];
    };
    
        struct EcCuadratica arreglo[2]={
            {2,3,-5,0,0.0,0.0},
            {3,7,-6,0,0.0,0.0}
    
        };
    
    for (int i=0; i<2;i++){
    int d=(arreglo[i].b*arreglo[i].b)-(4*arreglo[i].a*arreglo[i].b);
    if(d<0){
        strcpy(arreglo[i].solucion,"No tiene solucion");
    } else{
        int valx1=((-1)*arreglo[i].b+sqrt(d))/2*arreglo[i].a;  //i por size 
        int valx2=((-1)*arreglo[i].b-sqrt(d))/2*arreglo[i].a;
        strcpy(arreglo[i].solucion,"Tiene solucion");
        arreglo[i].x1=valx1;
        arreglo[i].x2=valx2;
    }
    }
    printf("%s|%s|%s|%s|%s|%s", "a","b", "c", "x1","x2","Sol\n");
    for (int i=0; i<2;i++){
    printf("%d|%d|%d|%.2f|%2f|%s\n",
    arreglo[i].a,
    arreglo[i].b,
    arreglo[i].c,
    arreglo[i].x1,
    arreglo[i].x2,
    arreglo[i].solucion);
    }
 
    }

void programa24 (){
    struct EcCuadratica{ //Comenzamos con definir el nombre de la estructura 
        int a;           //Variable que guarda el valor de a en la función cuadrática
        int b;           //Variable que guarda el valor de b en la función cuadrática
        int c;           //Variable que guarda el valor de c en la función cuadrática
        int discriminante;       //Variable que guarda el valor del discrimiante a la hora de operar la la función cuadrática
        float x1;                //Variable que guarda el valor de x1 en el resutado
        float x2;               //Variable que guarda el valor de x2 en el resultado
        char solucion[30];      //Variable que guarda el enunciado "No tiene solución" o "Si tiene solución"
        
    };                           //Se cierra el establecimiento de variables para la estructura
    
       
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
        
            } //Se cierra el programa 

            void datos(int a, int b) {
                if (a > b ) {
                    printf("a es el mayor\n");
                } else if (b > a) {
                    printf("b es el mayor\n");
            }
            }
        
    void programa25(){

    
            int a, b;
            printf("Dame el valor de a");
            scanf("%d", &a);
            printf("Dame el valor de b");
            scanf("%d", &b);
            datos (a, b);
          
        
        
        }

        void datosp26(int a, int b, int c) {
            if (a > b && a > c) {
                printf("a es el mayor\n");
            } else if (b > a && b > c) {
                printf("b es el mayor\n");
            } else if (c > a && c > b) {
                printf("c es el mayor\n");
            }
        }

    void programa26 (){


    int a, b, c;
    printf("Dame el valor de a");
    scanf("%d", &a);
    printf("Dame el valor de b");
    scanf("%d", &b);
    printf("Dame el valor de c");
    scanf("%d", &c);
    datosp26 (a, b,c);



}
float cf(float c) {  
    return (c * 1.8) + 32;
}

void programa27 (){
    
            float resultado, c;
            printf("Dame el valor de Celsius: ");
            scanf("%f", &c);
            resultado = cf(c);
            printf("Equivalencia en Fahrenheit = %.2f\n", resultado);
            
        }
        float ck(float c) {  
            return c + 273.15;
        }

void programa28 (){

        float resultadop28, c;
        printf("Dame el valor en Celsius: ");
        scanf("%f", &c);
        resultadop28 = ck(c);
        printf("Equivalencia en Kelvin = %.2f\n", resultadop28);
        
     
    }
void llenarMatrizp29(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
printf("Nombre de la matriz: %s\n", nombre);
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
scanf("%d", &matriz[i][j]);
}
}
}

void saveMatrizp29(int filas, int columnas, int matriz[filas][columnas])
{
FILE *archivo = fopen("matriz.txt", "w");
if (archivo == NULL)
{
printf("Error al abrir el archivo.\n");
return;
}
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
fprintf(archivo, "%d ", matriz[i][j]);
}
fprintf(archivo, "\n");
}
fclose(archivo);
printf("Matriz guardada en 'matriz.txt' exitosamente.\n");
}

void imprimirMatrizp29(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
printf("Nombre de la matriz: %s\n", nombre);
printf("Matriz ingresada:\n");
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
printf("%4d ", matriz[i][j]);
}
printf("\n");
}
}

void sumarMatrizp29(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas])
{
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
}
}
}

void escalarMatrizAp29(int filas, int columnas, int matriz1[filas][columnas], int matriz_escA[filas][columnas])
{
int numero;
printf("Ingrese el número por el que desea multiplicar la matriz A:\n");
scanf("%d", &numero);
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
matriz_escA[i][j] = matriz1[i][j] * numero;
}
}
}

void escalarMatrizBp29(int filas, int columnas, int matriz2[filas][columnas], int matriz_escB[filas][columnas])
{
int numero2;
printf("Ingrese el número por el que desea multiplicar la matriz B:\n");
scanf("%d", &numero2);
for (int i = 0; i < filas; i++)
{
for (int j = 0; j < columnas; j++)
{
matriz_escB[i][j] = matriz2[i][j] * numero2;
}
}
}

int calculardeterminantep29(int MatrizA[3][3])
{
int MatrizExp[3][5], determinante = 0;
int i, j;

for (i = 0; i < 3; i++)
{
for (j = 0; j < 3; j++)
{
MatrizExp[i][j] = MatrizA[i][j];
}
for (j = 3; j < 5; j++)
{
MatrizExp[i][j] = MatrizA[i][j - 3];
}
}
for (int i = 0; i < 3; i++)
{
determinante += MatrizExp[0][i] * MatrizExp[1][i + 1] * MatrizExp[2][i + 2];
}

for (int i = 0; i < 3; i++)
{
determinante -= MatrizExp[0][i + 2] * MatrizExp[1][i + 1] * MatrizExp[2][i];
}

return determinante;
}


void programa29 (){


int filas, columnas;
printf("Ingrese el número de filas: ");
scanf("%d", &filas);
printf("Ingrese el número de columnas: ");
scanf("%d", &columnas);

int matriz_a[filas][columnas];
int matriz_b[filas][columnas];
int matriz_r[filas][columnas];
int matriz_escA[filas][columnas];
int matriz_escB[filas][columnas];

llenarMatrizp29("Matriz A", filas, columnas, matriz_a);
llenarMatrizp29("Matriz B", filas, columnas, matriz_b);

imprimirMatrizp29("Matriz A", filas, columnas, matriz_a);
imprimirMatrizp29("Matriz B", filas, columnas, matriz_b);

sumarMatrizp29(filas, columnas, matriz_a, matriz_b, matriz_r);
imprimirMatrizp29("Suma A+B", filas, columnas, matriz_r);

escalarMatrizAp29(filas, columnas, matriz_a, matriz_escA);
imprimirMatrizp29("Matriz A multiplicada por el número ingresado:", filas, columnas, matriz_escA);

escalarMatrizBp29(filas, columnas, matriz_b, matriz_escB);
imprimirMatrizp29("Matriz B multiplicada por el número ingresado:", filas, columnas, matriz_escB);

saveMatrizp29(filas, columnas, matriz_r);

if (filas == 3 && columnas == 3)
{
int determinante = calculardeterminantep29(matriz_a);
printf("El det de la matriz es: %d\n", determinante);
}
else
{
printf("No se puede calcular el determinante ");
}


}
void llenarMatrizp30(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {

    printf("Nombre de la matriz: %s\n", nombre);
   
    for (int i = 0; i < filas; i++) {
   
    for (int j = 0; j < columnas; j++) {
   
    printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
   
    scanf("%d", &matriz[i][j]);
   
    }
   
    }
   
   }
   
   
   
   void saveMatrizp30(int filas, int columnas, int matriz[filas][columnas]) {
   
    FILE *archivo = fopen("../matriz.txt", "w");
   
    if (archivo == NULL) {
   
    printf("Error al abrir el archivo.\n");
   
    return;
   
    }
   
    
   
    for (int i = 0; i < filas; i++) {
   
    for (int j = 0; j < columnas; j++) {
   
    fprintf(archivo, "%d ", matriz[i][j]);
   
    }
   
    fprintf(archivo, "\n");
   
    }
   
    
   
    fclose(archivo);
   
    printf("Matriz guardada en 'matriz.txt' exitosamente.\n");
   
   }
   
   
   
   void imprimirMatrizp30(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
   
    printf("Nombre de la matriz: %s\n", nombre);
   
    printf("Matriz ingresada:\n");
   
    for (int i = 0; i < filas; i++) {
   
    for (int j = 0; j < columnas; j++) {
   
    printf("%4d ", matriz[i][j]);
   
    }
   
    printf("\n");
   
    }
   
   }
   
   
   
   void sumarMatrizp30(int filas, int columnas, 
   
    int matriz1[filas][columnas], int matriz2[filas][columnas], 
   
    int matrizr[filas][columnas]){
   
    for (int i = 0 ; i < filas; i++){
   
    for (int j = 0 ; j < columnas; j++){
   
    matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
   
    }
   
    }
   
   }
   
   
   void escalarMatrizAp30(int filas, int columnas, int num1,
   
       int matriz1[filas][columnas],
      
       int matriz_escA[filas][columnas]){
   
       printf("ingresa el numero por el que desea multiplicar la matriz A:\n");
       scanf("%d",&num1);
      
       for (int i = 0 ; i < filas; i++){
      
       for (int j = 0 ; j < columnas; j++){
      
       matriz_escA[i][j] = matriz1[i][j] *num1;
      
       }
      
       }
      
      }
      void escalarMatrizBp30(int filas, int columnas, int num2,
   
       int matriz2[filas][columnas],
      
       int matriz_escB[filas][columnas]){
   
       printf("ingresa el numero por el que desea multiplicar la matriz B:\n");
       scanf("%d",&num2);
   
       
      
       for (int i = 0 ; i < filas; i++){
      
       for (int j = 0 ; j < columnas; j++){
      
       matriz_escB[i][j] = matriz2[i][j] *num2;
      
       }
      
       }
      
      }


void programa30 (){
    int filas, columnas,num1,num2;


 printf("Ingrese el numero de filas: ");

 scanf("%d", &filas);

 printf("Ingrese el numero de columnas: ");

 scanf("%d", &columnas);



 

 int matriz_a[filas][columnas];

 int matriz_b[filas][columnas];

 int matriz_r[filas][columnas];

 int matriz_escalarA[filas][columnas];

 int matriz_escalarB[filas][columnas];



 llenarMatrizp30("Matriz A", filas, columnas, matriz_a);

 llenarMatrizp30("Matriz B", filas, columnas, matriz_b);

 imprimirMatrizp30("Matriz A", filas, columnas, matriz_a);

 imprimirMatrizp30("MAtriz B", filas, columnas, matriz_b);

 sumarMatrizp30(filas, columnas, matriz_a, matriz_b, matriz_r);

 imprimirMatrizp30("SUMA A-B", filas, columnas, matriz_r);

 escalarMatrizAp30(filas,columnas,num1, matriz_a,matriz_escalarA);

 imprimirMatrizp30("Matriz A multplicada por el numero ingresado:",filas,columnas,matriz_escalarA);

 escalarMatrizBp30(filas,columnas,num2,matriz_b,matriz_escalarB);

 imprimirMatrizp30("matriz B multiplicada por el numero ingresado:",filas,columnas,matriz_escalarB);



 saveMatrizp30(filas, columnas, matriz_r); 


    
}
float pesoadolar(float pesos) {
    return pesos / dolar;
}

float dolarapeso(float dolares) {
    return dolares * dolar;
}

float pesoaeuro(float pesos) {
    return pesos / euro;
}
float euroapeso (float euros) {
    return euros*euro;
}
float pesoalibra(float pesos) {
    return pesos / libreest;
}
float libraapeso(float libras) {
    return libras* libreest;
}

void programa31 (){
    int opcion;
    float cantidad, resultado;
    printf("Seleccione una opción de conversión:\n");
    printf("1. Peso a Dólar\n");
    printf("2. Dólar a Peso\n");
    printf("3. Peso a Euro\n");
    printf("4. Euro a Peso\n");
    printf("5. Peso a Libra Esterlina\n");
    printf("6. Libra Esterlina a Peso\n");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            resultado = pesoadolar(cantidad);
            printf("Los pesos a dolares son: %.2f\n", resultado);
            break;
        case 2:
            resultado = dolarapeso(cantidad);
            printf("Los dolares a pesos son: %.2f\n", resultado);
            break;
        case 3:
            resultado = pesoaeuro(cantidad);
            printf("Los pesos a euros: %.2f\n", resultado);
            break;
        case 4:
            resultado = euroapeso(cantidad);
            printf("Los euros a pesos son : %.2f\n", resultado);
            break;
        case 5:
            resultado = pesoalibra(cantidad);
            printf("Los pesos a libras son : %.2f\n", resultado);
            break;
        case 6:
            resultado = libraapeso(cantidad);
            printf("Las libras a pesos son: %.2f\n", resultado);
            break;
        default:
            printf("No ha seleccionado una opción válida");
            break;
    }

    
}
struct Ecuadratica {
    int a;
    int b;
    int c;
    int discriminante;
    float x1;
    float x2;
    char solucion[30];
};

struct Ecuadratica leerCoeficientes() {
    struct Ecuadratica ec;
    printf("Dame valor de a:\n");
    scanf("%d", &ec.a);
    printf("Dame valor de b:\n");
    scanf("%d", &ec.b);
    printf("Dame valor de c:\n");
    scanf("%d", &ec.c);
    return ec;
}

struct Ecuadratica resolverEcuacion(struct Ecuadratica ec) {
    ec.discriminante = (ec.b * ec.b) - (4 * ec.a * ec.c);

    if (ec.discriminante < 0) {
        strcpy(ec.solucion, "No tiene solucion");
        ec.x1 = 0;
        ec.x2 = 0;
    } else {
        ec.x1 = ((-1.0 * ec.b) + sqrt(ec.discriminante)) / (2 * ec.a);
        ec.x2 = ((-1.0 * ec.b) - sqrt(ec.discriminante)) / (2 * ec.a);
        strcpy(ec.solucion, "Tiene solucion");
    }

    return ec;
}

void imprimirEncabezado() {
    printf("a|b|c|x1|x2|Sol\n");
}

void imprimirResultados(struct Ecuadratica ec) {
    printf("%d|%d|%d|%.2f|%.2f|%s\n", ec.a, ec.b, ec.c, ec.x1, ec.x2, ec.solucion);
}

void programa32 (){


    int size;
    printf("Ingrese el tamaño del arreglo:\n");
    scanf("%d", &size);

    struct Ecuadratica arreglo[size];

    for (int i = 0; i < size; i++) {
        arreglo[i] = leerCoeficientes();
        arreglo[i] = resolverEcuacion(arreglo[i]);
    }

    imprimirEncabezado();

    for (int i = 0; i < size; i++) {
        imprimirResultados(arreglo[i]);
    }

}
void numero(float a) {
    if (a > 0) {
        printf("Es un número positivo\n");
    } else if (a < 0) {
        printf("Es un número negativo\n");
    }
}

void programa33(){
    

    float a; 
    printf("Dame un numero");
    scanf ("%f", &a);
    numero(a);

}
void func1 (void){
    printf("segunda funcion");
    return;
}
void func2 (void){
    printf("tercera funcion");
    return;
}

void programa34 (){
    printf("primera funcion llamada main()");
    func1(); //segunda funcion llamada
    func2(); //tercera funcion llamada
    printf("main se termina");
   

}
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    int result=a -b;
    return result; 
}
int multiplicacion (int a){
    return a*a;
}
float dividir (int a, int b){
    return a/b; 
}
void imprimir(int a, int b, int c, float d){
printf("\nResultados:\n Suma:%d\n Resta:%d\n Multiplicación: %d\n División:%.2f\n ", a, b,c, d);
}
void programa35(){
    int opc1=suma (3, 2);
    int opc2=resta(5, 3);
    int opc3= multiplicacion(3);
    float opc4= dividir(5, 3);
    imprimir (opc1, opc2, opc3, opc4);
    
}


union dato {
    float entero;
    float flotante;
};

float areacuadrado(int l){
    return l *l;
}
float arearectangulo (int b, int h){
    return b*h;
}
float areatriangulo (int b, int h){
    return (b*h)/2;;
}
float areacirculo (int r){
    float result= PI * ( r * r );
    return result; 
}
float arearombo(int d, int D){
    return (D*d)/2;
}
float volumencubo(int a){
    return a*a*a;
}
float volumenprisma(int a, int b, int h){
    return a*b*h;
}
float volumencilindro(int r, int ladoaltura){
    float result= PI*(r*r)*ladoaltura;
    return result;
}
float volumenesfera( int r){
    float result= (4*PI*(r*r*r))/3; 
    return result;
}
float volumencono ( int r, int ladoh){
    float result= (PI*(r*r*r)*ladoh)/3; 
    return result; 
}
void programa36(){
    union dato resultado;
    int opcioncita, l, b, h, r, D, d, a, ladoaltura, ladoh; 
    printf("%s\n", "Seleccione una opción:");
    printf("%s\n", "1.-Area del cuadrado");
    printf("%s\n", "2.-Area del rectangulo");
    printf("%s\n", "3.-Area del triangulo");
    printf("%s\n", "4.-Area del circulo");
    printf("%s\n", "5.-Area del rombo");
    printf("%s\n", "6.-Volumen del cubo");
    printf("%s\n", "7.-Volumen del prisma");
    printf("%s\n", "8.-Volumen del cilindro ");
    printf("%s\n", "9.-Volumen del esfera");
    printf("%s\n", "10.-Volumen del cono");


    scanf("%d", &opcioncita);
    switch(opcioncita){
        case 1:
            printf ("%s\n", "Ha seleccionado Area del cuadrado");
            printf ("Dame el valor de l");
            scanf ("%d", &l);
            resultado.entero= areacuadrado(l); 
            printf("AREA=%.2f", resultado.entero);
            break; 


        case 2:
            printf ("%s\n", "Ha seleccionado Area del rectangulo");
             int b, h;
            printf ("Dame el valor de b");
            scanf ("%d", &b);
            printf ("Dame el valor de h");
            scanf ("%d", &h);
            resultado.entero= arearectangulo(b, h);
            printf("AREA=%.2f", resultado.entero);
            break; 


        case 3:
            printf ("%s\n", "Ha seleccionado Area del triangulo");
            printf ("Dame el valor de b");
            scanf ("%d", &b);
            printf ("Dame el valor de h");
            scanf ("%d", &h);
            resultado.entero = areatriangulo(b, h);
            printf("AREA=%.2f", resultado.entero);
            break; 

         case 4:
            printf ("%s\n", "Ha seleccionado Area del circulo");
            printf ("Dame el valor de r");
            scanf ("%d", &r);
            resultado.entero= areacirculo(r);
            printf("AREA=%.2f", resultado.entero);
            break; 


        case 5:
            printf ("%s\n", "Ha seleccionado Area del rombo");
            printf ("Dame el valor de diagonal mayor");
            scanf ("%d", &D);
            printf ("Dame el valor de diagonal menor");
            scanf ("%d", &d);
            resultado.entero = arearombo(D, d);
            printf("AREA=%.2f", resultado.entero);
            break; 

        case 6:
            printf ("%s\n", "Ha seleccionado Volumen del cubo");
            printf ("Dame el valor de a");
            scanf ("%d", &a);
            resultado.flotante = volumencubo(a);
            printf("AREA=%.2f", resultado.flotante);

            break; 


        case 7:
            printf ("%s\n", "Ha seleccionado Volumen del prisma");
            printf ("Dame el valor de a");
            scanf ("%d", &a);
            printf ("Dame el valor de b");
            scanf ("%d", &b);
            printf ("Dame el valor de h");
            scanf ("%d", &h);
            resultado.flotante = volumenprisma(a, b,h);
            printf("AREA=%.2f", resultado.flotante);
            break; 


        case 8:
            printf ("%s\n", "Ha seleccionado Volumen del cilindro");
            printf("Dame el valor de r");
            scanf ("%d", &r);
            printf("Dame valor de la altura de un lado");
            scanf ("%d", &ladoaltura);
            resultado.flotante= volumencilindro(r, ladoaltura);
            printf("AREA=%.2f", resultado.flotante);
            break; 


        case 9:
            printf ("%s\n", "Ha seleccionado Volumen de esfera");
            printf("Dame el valor de r");
            scanf ("%d", &r);
            resultado.flotante= volumenesfera(r);
            printf("AREA=%.2f", resultado.flotante);
            break; 
        

        case 10:
            printf ("%s\n", "Ha seleccionado Volumen de cono");
            printf("Dame el valor de r");
            scanf ("%d", &r);
            printf("Dame el valor de lado h");
            scanf ("%d", &ladoh);
            resultado.flotante= volumencono(r,ladoh);
            printf("AREA=%.2f", resultado.entero);
            break; 


        default:
        printf("%s\n", "No ha seleccionado una opción válida");
        break; 
    }

}

int exponenciales(int base, int exponente) {
    int resultado = 1;  
    for (int i = 1; i <= exponente; i++) {
        resultado *= base; 
    }
    return resultado;
}

void programa37 (){
    int base, exponente;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int resultado = exponenciales(base, exponente);
    
    printf("Resultado: %d", resultado);

}

float fc(float f) {  
    return (f - 32) / 1.8;
}

void programa38(){
    float resultado, f;
    printf("Dame el valor en Fahrenheit: ");
    scanf("%f", &f);
    resultado = fc(f);
    printf("Equivalencia en Celsius = %.2f\n", resultado);
    

}
void seriedenum(int inicio, int fin) {
    int suma = 0;  
    for (int i = inicio; i <= fin; i++) {
        suma += i;  
    }
    printf("La suma de los números en el  intervalo es: %d", suma);
}

void programa39(){
    int inicio, fin;
    printf("Ingrese el numero inicial del intervalo: ");
    scanf("%d", &inicio);
    printf("Ingrese el numero final del intervalo: ");
    scanf("%d", &fin);
    seriedenum(inicio, fin);

}
float kf(float k) {  
    return ((k - 273.15) * 1.8) + 32;
}

void programa40(){
    float resultado, k;
    printf("Dame el valor en Kelvin: ");
    scanf("%f", &k);
    resultado = kf(k);
    printf("Equivalencia en Fahrenheit = %.2f\n", resultado);

}

void palabras(int opcs){ 
    switch(opcs){
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

    }}
void programa41(){
    int opcs;
    printf("Escoge un número 1, 2, 3, 4:");
    scanf ("%d", &opcs);
    palabras(opcs);

}
void tablamulti(int a) {
    for (int i = 1; i <= 10; i++) {
            int resultado = a * i;
            printf("%d x %d = %d\n", a, i, resultado);
        }
    }
    
void programa42 (){
    int a;
    printf("Introduce un número para ver su tabla de multiplicar: ");
    scanf("%d", &a);
    tablamulti(a);

}

void programa43(){
    int opcc;
    float resultado, c, f, k;

    printf("Seleccione una opción:\n");
    printf("1.- De Celsius a Fahrenheit\n");
    printf("2.- De Fahrenheit a Celsius\n");
    printf("3.- De Kelvin a Fahrenheit\n");
    printf("4.- De Celsius a Kelvin\n");
    
    scanf("%d", &opcc);

    switch(opcc) {
        case 1:
            printf("Dame el valor de Celsius: ");
            scanf("%f", &c);
            resultado = cf(c); 
            printf("Fahrenheit = %.2f\n", resultado);
            break;

        case 2:
            printf("Dame el valor de Fahrenheit: ");
            scanf("%f", &f);
            resultado = fc(f); 
            printf("Celsius = %.2f\n", resultado);
            break;

        case 3:
            printf("Dame el valor de Kelvin: ");
            scanf("%f", &k);
            resultado = kf(k); 
            printf("Fahrenheit = %.2f\n", resultado);
            break;

        case 4:
            printf("Dame el valor de Celsius: ");
            scanf("%f", &c);
            resultado = ck(c); 
            printf("Kelvin = %.2f\n", resultado);
            break;

    default:
    printf("%s\n", "No ha seleccionado una opción válida");
    break; 
    }
}

void programa44(){
    printf("\033[2j"); //Limpia pantalla
    gotoxy(10,5);
    printf("Hola desde(10, 5)!");
}

 
// Función para cambiar el color
void setColores(const char* color) {
    printf("%s", color);
}

void programa45 (){char nombre[50];
    int edad;
 
    printf("\033[2J"); // Limpia la pantalla
    setColores("\033[7;34m");
 
    gotoxy(10, 5);
    printf("Ingrese su nombre: ");
    gotoxy(30, 5);
    setColores("\033[7;35m");
    scanf("%s", nombre);
 
    setColores("\033[7;34m");
    gotoxy(10, 7);
    printf("Ingrese su edad: ");
    gotoxy(30, 7);
    setColores("\033[7;35m");
    scanf("%d", &edad);
 
    gotoxy(10, 9);
    printf("Hola %s, tienes %d años.\n", nombre, edad);
 

}
void programa46 (){
    int matriz [FILAS1][COLUMNAS1]={
        {1,2,3},
        {4,5,6},
        {7,8,9},
    
    };
    printf("Recorriendo la matriz:\n");
    for (int i=0; i<FILAS1; i++){
        for(int j=0;j<COLUMNAS1; j++){
            printf("%d", matriz [i][j]);
        
        }
        printf ("\n");
    }

}
void programa47(){
    char matriz[FILAS1][COLUMNAS1][50];
for (int i=0; i<FILAS1; i++){
    for(int j=0;j<COLUMNAS1; j++){
        printf("%s", "Dame una palabra: ");
        scanf("%s", matriz[i][j]);
    
    }
}
printf ("\n");
for (int i=0; i<FILAS1; i++){
    for(int j=0; j<COLUMNAS1; j++){
    printf("%20s\t|", matriz[i][j]);
    }
 printf ("\n");
}

}
void programa48 (){

struct operaciones{
    int suma;
    int resta;
    int multiplicacion;
    float division; 
};

int matriz [FILASp48][COLUMNASp48];
struct operaciones resultado[FILASp48];
for (int i=0; i<FILASp48; i++){
    for(int j=0;j<COLUMNASp48; j++){
         printf("Dame los numeros para hacer la operacion");
         scanf("%d", &matriz[i][j]);
    }
}
for (int i=0; i<FILASp48; i++){
    int num1=matriz[i][0];
    int num2=matriz[i][1];

    resultado[i].suma=num1+num2;
    resultado[i].resta=num1-num2;
    resultado [i].multiplicacion=num1*num2;
    resultado[i].division=(float)num1/num2;
    
}
printf("%-15s|%-15s|%-15s|%-15s|%-15s|%-15s", "Val1","Val2","Suma","Resta", "Multiplicacion", "Division\n");
printf("---------------------------------------------------------------------------------\n");


for (int i=0; i<FILASp48; i++){
    printf ("%-15d|%-15d|%-15d|%-15d|%-15d|%-15.2f\n",
    matriz[i][0],
    matriz[i][1],
    resultado[i].suma,
    resultado[i].resta,
    resultado[i].multiplicacion,
    resultado[i].division);
}
}




void llenarMatriz49(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {

    printf("Nombre de la matriz: %s\n", nombre);
   
    for (int i = 0; i < filas; i++) {
   
    for (int j = 0; j < columnas; j++) {
   
    printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
   
    scanf("%d", &matriz[i][j]);
   
    }
   
    }
   
   }
   
   
   
   void saveMatriz49(int filas, int columnas, int matriz[filas][columnas]) {
   
    FILE *archivo = fopen("../matriz.txt", "w");
   
    if (archivo == NULL) {
   
    printf("Error al abrir el archivo.\n");
   
    return;
   
    }
   
    
   
    for (int i = 0; i < filas; i++) {
   
    for (int j = 0; j < columnas; j++) {
   
    fprintf(archivo, "%d ", matriz[i][j]);
   
    }
   
    fprintf(archivo, "\n");
   
    }
   
    
   
    fclose(archivo);
   
    printf("Matriz guardada en 'matriz.txt' exitosamente.\n");
   
   }
   
   
   
   void imprimirMatriz49(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
   
    printf("Nombre de la matriz: %s\n", nombre);
   
    printf("Matriz ingresada:\n");
   
    for (int i = 0; i < filas; i++) {
   
    for (int j = 0; j < columnas; j++) {
   
    printf("%4d ", matriz[i][j]);
   
    }
   
    printf("\n");
   
    }
   
   }
   
   
   
   void sumarMatriz49(int filas, int columnas, 
   
    int matriz1[filas][columnas], int matriz2[filas][columnas], 
   
    int matrizr[filas][columnas]){
   
    for (int i = 0 ; i < filas; i++){
   
    for (int j = 0 ; j < columnas; j++){
   
    matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
   
    }
   
    }
   
   }
   

void programa49 (){
    int filas, columnas;

 

 printf("Ingrese el número de filas: ");

 scanf("%d", &filas);

 printf("Ingrese el número de columnas: ");

 scanf("%d", &columnas);

 

 int matriz_a[filas][columnas];

 int matriz_b[filas][columnas];

 int matriz_r[filas][columnas];



 llenarMatriz49("Matriz A", filas, columnas, matriz_a);

 llenarMatriz49("Matriz B", filas, columnas, matriz_b);

 imprimirMatriz49("Matriz A", filas, columnas, matriz_a);

 imprimirMatriz49("MAtriz B", filas, columnas, matriz_b);

 sumarMatriz49(filas, columnas, matriz_a, matriz_b, matriz_r);

 imprimirMatriz49("SUMA A-B", filas, columnas, matriz_b);

 saveMatriz49(filas, columnas, matriz_r); 



}
#define FILAS50 6
#define COLUMNAS50 6

void programa50(){
    int matriz [FILAS50][COLUMNAS50]={
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36},
    
    };
    printf("Matriz con numeros, en donde en las posiciones impares se imprime:\n");
    for (int i=0; i<FILAS50; i++){
        for(int j=0;j<COLUMNAS50; j++){
            if(j%2==1){
            printf("%-15s","#");
        } else{
            printf("|%-15d|", matriz [i][j]);
        }
         
    }
    
      printf ("\n");
    }

}



#define FILAS51 3
#define COLUMNAS51 2  


void programa51(){
    struct maquillaje {
        char nombre[20];
        int cantidad;
        int precio;
    };
    char matriz[FILAS51][COLUMNAS51][50];  
    struct maquillaje datos[FILAS51];

    for (int i = 0; i < FILAS51; i++) {
        printf("Ingrese los datos del maquillaje\n");

        printf("ID del maquillaje: ");
        scanf("%s", matriz[i][0]);  

        printf("Tipo de maquillaje: ");
        scanf("%s", matriz[i][1]); 

        printf("Nombre del producto: ");
        scanf("%s", datos[i].nombre);

        printf("Cantidad: ");
        scanf("%d", &datos[i].cantidad);

        printf("Precio: ");
        scanf("%d", &datos[i].precio);
    }

    printf("\n%-15s| %-15s| %-15s| %-15s| %-15s\n", "ID", "Tipo de makeup", "Nombre", "Cantidad", "Precio");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < FILAS51; i++) {
        printf("%-15s| %-15s| %-15s| %-15d| %-15d\n", 
               matriz[i][0], matriz[i][1], 
               datos[i].nombre, 
               datos[i].cantidad, 
               datos[i].precio);
    }
    

}
void programa52 (){
    int opcmenuconcolor, num1, num2;
        float result;
    printf("\033[2J"); // Limpia la pantalla
    
    setColor("\033[7;32m");
    gotoxy(10,5);
    printf("Calculadora Basica con gotoxy y swithc-case: ");

    setColor("\033[4;30m");
    gotoxy(10,6);
    printf("Menú de operaciones: ");


    setColor("\033[7;31m");
    gotoxy(30,7);
    printf("1.-: ");

    setColor("\033[0m");
    gotoxy(31,7);
    printf("Suma: ");

    setColor("\033[7;33m");
    gotoxy(30,8);
    printf("2.-: ");

    setColor("\033[0m");
    gotoxy(31,8);
    printf("Resta: ");

    setColor("\033[7;36m");
    gotoxy(30,9);
    printf("3.-: ");

    setColor("\033[0m");
    gotoxy(31,9);
    printf("Multiplciación: ");


    setColor("\033[7;35m");
    gotoxy(30,10);
    printf("4.-: ");

    setColor("\033[0m");
    gotoxy(31,10);
    printf("División: ");

    setColor("\033[0m");
    gotoxy(30,11);
    printf("Seleccione una opcion: ");

    setColor("\033[7;33m");
    gotoxy(55,11);
    printf("(1-4)");

scanf("%d", &opcmenuconcolor);
switch(opcmenuconcolor){
        case 1: 
            printf("\033[2J"); // Limpia la pantalla
            setColor("\033[0m");
            printf ("%s\n", "Ha seleccionado suma");
            printf("Dame el primer número"); 
            scanf("%d", &num1);
            printf("Dame el segundo número"); 
            scanf("%d", &num2);
            result=num1+num2; 
            setColor("\033[7;31m");
            gotoxy(30,7);
            printf("Tu resultado es: %.2f\n", result);
            
            break; 
        case 2:
            printf("\033[2J"); // Limpia la pantalla
            setColor("\033[0m");
            printf ("%s\n", "Ha seleccionado resta");
            printf("Dame el primer número"); 
            scanf("%d", &num1);
            printf("Dame el segundo número"); 
            scanf("%d", &num2);
            result=num1-num2;
            setColor("\033[7;33m");
            gotoxy(30,8);
            printf("Tu resultado es:%.2f\n", result);


            break;
        case 3:
             printf("\033[2J"); // Limpia la pantalla
            setColor("\033[0m");
            printf ("%s\n", "Ha seleccionado multiplicación");
             printf("Dame el primer número"); 
            scanf("%d", &num1);
            printf("Dame el segundo número"); 
            scanf("%d", &num2);
            result=num1*num2;
            setColor("\033[7;36m");
            gotoxy(30,9);
            printf("Tu resultado es:%.2f\n", result);
            break;  



        case 4:
        printf("\033[2J"); // Limpia la pantalla
        setColor("\033[0m");
        printf ("%s\n", "Ha seleccionado división");
        printf("Dame el primer número"); 
        scanf("%d", &num1);
        printf("Dame el segundo número"); 
        scanf("%d", &num2);
        if (num2==0){
        setColor("\033[7;35m");
        gotoxy(30,10);
            printf("No se puede hacer la operacion\n");
        
        }else {
        result=num1/num2;
        setColor("\033[7;35m");
        gotoxy(30,10);
        printf("Tu resultado es: %.2f\n", result);
        }

         break; 
        default:
        printf("%s\n", "No ha seleccionado una opción válida");
        break; 
    }

}

#define FILAS53 2
#define COLUMNAS53 2

void programa53 (){

typedef struct {
    char nombre[50];
    int edad;
} Persona;

typedef struct {
    char nomproducto[50];
    float precio;
} Producto;

typedef union {
    Persona persona;
    Producto producto;
} Dato;

typedef struct {
    Dato valor;
    int tipo;
} Celda;

Celda matriz[FILAS53][COLUMNAS53];

for (int i = 0; i < FILAS53; i++) {
    for (int j = 0; j < COLUMNAS53; j++) {
            printf("Selecciona opción (1 para persona, 2 para producto) [%d][%d]: ", i, j);
            int opc;
            scanf("%d", &opc);

switch (opc) {
case 1:
    printf("Ingrese el nombre de la persona: ");
    scanf("%s", matriz[i][j].valor.persona.nombre);

    printf("Ingrese la edad de la persona: ");
    scanf("%d", &matriz[i][j].valor.persona.edad);

    matriz[i][j].tipo = 1; 
    break;

case 2:
    printf("Ingrese el nombre del producto: ");
    scanf("%s", matriz[i][j].valor.producto.nomproducto);

    printf("Ingrese el precio del producto: ");
    scanf("%f", &matriz[i][j].valor.producto.precio);

    matriz[i][j].tipo = 2; 
    break;

    default:
    printf("Opción inválida\n");
    break;
    }}
    }

    for (int i = 0; i < FILAS53; i++) {
     for (int j = 0; j < COLUMNAS53; j++) {
    printf("Celda [%d][%d]: ", i, j);
        
        if (matriz[i][j].tipo == 1) {
        printf("Persona - Nombre: %s, Edad: %d\n",
            matriz[i][j].valor.persona.nombre,
            matriz[i][j].valor.persona.edad);
            } else if (matriz[i][j].tipo == 2) {
             printf("Producto - Nombre: %s, Precio: %.2f\n",
            matriz[i][j].valor.producto.nomproducto,
            matriz[i][j].valor.producto.precio);
            }
        }
    }
}




void programa54(){
    struct Tabla {
        int valor1;
        int valor2;
        int resultado;
    };
    struct Tabla arreglo54[3] = {
        {1, 3, 0},
        {2, 3, 0},
        {3, 3, 0},
    };

    for (int i = 0; i < 3; i++) {
    arreglo54[i].resultado = arreglo54[i].valor1 * arreglo54[i].valor2;
    }

    for (int i = 0; i < 3; i++) {
    printf("%d x %d = %d\n", arreglo54[i].valor1, arreglo54[i].valor2, arreglo54[i].resultado);
    }


}
void programa55(){
    int fno, sno, *ptr, *qtr, suma,*sum, resta, *rest, multipli, *multi, division, *div;  //declaro variables y los punteros que les puse un nombre casi similar a las variabales
    printf("\n\nOperaciones con punteros: \n\n"); //Imprimo lo que hace mi programa
    printf("-------------------------------\n"); //Pongo una línea para separar

    printf("Ingresa el primer número:");   //Pido mi primer numero
    scanf("%d", &fno); //escaneo el valor de mi primer numero en la variable fno

    printf("Ingresa el segundo número:");  //Pido mi segundo numero
    scanf("%d", &sno); //escaneo el valor de mi primer numero en la variable sno

    ptr = &fno;    //Recojo la posición de la variable fno y se la asigno  mi puntero ptr 
    qtr = &sno;      //Recojo la posición de la variable sno y se la asigno  mi puntero qtr 
    printf("\n\nPointer 1: %p", ptr);     //Imprimo el valor donde esta mi  primer puntero
    printf("\n\nPointer 2: %p", qtr);  //Imprimo el valor donde esta mi segundo pontero

    suma =  *ptr  +  *qtr;        //Hago la suma con los valores de los numros que previamente hice, ayudandome del puntero
    resta= *ptr  -  *qtr;          //Hago la resta con los valores de los numros que previamente hice, ayudandome del puntero
    multipli =  *ptr  *  *qtr;       //Hago la multiplicacion con los valores de los numros que previamente hice, ayudandome del puntero
    division =  *ptr /  *qtr;        //Hago la división con los valores de los numros que previamente hice, ayudandome del puntero

    sum=&suma;        //Recupero la posición donde se guardó el valor de mi suma y le asigno el puntero sum
    rest=&resta;        //Recupero la posición donde se guardó el valor de mi resta y le asigno el puntero rest
    multi=&multipli;    //Recupero la posición donde se guardó el valor de mi multipli y le asigno el puntero multi
    div=&division;      ////Recupero la posición donde se guardó el valor de mi division y le asigno el puntero div


    
    printf("\n\nLa suma  de los números es: %d\n", suma);  //Imprimo el resultado de la suma 
    printf("\n\nLa resta  de los números es: %d\n", resta);  //Imprimo el resultado de la resta 
    printf("\n\nLa multiplicacion  de los números es: %d\n", multipli);    //Imprimo el resultado de la multiplicacion 
    printf("\n\nLa división  de los números es: %d\n", division);     //Imprimo el resultado de la division 

    printf("\n\nPointer de suma: %p", sum);      //Imprimo el apuntador es decir la posicion donde se guardó el resultado de la suma
    printf("\n\nPointer de resta: %p", rest);         //Imprimo el apuntador es decir la posicion donde se guardó el resultado de la resta
    printf("\n\nPointer de multiplicacion: %p", multi);  //Imprimo el apuntador es decir la posicion donde se guardó el resultado de la multiplicación
    printf("\n\nPointer de division: %p", div);    //Imprimo el apuntador es decir la posicion donde se guardó el resultado de la division

}




void llenarmatriz56(int val, char matriz[val][val]) {
    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            printf("Ingrese el caracter para [%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]); 
        }
    }
}

void imprimirmatriz56(int val, char matriz[val][val]) {
    printf("\nMatriz de caracteres %dx%d:\n", val, val);
    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            printf("%c\t", matriz[i][j]);
        }
        printf("\n");
    }
}



void almacenarenarreglo56(int val, char matriz[val][val], char arreglo[]) {
    for (int i = 0; i < val; i++) {
        for (int j = 0; j < val; j++) {
            arreglo[i * val + j] = matriz[i][j]; 
        }
    }
}



void imprimirarreglo56(int val, char arreglo[]) {
    printf("\nArreglo con los caracteres:\n");
    for (int i = 0; i < val * val; i++) {
        printf("%c ", arreglo[i]);
    }
    printf("\n");
}



void programa56 (){
    int numere;
    printf("Ingrese un numero para verificar su raiz cuadrada: ");
    scanf("%d", &numere);
    
    bool flag = false;
    int raiz = 0;
    
    for(int i = 0; i <= numere; i++) {
        if(i * i == numere) {
            flag = true;
            raiz = i;
            break;
        }
    }
    

    char matriz[raiz][raiz];
    char arreglo[raiz * raiz]; 
    
    llenarmatriz56(raiz, matriz);
    imprimirmatriz56(raiz, matriz);
    
    almacenarenarreglo56(raiz, matriz, arreglo);
    imprimirarreglo56(raiz, arreglo);
 
}

void llenarmatriz57( int filas, int columnas, int matriz[filas][columnas]) {

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirmatriz57(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz dada:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void transpuesta57(int filas, int columnas, int matriz[filas][columnas], int matriztrans[columnas][filas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriztrans[j][i] = matriz[i][j]; 
        }
    }
}


void programa57 (){
    int filas, columnas;

    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    int matriz[filas][columnas];
    int matriztrans[columnas][filas];  

    llenarmatriz57( filas, columnas, matriz);

    imprimirmatriz57("Matriz", filas, columnas, matriz);

    transpuesta57(filas, columnas, matriz, matriztrans);

    imprimirmatriz57("Matriz transpuesta", columnas, filas, matriztrans);

}


void llenarmatriz58(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void llenarvector58(char *nombre, int tamaño, int vector[tamaño])
{
    printf("Nombre del vector: %s\n", nombre);
    for (int i = 0; i < tamaño; i++)
    {
        printf("Ingrese el valor para la posición [%d]: ", i);
        scanf("%d", &vector[i]);
    }
}

void imprimirmatriz58(char *nombre, int filas, int columnas, int matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirvector58(char *nombre, int tamaño, int vector[tamaño])
{
    printf("Nombre del vector: %s\n", nombre);
    printf("Vector ingresado:\n");
    for (int i = 0; i < tamaño; i++)
    {
        printf("%4d", vector[i]);
    }
    printf("\n");
}

void multiplicarmatrizporvector58(int filas, int columnas, int matriz[filas][columnas], int vector[columnas], int resultado[filas])
{
    for (int i = 0; i < filas; i++)
    {
        resultado[i] = 0;
        for (int j = 0; j < columnas; j++)
        {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }
}



void programa58 (){
    int filas, columnas;
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int vector[columnas];
    int resultado[filas];

    llenarmatriz58("Matriz A", filas, columnas, matriz_a);
    llenarvector58("Vector", columnas, vector);

    imprimirmatriz58("Matriz A", filas, columnas, matriz_a);
    imprimirvector58("Vector", columnas, vector);

    multiplicarmatrizporvector58(filas, columnas, matriz_a, vector, resultado);

    printf("Resultado de la multiplicación de la matriz A por el vector:\n");
    for (int i = 0; i < filas; i++)
    {
        printf("%d ", resultado[i]);
    }
    printf("\n");


}

void llenarmatriz59(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}


void imprimirmatriz59(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarmatriz59(int filasa, int columnasa, int columnasb, int matriza[filasa][columnasa], int matrizb[columnasb][columnasb], int matrizR[filasa][columnasb]) {

    for (int i = 0; i < filasa; i++) {
        for (int j = 0; j < columnasb; j++) {
            matrizR[i][j] = 0; 
            for (int k = 0; k < columnasa; k++) { 
                matrizR[i][j] += matriza[i][k] * matrizb[k][j];
            }
        }
    }
}

void programa59 (){
    int filasa, columnasa, filasb, columnasb;

    printf("Ingrese el número de filas de la matriz A: ");
    scanf("%d", &filasa);
    printf("Ingrese el número de columnas de la matriz A: ");
    scanf("%d", &columnasa);


    printf("Ingrese el número de filas de la matriz B: ");
    scanf("%d", &filasb);
    printf("Ingrese el número de columnas de la matriz B: ");
    scanf("%d", &columnasb);

    int matriza[filasa][columnasa];
    int matrizb[filasb][columnasb];
    int matrizresult[filasa][columnasb]; 

    llenarmatriz59("Matriz A", filasa, columnasa, matriza);
    llenarmatriz59("Matriz B", filasb, columnasb, matrizb);



    imprimirmatriz59("Matriz A", filasa, columnasa, matriza);
    imprimirmatriz59("Matriz B", filasb, columnasb, matrizb);



    multiplicarmatriz59(filasa, columnasa, columnasb, matriza, matrizb, matrizresult);
    imprimirmatriz59("Resultado de A * B", filasa, columnasb, matrizresult);

}

typedef struct {
    int numerador;
    int denominador;
} Fraccion;

void llenarmatriz60(char *nombre, int filas, int columnas, Fraccion matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("Ingrese el valor para la posición [%d][%d] (numerador y denominador): ", i, j);
            scanf("%d%d", &matriz[i][j].numerador, &matriz[i][j].denominador);
        }
    }
}

void imprimirmatriz60(char *nombre, int filas, int columnas, Fraccion matriz[filas][columnas])
{
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            printf("%4d/%-4d ", matriz[i][j].numerador, matriz[i][j].denominador);
        }
        printf("\n");
    }
}

void multiplicarmatrices60(int filas, int columnas, Fraccion matriz1[filas][columnas], Fraccion matriz2[filas][columnas], Fraccion matrizr[filas][columnas])
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            matrizr[i][j].numerador = matriz1[i][j].numerador * matriz2[i][j].numerador;
            matrizr[i][j].denominador = matriz1[i][j].denominador * matriz2[i][j].denominador;
        }
    }
}


void programa60 (){
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    Fraccion matriz_a[filas][columnas];
    Fraccion matriz_b[filas][columnas];  
    Fraccion matriz_r[filas][columnas];

    llenarmatriz60("Matriz A", filas, columnas, matriz_a);
    llenarmatriz60("Matriz B", filas, columnas, matriz_b);

    imprimirmatriz60("Matriz A", filas, columnas, matriz_a);
    imprimirmatriz60("Matriz B", filas, columnas, matriz_b);

    multiplicarmatrices60(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirmatriz60("Resultado A * B", filas, columnas, matriz_r);

}


typedef struct {
    int numerador;
    int denominador;
} fraccion;

fraccion sumar(fraccion a, fraccion b) {
    fraccion resultado;
    resultado.numerador = a.numerador * b.denominador + b.numerador * a.denominador;
    resultado.denominador = a.denominador * b.denominador;
    return resultado;
}

fraccion restar(fraccion a, fraccion b) {
    fraccion resultado;
    resultado.numerador = a.numerador * b.denominador - b.numerador * a.denominador;
    resultado.denominador = a.denominador * b.denominador;
    return resultado;
}

fraccion multiplicar(fraccion a, fraccion b) {
    fraccion resultado;
    resultado.numerador = a.numerador * b.numerador;
    resultado.denominador = a.denominador * b.denominador;
    return resultado;
}

void multiplicarporescalar61(int filas, int columnas, fraccion matriz[filas][columnas], fraccion escalar, fraccion resultado[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = multiplicar(matriz[i][j], escalar);
        }
    }
}

void sumarmatrices61(int filas, int columnas, fraccion matriz1[filas][columnas], fraccion matriz2[filas][columnas], fraccion matrizR[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizR[i][j] = sumar(matriz1[i][j], matriz2[i][j]);
        }
    }
}

void restarmatrices61(int filas, int columnas, fraccion matriz1[filas][columnas], fraccion matriz2[filas][columnas], fraccion matrizresult[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizresult[i][j] = restar(matriz1[i][j], matriz2[i][j]);
        }
    }
}

void multiplicarmatrices61(int filas, int columnas, fraccion matriz1[filas][columnas], fraccion matriz2[filas][columnas], fraccion matrizR[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizR[i][j].numerador = 0;
            matrizR[i][j].denominador = 1;
            for (int k = 0; k < columnas; k++) {
                matrizR[i][j] = sumar(matrizR[i][j], multiplicar(matriz1[i][k], matriz2[k][j]));
            }
        }
    }
}

void imprimirmatriz61(char *nombre, int filas, int columnas, fraccion matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d/%-4d ", matriz[i][j].numerador, matriz[i][j].denominador);
        }
        printf("\n");
    }
}

void llenarmatriz61(char *nombre, int filas, int columnas, fraccion matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d] (numerador y denominador): ", i, j);
            scanf("%d%d", &matriz[i][j].numerador, &matriz[i][j].denominador);
        }
    }
}

void programa61(){
    int filas, columnas;
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    fraccion matriz_a[filas][columnas];
    fraccion matriz_b[filas][columnas];  
    fraccion matriz_r[filas][columnas];

    llenarmatriz61("Matriz A", filas, columnas, matriz_a);
    llenarmatriz61("Matriz B", filas, columnas, matriz_b);

    imprimirmatriz61("Matriz A", filas, columnas, matriz_a);
    imprimirmatriz61("Matriz B", filas, columnas, matriz_b);

    sumarmatrices61(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirmatriz61("Resultado A + B", filas, columnas, matriz_r);

    restarmatrices61(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirmatriz61("Resultado A - B", filas, columnas, matriz_r);

    multiplicarmatrices61(filas, columnas, matriz_a, matriz_b, matriz_r);
    imprimirmatriz61("Resultado A * B", filas, columnas, matriz_r);

    fraccion escalar = {2, 1};  
    multiplicarporescalar61(filas, columnas, matriz_a, escalar, matriz_r);
    imprimirmatriz61("Resultado A * Escalar", filas, columnas, matriz_r);


}


void llenarmatriz62(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirmatriz62(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarmatrizpormatriz62(int filas, int columnas, int matriz1[filas][columnas], int matriz2[filas][columnas], int matrizr[filas][columnas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizr[i][j] = 0;  
            for (int k = 0; k < columnas; k++) {  
                matrizr[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}
void programa62 (){

    int filas, columnas, veces;

    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);

    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_r[filas][columnas];

    llenarmatriz62("Matriz A", filas, columnas, matriz_a);
    imprimirmatriz62("Matriz A", filas, columnas, matriz_a);

    printf("Ingrese el expontente al que desea elevar la matriz: ");
    scanf("%d", &veces);

    for (int i = 1; i <= veces; i++) {
        multiplicarmatrizpormatriz62(filas, columnas, matriz_a, matriz_a, matriz_r);
        imprimirmatriz62("Resultado", filas, columnas, matriz_r);

        for (int x = 0; x < filas; x++) {
            for (int y = 0; y < columnas; y++) {
                matriz_a[x][y] = matriz_r[x][y];
            }
        }
    }

}

void programa63(){
    int numero = 42;                // Variable entera
    int *ptr = &numero;             // Puntero apuntando a 'numero'
    int **ptr_doble = &ptr;         // Puntero doble apuntando a 'ptr'
 
    printf("Valor de 'numero': %d\n", numero);
    printf("Direccion de 'numero': %p\n", (void*)&numero);
 
    printf("\nUsando puntero simple:\n");
    printf("Valor de 'ptr': %p\n", (void*)ptr);
    printf("Valor al que apunta 'ptr': %d\n", *ptr);
    printf("Direccion de 'ptr': %p\n", (void*)&ptr);
 
    printf("\nUsando puntero doble:\n");
    printf("Valor de 'ptr_doble': %p\n", (void*)ptr_doble);
    printf("Valor al que apunta 'ptr_doble' (direccion de 'ptr'): %p\n", (void*)*ptr_doble);
    printf("Valor final al que apunta 'ptr_doble': %d\n", **ptr_doble);
    printf("Direccion de 'ptr_doble': %p\n", (void*)&ptr_doble);

}

void programa64(){
    int a, b, c, d, e,f, l;
    printf("Ingrese valor A\n");
    scanf("%d", &a);
    printf ("Ingrese valor B\n");
    scanf("%d", &b);
    printf ("Ingrese valor C\n");
    scanf("%d", &c);
    printf ("Ingrese valor D\n");
    scanf("%d", &d);
    printf ("Ingrese valor E\n");
    scanf("%d", &e);
    printf ("Ingrese valor F\n");
    scanf("%d", &f);

    int *const pa=&a;
    int *const pb=&b;
    int *const pc=&c;
    int *const pd=&d;
    int *const pe=&e;
    int *const pf=&f;
    int *const DL=&l;
    
    printf("Valores ingresados: A=%p\n",&pa);
    printf("Valores ingresados: B=%p\n",&pb);
    printf("Valores ingresados: C=%p\n",&pc);   
    printf("Valores ingresados: D=%p\n",&pd);   
    printf("Valores ingresados: E=%p\n",&pe);
    printf("Valores ingresados: F=%p\n",&pf);

    printf("Valores ingresados: DL=%p\n",&DL);

   int sumaab=*pa+*pb;
   printf("Resultado de la suma de AB:\n %d", sumaab);

    *DL=sumaab; 
   printf("\nResultado posición=%d\n", *DL);

   int restaab=*pa-*pb;
   printf("Resultado de la resta AB:\n %d", restaab);

   *DL=restaab; 
   printf("\nResultado posición=%d\n", *DL);

   int multiplicacionab=*pa * *pb;
   printf("Resultado de la multiplicación  AB: \n%d", multiplicacionab);

   *DL=multiplicacionab; 
   printf("\nResultado posición=%d\n", *DL);


   int divisionab=*pa / *pb;
   printf("Resultado de la división   AB:\n %d", divisionab);

   *DL=divisionab; 
   printf("\nResultado posición=%d\n", *DL);




   int sumacd=*pc+*pd;
   printf("Resultado de la suma de CD: \n%d", sumacd);

   *DL=sumacd; 
   printf("\nResultado posición=%d\n", *DL);

   int restacd=*pc-*pd;
   printf("Resultado de la resta CD:\n %d", restacd);

   *DL=restacd; 
   printf("\nResultado posición=%d\n", *DL);

   int multiplicacioncd=*pc * *pd;
   printf("Resultado de la multiplicación CD: \n%d", multiplicacioncd);

   *DL=multiplicacioncd; 
   printf("\nResultado posición=%d\n", *DL);


   int divisioncd=*pc / *pd;
   printf("Resultado de la división  CD:\n %d", divisioncd);

   *DL=divisioncd; 
   printf("\nResultado posición=%d\n", *DL);
   


   int sumaef=*pe+*pf;
   printf("Resultado de la suma de EF:\n %d", sumaef);

   *DL=sumaef; 
   printf("\nResultado posición=%d\n", *DL);

   int restaef=*pe-*pf;
   printf("Resultado de la resta EF:\n %d", restaef);

   *DL=restaef; 
   printf("\nResultado posición=%p\n", &DL);

   int multiplicacionef=*pe * *pf;
   printf("Resultado de la multiplicación EF: \n%d", multiplicacionef);

   *DL=multiplicacionef; 
   printf("\nResultado posición=%p\n", &DL);


   int divisionef=*pe / *pf;
   printf("Resultado de la división  EF:\n %d", divisionef);

    *DL=divisionef; 
    printf("\nResultado posición=%p\n", &DL);


}

// Función para cambiar el color
void setcolor(const char* color) {
    printf("%s", color);
}

void programa65(){
    //Limpiar pantalla
    printf("033[2j"); 
    setcolor ("\033[4;36m"); 
    printf("\n Bienvenido al programa con marco y colores"); 

    //Restaurar color
    setcolor ("\033[0m");

    setcolor("\033[7;34m"); 
    printf("\nBienvenido al programa con marco y colores!\n");

    setcolor("\033[0m");

    setcolor("\033[4;34m");
    printf("Bienvenido al programa con marco y colores 2!\n");


}
void programa66 (){
    char buffer [100];
    float pi=3.14159;
    sprintf(buffer, "The value of pi es %.2f.", pi);
    printf("%s\n", buffer);
}

void programa67 (){
    struct Direccion{
        char calle[50];
        int numero;
    };
    struct Persona{
        char nombre [50];
        struct Direccion domicilio;
    
    };
    int n;

printf ("Ingrese el número de personas");
scanf ("%d", &n);
getchar ();

struct Persona personas[n];
for (int i=0; i<n; i++){
    printf ("\nIngrese los datos de la persona %d;\n", i+1);

    printf("Nombre:");
    scanf("%s", personas[i].nombre);


    printf("Calle:");
    scanf("%s", personas [i]. domicilio.calle);

    printf ("Numero");
    scanf("%d", &personas[i].domicilio.numero);
    getchar();}

    printf("\n%-20s|%20s|%-10s\n", "Nombre", "Direccion", "Número");
    printf("--------------------------------------------------\n");

    for(int i=0; i<n;i++){
        printf("%-20s|%-20s|%-10d\n",
        personas[i].nombre,
        personas[i].domicilio.calle,
        personas[i].domicilio.numero);
    
}

}
void programa68 (){
    int arr1[25], i, n;
    printf("\n\n Pointer : Store and retrieve elements from an array :\n");
    printf("------------------------------------------------------------\n");
    printf(" Input the number of elements to store in the array : ");
    scanf("%d", &n);
    printf(" Input %d number of elements in the array :\n", n);
    for (i = 0; i < n; i++) {
        printf(" element - %d : ", i);
        scanf("%d", arr1 + i);
    }
    printf(" The elements you entered are : \n");
    for (i = 0; i < n; i++) {
        printf(" element - %d : %d %p\n", i, *(arr1 + i), &arr1[i]);
    }
}        

void programa69(){
    printf("\033[2J"); // Limpia la pantalla
    int asteriscos=1;
    for (int i=6; i>=0; i--){
    for (int j=1; j<=asteriscos; j++){
setColor("\033[7;31m");
printf("%s", " ");
}
asteriscos ++; 
printf("\n");
}
}

void programa70 (){
    union Dato{
        int entero;
        float decimal;
        char texto [20];
    };
        union Dato variable;
        variable.entero=42;
        printf( "Entero: %d\n", variable.entero);
    
        variable.decimal=3.14;
        printf("Entero: %.2f\n", variable.entero);
        
        variable.texto, "Hola C";
         printf("Texto: %s\n", variable.texto);
}
void programa71(){
    struct Moto{
        char cc[20];
    };
    struct Camion{
        struct {
        char cantascientos [20];
        char cantpue [20]; 
        }datosdelcamion;
    };
    
    struct Vehiculo{
        char vim [20];
        char hp [20];
        char tanque [20];
        char cantllantas[20];
        char color[20];
        struct Moto moto;
        struct Camion camion;
    
    };
    union Tipovehiculo{
        char Motocicleta[20];
        char Camion [20];
    };
    
        struct Vehiculo motos;
        strcpy(motos.moto.cc, "444cc");
        printf("CC de la moto: %s\n", motos.moto.cc);
    
        struct Vehiculo camiones;
        strcpy(camiones.camion.datosdelcamion.cantascientos,"6");
        strcpy(camiones.camion.datosdelcamion.cantpue, "2");
        
        printf("La cantidad de puertas del camion son:%s\n", camiones.camion.datosdelcamion.cantascientos);
        printf("La cantidad de puertas es de:%s\n ", camiones.camion.datosdelcamion.cantpue);
    
    //definir estructuras y uniones
    //structVehiculo
    //union tipo
    //char motocicleta 
    
    //estructura motocicleta
    //estructura camion
}
        
    
    
    



int main() {
    int opc;

    printf("%s\n", "Seleccione una opción:");
    printf("1.- Actividad de estructuras\n");
    printf("2.- Apuntador 1\n");
    printf("3.- Apuntador 2\n");
    printf("4.- Apundadores constantes\n");
    printf("5.- Arreglo leer\n");
    printf("6.- Bandera de EUA\n");
    printf("7.- Bandera de México\n");
    printf("8.- Clave valor\n");
    printf("9.- Color\n");
    printf("10.- Coordenadas\n");
    printf("11.- Coordenadas resta y suma\n");
    printf("12.- Cuadrado con color\n");
    printf("13.- Declaración\n");
    printf("14.- Determinante y escalar\n");
    printf("15.- Elementos por posición\n");
    printf("16.- Estructura anidada\n");
    printf("17.- Estructura declarativa\n");
    printf("18.- Estructura doble\n");
    printf("19.- Estructura impresión\n");
    printf("20.- Estructura lectura\n");
    printf("21.- Estructuras\n");
    printf("22.- Estructura Union\n");
    printf("23.- Formula general\n");
    printf("24.- Formula general leer\n");
    printf("25.- Funcion 2\n");
    printf("26.- Funcion 3\n");
    printf("27.- Funcion de ceslcius a kelvin \n");
    printf("28.- Funcion de ceslcius a fahrenheit\n");
    printf("29.- Matrices determinante y exponente\n");
    printf("30.- Funcion determinates clase\n");
    printf("31.- Funcion divisas\n");
    printf("32.- Funcion ec cuadratica\n");
    printf("33.- Funciones entero");
    printf("34.- Funciones 1.1");
    printf("35.- Funciones 1\n");
    printf("36.- Funciones y figuras\n");
    printf("37.- Funcion y exponentes \n");
    printf("38.- Funcion de fahrenheit a celsius\n");
    printf("39.- Suma de intervalos \n");
    printf("40.- Funcion de kelvin a fahrenheit\n");
    printf("41.- Funcion palabras\n");
    printf("42.- Funcion tablas de multiplicar\n");
    printf("43.- Funcion temperaturas\n");
    printf("44.- Gotoxy leer\n");
    printf("45.- Gotoxy \n");
    printf("46.- Matriz \n");
    printf("47.- Matriz cadenan");
    printf("48.- Matriz de operaciones\n");
    printf("49.- Matriz funcion 1\n");
    printf("50.- Matriz impar\n");
    printf("51.- Matriz y estructuras\n");
    printf("52.- Menu con color\n");
    printf("53.- MENU estructuras\n");
    printf("54.- Multiplicacion estre  \n");
    printf("55.- Op con apuntadores\n");
    printf("56.- Programa 1 Raiz\n");
    printf("57.- Programa 2 Funciones\n");
    printf("58.- Programa 3 de multiplicacion\n");
    printf("59.- Programa 4 de funciones\n");
    printf("60.- Programa 5\n");
    printf("61.- Programa 6 operaciones confracciones\n");
    printf("62.- Programa 7 exponenetes\n");
    printf("63.- Punteros doble\n");
    printf("64.- Registro de operaciones\n");
    printf("65.- Set Color\n");
    printf("66.- Sprintf\n");
    printf("67.- Estructura impresion\n");
    printf("68.- Suma de punteros\n");
    printf("69.- Triangulo de color\n");
    printf("70.- Union en \n");
    printf("71.- Vehiculo\n");

    

    scanf("%d", &opc);

    switch(opc) {
        case 1:
            printf("Ha seleccionado el Programa 1\n");
            programa1();
            break;
        case 2:
            printf("Ha seleccionado el Programa 2\n");
            programa2();
            break;
        case 3:
            printf("Ha seleccionado el Programa 3\n");
            programa3();
            break;
        case 4:
            printf("Ha seleccionado el Programa 4\n");
            programa4();
            break;
        case 5:
            printf("Ha seleccionado el Programa 5\n");
            programa5 ();
            break;
        case 6:
            printf("Ha seleccionado el Programa 6\n");
            programa6 ();
            break;
        case 7:
            printf("Ha seleccionado el Programa 7\n");
            programa7 ();
            break;
        case 8:
            printf("Ha seleccionado el Programa 8\n");
            programa8();
            break;
        case 9:
            printf("Ha seleccionado el Programa 9\n");
            programa9();
            break;
        case 10:
            printf("Ha seleccionado el Programa 10\n");          
            programa10();
            break;
        case 11:
            printf("Ha seleccionado el Programa 11\n");
            programa11();
            break;
        case 12:
            printf("Ha seleccionado el Programa 12\n");
            programa12();
            break;
        case 13:
            printf("Ha seleccionado el Programa 13\n");
            programa13();
            break;
        case 14:
            printf("Ha seleccionado el Programa 14\n");
            programa14();
            break;
        case 15:
            printf("Ha seleccionado el Programa 15\n");
            programa15();
            break;
        case 16:
            printf("Ha seleccionado el Programa 16\n");
            programa16();
            break;
        case 17:
            printf("Ha seleccionado el Programa 17\n");
            programa17();
            break;
        case 18:
            printf("Ha seleccionado el Programa 18\n");
            programa18();
            break;
        case 19:
            printf("Ha seleccionado el Programa 19\n");
            programa19();
            break;
        case 20:
            printf("Ha seleccionado el Programa 20\n");
            programa20();
            break;
        case 21:
            printf("Ha seleccionado el Programa 21\n");
            programa21();
            break;
        case 22:
            printf("Ha seleccionado el Programa 22\n");
            programa22 ();
            break;
        case 23:
            printf("Ha seleccionado el Programa 23\n");
            programa23();
            break;
        case 24:
            printf("Ha seleccionado el Programa 24\n");
            programa24 ();
            break;
        case 25:
            printf("Ha seleccionado el Programa 25\n");
            programa25();

            break;
        case 26:
            printf("Ha seleccionado el Programa 26\n");
            programa26();
            break;
        case 27:
            printf("Ha seleccionado el Programa 27\n");
            programa27();
            break;
        case 28:
            printf("Ha seleccionado el Programa 28\n");
            programa28();
            break;
        case 29:
            printf("Ha seleccionado el Programa 29\n");
            programa29();
            break;
        case 30:
            printf("Ha seleccionado el Programa 30\n");
            programa30();
            break;
        case 31:
            printf("Ha seleccionado el Programa 31\n");
            programa31();
            break;
        case 32:
            printf("Ha seleccionado el Programa 32\n");
            programa32();
            break;
        case 33:
            printf("Ha seleccionado el Programa 33\n");
            programa33();
            break;
        case 34:
            printf("Ha seleccionado el Programa 34\n");
            programa34();
            break;
        case 35:
            printf("Ha seleccionado el Programa 35\n");
            programa35();
            break;
        case 36:
            printf("Ha seleccionado el Programa 36\n");
            programa36();
            break;
        case 37:
            printf("Ha seleccionado el Programa 37\n");
            programa37();
            break;
        case 38:
            printf("Ha seleccionado el Programa 38\n");
            programa38();
            break;
        case 39:
            printf("Ha seleccionado el Programa 39\n");
            programa39();
            break;
        case 40:
            printf("Ha seleccionado el Programa 40\n");
            programa40();
            break;
        case 41:
            printf("Ha seleccionado el Programa 41\n");
            programa41();
            break;
        case 42:
            printf("Ha seleccionado el Programa 42\n");
            programa42();break;
        case 43:
            printf("Ha seleccionado el Programa 43\n");
            programa43();
            break;
        case 44:
            printf("Ha seleccionado el Programa 44\n");
            programa44();
            break;
        case 45:
            printf("Ha seleccionado el Programa 45\n");
            programa45();
             break;
        case 46:
            printf("Ha seleccionado el Programa 46\n");
            programa46();
            break;
        case 47:
            printf("Ha seleccionado el Programa 47\n");
            programa47();
            break;
        case 48:
            printf("Ha seleccionado el Programa 48\n");
            programa48();
            break;
        case 49:
            printf("Ha seleccionado el Programa 49\n");
            programa49();
            break;
        case 50:
            printf("Ha seleccionado el Programa 50\n");
            programa50();
            break;
        case 51:
            printf("Ha seleccionado el Programa 51\n");
            programa51();
            break;
        case 52:
            printf("Ha seleccionado el Programa 52\n");
            programa52();
            break;
        case 53:
            printf("Ha seleccionado el Programa 53\n");
            programa53();
            break;
        case 54:
            printf("Ha seleccionado el Programa 54\n");
            programa54();
            break;
        case 55:
            printf("Ha seleccionado el Programa 55\n");
            programa55();
            break;
        case 56:
            printf("Ha seleccionado el Programa 56\n");
            programa56();
            break;
        case 57:
            printf("Ha seleccionado el Programa 57\n");
            programa57();
            break;
        case 58:
            printf("Ha seleccionado el Programa 58\n");
            programa58();
            break;
        case 59:
            printf("Ha seleccionado el Programa 59\n");
            programa59();
            break;
        case 60:
            printf("Ha seleccionado el Programa 60\n");
            programa60();
            break;
        case 61:
            printf("Ha seleccionado el Programa 61\n");
            programa61();
            break;
        case 62:
            printf("Ha seleccionado el Programa 62\n");
            programa62();
            break;
        case 63:
            printf("Ha seleccionado el Programa 63\n");
            programa63();
            break;
        case 64:
            printf("Ha seleccionado el Programa 64\n");
            programa64();
            break;
        case 65:
            printf("Ha seleccionado el Programa 65\n");
            programa65();
            break;
        case 66:
            printf("Ha seleccionado el Programa 66\n");
            programa66();
            break;
        case 67:
            printf("Ha seleccionado el Programa 67\n");
            programa67();
            break;
        case 68:
            printf("Ha seleccionado el Programa 68\n");
            programa68();
            break;
        case 69:
            printf("Ha seleccionado el Programa 69\n");
            programa69();
            break;
        case 70:
            printf("Ha seleccionado el Programa 70\n");
            programa70();
            break;

        case 71:
        printf("Ha seleccionado el Programa 71\n");
        programa71();
        break;
        default:
            printf("No ha seleccionado una opción válida\n");
            break;
    }

    return 0;
}
