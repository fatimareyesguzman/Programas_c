#include<stdio.h>
int main(){
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

   return 0;



}