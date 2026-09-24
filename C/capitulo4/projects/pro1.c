
#include <stdio.h>

int main (void)
{
    int number, final1, final2;
    printf("Enter a two-digit number: ");
    scanf("%2d", &number);

    final2 = number/10;
    final1 = number % 10;

    printf("The reversal is: %d%d\n", final1,final2);


    return 0;
}