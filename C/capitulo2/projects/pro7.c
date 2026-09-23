
#include <stdio.h>

int main (void)
{
    int amount, cant20, cant10, cant5, cant1;

    amount = 93;

    cant20 = amount / 20;
    cant10 = (amount - 20 * cant20) / 10;
    cant5 = (amount - 10 * cant10 - 20 * cant20) / 5;
    cant1 = (amount - 5 * cant5 - 10 * cant10 - 20 * cant20) / 1;

    printf("$20 bills: %d\n", cant20);
    printf("$10 bills: %d\n", cant10);
    printf("$5 bills: %d\n", cant5);
    printf("$1 bills: %d\n", cant1);


    return 0;
}