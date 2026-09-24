
#include <stdio.h>

int main (void) 
{
    int number, digitos;

    printf("Enter a number: ");
    scanf("%4d", &number);

    if (number >= 0 && number <=9) {
        digitos = 1;
    } else if (number <=99) {
        digitos = 2;
    } else if (number <= 999) {
        digitos = 3;
    } else {
        digitos = 4;
    }

    printf("The number %d has %d digits\n", number, digitos);

    return 0;
}