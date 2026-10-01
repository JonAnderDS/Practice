#include <stdio.h>

#define MAX_SIZE 100

int main(void) 
{
    char sentence[MAX_SIZE];
    char lastChar = '\0';
    int ch;
    int length = 0;

    printf("Enter a sentence: ");
    while (length < MAX_SIZE && (ch = getchar()) != '\n') {
        if (ch == '.' || ch == '?' || ch == '!') {
            lastChar = ch;
            break;            
        }
        sentence[length] = ch;
        length++;
    }

    printf("Reversal of sentence: ");

    int i = length - 1;

    while (i >= 0) {
        int finalPalabra = i;

        while (i >= 0 && sentence[i] != ' ') {
            i--;
        }

        for (int j = i + 1; j <= finalPalabra; j++) {
            putchar(sentence[j]);
        }

        if (i >= 0) {
            putchar(' ');
            i--;
        }
    }

    if (lastChar != '\0') {
        printf("%c\n", lastChar);
    } else {
        printf("\n");
    }

    return 0;
}