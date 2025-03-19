#include<stdio.h>
int main(){
int espacios=5; int asterisco=1; 
for( int i=2; i>=0; i--){
    for(int j=1; j<=espacios; j++){
        printf("%4s", " ");
    }
    espacios--; 
    for(int k=1; k<=asterisco; k++){
        printf("%4s", "*"); 
    }
        asterisco =asterisco + 2;
        printf("\n");
    }
        int espa=0; int aste=9; 
for(int i=2; i>=0; i--){
        for(int j = 0; j <= espa; j++){
            printf("%4s", " ");
        }
        espa++;
     for(int k=1; k<= aste; k++){
            printf("%4s", "*"); 
        }
        aste = aste - 2;
        printf("\n");
    }
    int esp=5;
    int ast=7;
    for(int i=2; i>=0; i--){
        for(int j = 1; j <= esp; j++){
            printf("%4s", "/");
        }
        esp--;
        for(int k=1; k<= ast; k++){
            printf("%4s", "*"); 
        }
        ast = ast + 2;
        printf("\n");
    }
}




