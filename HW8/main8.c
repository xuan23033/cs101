#include <stdio.h>
int main() {
    int n = 4;
    for(int i= n; i>=1; --i){
        printf("%*c", n-i+1, ' ');
        for(int j=1; j<=i*(2)-1; ++j){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 2; i <= n ; i++) {
        printf("%*c", n-i+1, ' ');
        for(int j = 1; j <= i*(2)-1 ; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}