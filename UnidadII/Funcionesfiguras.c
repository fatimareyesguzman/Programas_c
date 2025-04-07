#include <stdio.h>

#define PI 3.141516

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

int main (){
    union dato resultado;
    int opc, l, b, h, r, D, d, a, ladoaltura, lado, ladoh; 
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


    scanf("%d", &opc);
    switch(opc){
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
    return 0; 
}


