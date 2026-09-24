
#include <stdio.h>

int main (void)
{
    int number, aux, final1, final2, final3;
    printf("Enter a three-digit number: ");
    scanf("%3d", &number);

    final3 = number / 100;
    aux = number % 100;
    final2 = aux / 10;
    final1 = aux % 10;

    printf("The reversal is: %d%d%d\n", final1,final2, final3);


    return 0;
}