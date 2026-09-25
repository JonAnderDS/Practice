
#include <stdio.h>

int main (void) 
{
    int num1, num2, aux, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < num2){
        aux = num2;
        num2 = num1;
        num1 = aux;
    }

    gcd = num1;

    while(num2 != 0){
        aux = num1 % num2;
        num1 = num2;
        num2 = aux;
    }
    gcd = num1;
    

    printf("Greates common divisor: %d\n", gcd);

    return 0;
}