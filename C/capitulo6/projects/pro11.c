
#include <stdio.h>

int main (void)
{
    int number;
    double e = 1.0f;
    double factorial = 1.0f;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The aproximate e is: ");
    for(int i = 1; i <= number; i++){
        factorial*=i;
        e+= 1/factorial;
    }
    
    printf("%.5f\n", e);


    return 0;
}