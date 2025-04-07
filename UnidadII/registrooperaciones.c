#include<stdio.h>
int main(){
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
   return 0;




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
    return 0;


}