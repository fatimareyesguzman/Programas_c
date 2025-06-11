#include <stdio.h>

void hanoi(char torre1, char torre2, char torre3, int disco) {
    if (disco == 1) {
        printf("Mover %d  desde torre %c a torre %c", disco, torre1, torre3);
    } else {
        hanoi(torre1, torre3, torre2, disco - 1);
        printf("\nMover disco %d desde torre %c a torre %c\n", disco, torre1, torre3);
        hanoi(torre2, torre1, torre3, disco - 1);
    }
}

int main() {
    int disco;
    char torre1, torre2, torre3;

    printf("Dame tu torre1: ");
    scanf(" %c", &torre1);  
    printf("Dame tu torre2: ");
    scanf(" %c", &torre2);
    printf("Dame tu torre3: ");
    scanf(" %c", &torre3);
    printf("Dame el numero de discos: ");
    scanf("%d", &disco);
    printf("Hanoi:");
    hanoi(torre1, torre2, torre3, disco);

    return 0;
}
