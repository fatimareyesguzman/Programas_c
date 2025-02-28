#include<stdio.h>
int main (){
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
    
}
   