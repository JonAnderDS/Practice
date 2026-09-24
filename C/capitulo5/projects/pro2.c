
#include <stdio.h>
#include <stdbool.h>

int main (void) 
{
    int hora, minutos;
    bool am;

    printf("Enter a 24-hour time: ");
    scanf("%2d :%2d", &hora, &minutos);

    if (hora > 12) {
        if (hora == 24){
            hora = 0;
            am = 0;
        }
        else{
            hora -=12;
            am = 0;
        }
    } else {
        am= 1;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d ", hora, minutos);
    if (am ? printf("AM") : printf("PM"))
    printf("\n");

    return 0;
}