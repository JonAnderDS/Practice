
#include <stdio.h>

int main(void)
{
    char ch;
    int cantPalabras = 0;
    int cantLetras = 0;
    int enPalabra = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            enPalabra = 0; 
        } else {
            cantLetras++;
            if (!enPalabra) {
                enPalabra = 1;
                cantPalabras++;
            }
        }
    }

    float mediaLetPal = (float) cantLetras / cantPalabras;
    
    printf("Average word length: %.1f\n", mediaLetPal);

    return 0;
}