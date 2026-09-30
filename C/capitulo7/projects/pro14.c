
#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;
    double y = 1;
    double xy = 0;
    double yPasado;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do {
        xy = x / y;
        yPasado = y;
        y = (y+xy) / 2;
    } while(fabs(y -yPasado) > 0.00001 * y);

    
    printf("Square root: %.5f\n", y);

    return 0;
}