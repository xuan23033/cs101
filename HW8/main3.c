#include <stdio.h>
#define SIZE 32

void get_binary(int num) {

    int i, b[SIZE] = {0};

    for(i = 1; i <= SIZE; i++) {
        b[SIZE - i] = num % 2;
        num /= 2;
    }

    for(i = 0; i < SIZE; i++)
        printf("%d", b[i]);
        printf("\n");

}

int main(void) {

    int n=16;
    get_binary(n);
    
    
    return 0;

}
