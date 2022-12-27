#include <stdio.h>

int main() {
    int year = 2022;
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 4000 != 0))
        printf("西元 %d 年為閏年。\n", year);
    else
        printf("西元 %d 年為平年。\n", year);

    return 0;
}
