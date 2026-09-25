
#include <stdio.h>

int main (void) {
    while(1){
        goto final;
        printf("Hellooow");

    }
    final: ;
    printf("Hellooow");
    return 0;
}