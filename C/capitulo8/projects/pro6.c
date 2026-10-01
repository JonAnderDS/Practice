
#include <stdio.h>
#include <ctype.h>

int main (void) 
{
    char sentence[26];
    char ch;
    int i=0;

    printf("Enter message: ");
    while((ch = getchar()) != '\n'){
        ch = toupper(ch);
        sentence[i] = ch;
        i++;
    }

    printf("In B1FF-speak: ");
    for(i = 0; i < (int) (sizeof(sentence) / sizeof(sentence[0])); i++){
        switch (sentence[i]){
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(sentence[i]);
                break;
        }
    }

    printf("!!!!!!!!!!\n");



    return 0;
}