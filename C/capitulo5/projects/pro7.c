
#include <stdio.h>

int main (void) 
{
    int i1,i2,i3,i4;
    int max1, max2, min1, min2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    min1 = i2;
    max1 = i1;
    min2 = i4;
    max2 = i3;

    if (i1<i2){
        min1 = i1;
        max1 = i2;
    }
    if (i3<i4){
        min2 = i3;
        max2 = i4;
    }

    if (max1 < max2) {
        max1 = max2;
    }

    if (min1 > min2) {
        min1 = min2;
    }

    printf("Largest: %d \n", max1);
    printf("Smallest: %d \n", min1);

    return 0;
}