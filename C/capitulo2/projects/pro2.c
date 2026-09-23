
#include <stdio.h>
#define SPHERE_RADIUS 10
#define PI 3.141592653589793

int main (void)
{
    float volume, sphr;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &sphr);

    volume = 4.0f/3.0f * PI * sphr * sphr * sphr;
    printf("Volume: %g \n", volume);
    
    return 0;
}