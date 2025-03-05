#include <stdio.h>
int main (){ 

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
}