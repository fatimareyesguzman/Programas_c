//Menú de programas unidad 1
#include <stdio.h>
#include <math.h>
int main (){
    printf("%s", "Menú de programaas de Fátima Camila Reyes Guzmán");
    int opc; 
    printf("%s\n", "Seleccione una opción:");
    printf("%s\n", "1.-Escapes");
    printf("%s\n", "2.-Tipo De Datos");
    printf("%s\n", "3.-Promedio de Calificacion");
    printf("%s\n", "4.-Grados C a Grados F(entero)");
    printf("%s\n", "5.-Temperatura Flotante");
    printf("%s\n", "6.-Diagonales con astedisco");
    printf("%s\n", "7.-Cuadro De Numeros y Tabla de multiplicar");
    printf("%s\n", "8.-Cuadro De Astediscos");
    printf("%s\n", "9.-Triangulo R");
    printf("%s\n", "10.-Triangulo R2");
    printf("%s\n", "11.-Triangulo Equilatero");
    printf("%s\n", "12.-Trapecio");
    printf("%s\n", "13.-Promedio Leer");
    printf("%s\n", "14.-Area y volumen del Cilindro");
    printf("%s\n", "15.-Area y volumen del cono");
    printf("%s\n", "16.-Area y volumen de una Esfera");
    printf("%s\n", "17.-Prueba Switch");
    printf("%s\n", "18.-Switch2");
    printf("%s\n", "19.-Calculadora");
    printf("%s\n", "20.-Hola mundo");


    scanf("%d", &opc);
    switch(opc){
        case 1:{
            printf ("%s\n", "Escapes");
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
            break; 
    }

        case 2:{
            printf ("%s\n", "Tipos de datos");
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
            break; 
        }
        case 3:{
            printf ("%s\n", "Promedio de califición");
               int calif1, calif2, calif3;
                float promedio;
                calif1=6;
                calif2=8;
                calif3=10;
                printf("%s\n", "Calificación 1:");
                printf("%d\n", calif1);
                printf("%s\n", "Calificación 2:");
                printf("%d\n", calif2);
                printf("%s\n", "Calificación 3:");
                printf("%d\n", calif3);
                promedio=(calif1+calif2+calif3)/3;
                printf("%s\n","Tu promedio es:");
                printf("%2.0f\n", promedio);
                
            break;

        }

        case 4:{
        printf ("%s\n", "Grados C a grados F (entero)");

            int fahr, celsius; 
            int lower, upper, step;
            lower= 0;        /*Limite inferior dela tabla de temperatura*/
            upper=300;      /*Limite superiro*/
            step=20;       /*tamaño del incremeto*/
            fahr = lower;  /*Se dice que la variable fahr es igual a lower 0=0*/
            while (fahr<=upper) {   /*Es la condición de que los fahrenheit deben ser menor o igual a 300*/
                celsius= 5*(fahr-32)/9;    /*Se hace la operacion para obtener fahrenheit*/
                printf("%d\t%d\n",fahr, celsius);     /*Se imprime ambas fahr y su igualdad en celsius */
                fahr=fahr+step;       /*Es nuestro contador*/
             }
        break; }


        case 5:{
        printf ("%s\n", "Temperatura flotante");
            float fahr, celsius; 
    int lower, upper, step;
    lower= 0;        /*Limite inferior dela tabla de temperatura*/
    upper=300;      /*Limite superiro*/
    step=20;       /*tamaño del incremeto*/
    fahr = lower;  /*Se dice que la variable fahr es igual a lower 0=0*/
    while (fahr<=upper) {   /*Es la condición de que los fahrenheit deben ser menor o igual a 300*/
        celsius= (5.0/9.0)*(fahr-32.0);    /*Se hace la operacion para obtener fahrenheit*/
        printf("%3.0f %6.1f\n",fahr, celsius);     /*Se imprime ambas fahr y su igualdad en celsius */
        fahr=fahr+step;       /*Es nuestro contador*/
    }
     break; }
      
      
       case 6:{
        printf("%s\n","Diagonales con astedisco");
            int n = 8;
    int i, j;
    for(i = 0; i<n; i++) { 
        for (j = 0; j<i; j++) {
            printf(" "); 
        }
        printf("*\n");
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < (n - i - 1); j++) {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
       break; 
    }
 case 7:{
        printf("%s\n","Cuadro De Numeros y Tabla de multiplicar");
            int contador = 0;
    int limite = 10;

    printf("%4s\n","Ejemplo de imprensión ");
    while(contador <= limite){
        //printf(contador);
        //printf("%4d", contador);
        contador++;
    }
   
    printf("%s\n", "Ejemplo de impresion"); 
        int limitey = 10;
        while(limitey >= 0){
            int limitex = 10; 
            while (limitex >= 0){
                printf("%4d", limitex);
                limitex--;
            }
            printf("\n");
            limitey--; 
        }
        
        int tabla = 0;
    while(tabla<=0){
        int numero=0;
        while (numero<= 10){
            int mult = numero * tabla;
            printf("%s%d%s%d%s%d\n", "(", tabla, ")(", numero, ")=", mult);
            numero++; 
        }
        tabla++;
        
    }

    break; }
    
    case 8:{
        printf("%s\n","Cuadro De Astediscos");
                int limitey = 5;
        while(limitey >= 0){
            int limitex = 10; 
            while (limitex >= 0){
                printf("%s", "*");
                limitex--;
            }
            printf("\n");
            limitey--; 
        }

    break;}
     case 9:{
        printf("%s\n","Triangulo R");
            int asteriscos=1;
    for (int i=6; i>=0; i--){
    for (int j=1; j<=asteriscos; j++){
printf("%s", "*");
}
asteriscos ++; 
printf("\n");
} 

  break;  }
 
 case 10:{
     printf("%s\n","Truangulo R2");
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

break; }

case 11:{
     printf("%s\n","Triangulo Equilatero");
     int espacios=6; int asterisco=1; 
for( int i=6; i>=0; i--){

    for(int j=1; j<=espacios; j++){
        printf("%4s", "/");
    }
    espacios--; 
    for(int k=1; k<=asterisco; k++){
        printf("%4s", "*"); 
    }
        asterisco =asterisco + 2;
        printf("\n");
    }
    break;}

    case 12:{
    printf("%s\n","Trapecio");
        int espacios=4; int asterisco=3; 
    for(int i=4; i>=0; i--){
        for(int j = 1; j <= espacios; j++){
            printf("%4s", "/");
        }
        espacios--;
        for(int k=1; k<= asterisco; k++){
            printf("%4s", "*"); 
        }
        asterisco = asterisco + 2;
        printf("\n");
    }

    break;}

    case 13:{
       printf("%s\n","Promedio leer");  
    char nombre [50];
    printf("%s\n","Ingrese su nombre");
    scanf("%s",&nombre);

    int calif1; 
    printf("%s\n", "Ingrese calif1");
    scanf("%d", &calif1);

    int calif2; 
    printf("%s\n", "Ingrese calif2");
    scanf("%d", &calif2);

    int calif3; 
    printf("%s\n", "Ingrese calif3");
    scanf("%d", &calif3);

    float promedio=(calif1+calif2+calif3)/3;
    printf ("%s%s\n","Nombre", nombre);
    printf("%s%.2f\n", "Promedio", promedio);
    if (promedio>=6.00){
        printf("%s\n", "APROBADO");
    } else {
        printf("%s\n", "REPROBADO");
    }

    break;}

case 14:{
     printf("%s\n","Area y volumen del cilindro");  
     printf ("%s\n", "Programa para calcular el área y el volumen de un cilindro");

    float pi=3.1416;

    int radio;
    printf("%s", "Dame el radio:");
    scanf("%d", &radio);

    int altura; 
    printf("%s", "Dame la altura:");
    scanf("%d", &radio);

    float area= (2*pi*radio*altura)+((2*pi)*(radio*radio));
    float volumen= (pi* (radio*radio)* altura);

    printf ("%s%.2f\n", "Tu area es:", area);
    printf ("%s%.2f\n", "Tu volumnen es:", volumen);
break;}




case 15:{
     printf("%s\n","Area y volumen del cono");  
         float pi=3.1416;
    int radio; 
    printf("%s", "Dame el radio:");
    scanf("%d", &radio);

    int altura; 
    printf("%s", "Dame la altura:");
    scanf("%d", &altura);

    double g= sqrt((radio*radio)+(altura*altura));
    float areal=(pi*radio*g);
    float areab=pi*(radio*radio);
    float areat= areal+areab;
    float volumen= (pi*(radio*radio)*altura)/3;

    printf("%s%.2f\n", "Su area lateral es:", areal);
    printf("%s%.2f\n", "Su area base es:", areab);
    printf("%s%.2f\n", "Su area total es:", areat);
    printf("%s%.2f\n", "Su volumen es: ", volumen);

break;}



case 16:{
     printf("%s\n","Area y volumen una esfera");  
    printf ("%s\n", "Programa para calcular el área y el volumen de una esfera");
    
    float pi=3.1416;

    int radio;
    printf("%s", "Dame el radio ");
    scanf("%d", &radio);

    float area=(4*pi)*(radio*radio);
    float volumen=((4*pi)*(radio*radio*radio))/3; 

    printf("%s%.2f\n", "Tu area es:", area);
    printf("%s%.2f\n", "Tu volumen es:", volumen);
    
break;}




case 17:{
     printf("%s\n","Prueba Switch");  
         int opc; 
    printf("%s\n", "Seleccione una opción:");
    printf("%s\n", "1.-Sumar");
    printf("%s\n", "2.-Restar");
    scanf("%d", &opc);
    switch(opc){
        case 1: 
            printf ("%s\n", "Ha seleccionado suma");
            break; 
        case 2:
            printf ("%s\n", "Ha seleccionado resta");
            break; 
        default:
        printf("%s\n", "No ha seleccionado una opción válida");
        break; 
    }
    return 0; 

break;}





case 18:{
     printf("%s\n","Switch2"); 
    printf("%s\n", "Seleccione una opc");
    printf("%s\n", "a)Seleccionar opcion 1");
    printf("%s\n", "b)Selecionar opcion 2"); 
    char opc; 
    scanf("%c", &opc);
    switch (opc){
        case 'a':
        printf("%s\n", "Seleccionó opc1"); 
        break;
        case 'b':
        printf ("%s\n", "Seleccionó opc2");
        break; 
        default: 
            printf("%s\n", "Opción inválida");
    }
    return 0; 

break;}



case 19:{
     printf("%s\n","Calculadora");  
         int opc, num1, num2;  
    printf("%s\n", "Seleccione una opción:");
    printf("%s\n", "1.-Sumar");
    printf("%s\n", "2.-Restar");
    printf("%s\n", "3.-Multiplicación");
    printf("%s\n", "4.-Dividir");
    scanf("%d", &opc);
    
    switch (opc){
        case 1: //aquí voy a sumar
            printf("%s\n", "Numero 1");
            scanf("%d", &num1);
            printf("%s\n", "Numero 2"); 
            scanf("%d", &num2);
            int suma=num1+ num2; 
            printf("%s%d\n", "Resultado de la suma es=", suma);
            break;

        case 2: //aquí voy a restar
            printf("%s\n", "Numero 1");
            scanf("%d", &num1 );
            printf ("%s\n", "Numero 2"); 
            scanf("%d", &num2);   
            int resta=num1-num2; 
            printf("%s%d\n", "Resultado de la resta es=", resta); 
            break;  

        case 3: //aquí voy a multiplicar
            printf("%s\n", "Numero 1");  
            scanf("%d", &num1);
            printf("%s\n", "Numero 2");
            scanf("%d", &num2);  
            int multiplicacion=num1*num2;  
            printf("%s%d\n", "Resultado de la multiplicación=", multiplicacion);
            break;
        

        case 4: //aquí voy a dividir
            printf("%s\n", "Numero 1");
            scanf("%d", &num1);
            printf("%s\n", "Numero 2");
            scanf ("%d", &num2);
            int division=num1/num2;
            printf("%s%d\n", "Resultado de la division=", division);
            
            break; 
        default:
            printf("Opción no válida. Por favor, seleccione una opción entre 1 y 4.\n");
            break;

    }
    return 0;

break;}




case 20:{
     printf("%s\n","Imprimir Hola Mundo"); 
      printf("%s", "Hola mundo");  

break;}
    
    
    }}
