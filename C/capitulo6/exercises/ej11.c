
#include <stdio.h>

int main (void) {
    int sum, i;

    sum =0;
    for(i=0; i<10;i++){
        if(i%2){
            printf("%d\n", i);
            continue;
        }
        printf("%d\n", i%2);
        sum+=1;
    }

    printf("%d\n", sum);

    return 0;
}