
#include <stdio.h>

#define MAX_SIZE 80

int main (void) {

    char sentence[MAX_SIZE];
    int mover;
    int length = 0;
    char ch;
    

    printf("Enter message to be encrypted: ");
    while(length < MAX_SIZE && (ch=getchar()) != '\n') {
        sentence[length] = ch;
        length++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &mover);

    printf("Encrypted message: ");
    for(int i = 0; i < length; i++) {
        ch = sentence[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a') + mover) % 26 + 'a';
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A') + mover) % 26 + 'A';
        }
        putchar(ch);
    }
    putchar('\n');

    return 0;
}