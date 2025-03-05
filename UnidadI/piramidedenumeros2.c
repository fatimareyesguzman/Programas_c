#include<stdio.h>
int main(){
    int h, b;
    for(h=0; h<=10; h++){
        for(b=10; b>=h; b--){
            printf("%d", b);
        }
        printf("\n");
    }
    


}