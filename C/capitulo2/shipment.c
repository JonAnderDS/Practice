
#include <stdio.h>
#define INCHES_PER_POUND 166


int main (void){
    int height, length, width, volume, weight;

    /*height = 8;
    length = 12;
    width = 10;*/

    printf("Enter the height of the box:");
    scanf("%d", &height);
    printf("Enter the length of the box:");
    scanf("%d", &length);
    printf("Enter the width of the box:");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND -1) / INCHES_PER_POUND;

    printf("Dimension: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);


    return 0;
}