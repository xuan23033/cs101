#include <stdio.h>

int main() {
    int year = 2022;
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 4000 != 0)) {
        printf("\t 西元 %d 年為閏年。\n", year);
    } else {
        printf("\t 西元 %d 年不為閏年。\n", year);
    }
    
    return 0;
}
