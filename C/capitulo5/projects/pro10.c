
#include <stdio.h>

int main (void) 
{
    int i1;

    printf("Enter numerical grade: ");
    scanf("%d", &i1);

    i1 /= 10;

    printf("Letter grade: ");
    switch (i1) {
        case 10: case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default: 
            printf("F\n");
            break;
    }

    return 0;
}