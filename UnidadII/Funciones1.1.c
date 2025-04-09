#include <stdio.h>
void func1 (void){
    printf("segunda funcion");
    return;
}
void func2 (void){
    printf("tercera funcion");
    return;
}
int main(){
    printf("primera funcion llamada main()");
    func1(); //segunda funcion llamada
    func2(); //tercera funcion llamada
    printf("main se termina");
    return 0; //devuelve control al sistema
}