
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    char firstInitial;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) == ' ');

    firstInitial = ch;

    while ((ch = getchar()) != ' ');

    while ((ch = getchar()) == ' ');

    putchar(ch);

    while ((ch = getchar()) != ' ' && ch !='\n') {
        putchar(ch);
    }

    printf(", %c. \n", firstInitial);

    return 0;
}