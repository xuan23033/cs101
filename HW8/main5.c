#include <stdio.h>
int rows = 7;


void print_spaces(int r) {
    for(int i = 1;i<=(rows-r);i++) {
        printf(" ");
    }
}

void print_stars(int r) {
    for(int j = 1;j<=r*(2)-1;j++) {
        printf("*");
    }
    printf("\n");
}

void print_trunck(int r) {
    for(int k = 1;k<=r;k++) {
        printf("      *\n");
    }
}

void print_top(int r) {
    for(int l = 1;l<=r;l++) {
        printf("  ");
    }
    printf("X'mas tree!\n");
}
int main() {
    for(int i = 1;i<=1;++i) {
        print_top(i);
    }
    for(int i = 1;i<=3;++i) {
        print_spaces(i);
        print_stars(i);
    }
    for(int i = 1;i<=5;++i) {
        print_spaces(i);
        print_stars(i);
    }
    for(int i = 1;i<=7;++i) {
        print_spaces(i);
        print_stars(i);
    }
    for(int i = 2;i<=3;++i) {
        print_trunck(i);
    }
    return 0;
}