#include <stdio.h>

int main() {
    int i = 10;
    
    if(i == 0) {
      printf("\t zero \n");
    } else if(i % 2 != 0) {
       printf("\t odd \n");
    } else {
       printf("\t even \n");
    }
    
    return 0;
}
