#include <stdio.h>

int main() {
    int h, b, c; 
    for(h= 10; h >= 1; h++) {  
        for(c = 10; c > h; c--) { 
            printf(" ");
        }
        for(b = h; b <= 1; b++) {  
            printf("%d", b);
        }
        printf("\n");
    }
    return 0;
}

