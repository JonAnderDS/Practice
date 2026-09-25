
#include <stdio.h>

int main (void) 
{
    float max=0.0f, numero;
    for(;;){
        printf("Enter a number: ");
        scanf("%f", &numero);
        if (numero == 0.0f) break;
        if (numero > max) max = numero;

    }

    printf("The largest number entered was %.2f\n", max);

    return 0;
}