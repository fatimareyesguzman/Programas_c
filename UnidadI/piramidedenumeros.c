#include<stdio.h>
int main(){
    int h, b;
    for(h=10; h>=1;h--){
    for(b=1; b<=h; b++){
printf("%d", b);
}
printf("\n", h);
}
return 0; 
}