#include <stdio.h>
int main() {
    int n = 4;
    for(int i = 1; i <= n-1 ; i++) {
        printf("%*c", n-i, ' ');
        for(int j = 1; j <= i*(2)-1 ; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int l = 1; l<=2; l++) {
        for(int k = 1; k<=n*(2)-1; k++) {
        printf("*");
    }
    printf("\n");
    }
    for(int m = 1; m<=n; m++) {
        printf("*     *\n");
    }
    for(int o = 1; o<=n*(2)-1; o++) {
        printf("*");
    }
    printf("\n");
    return 0;
}