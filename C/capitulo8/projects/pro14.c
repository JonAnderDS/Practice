
#include <stdio.h>
#include <ctype.h>

int main (void) 
{
    char sentence[32];
    char lastChar;
    char ch;
    int i=0;

    printf("Enter a sentence: ");
    while (i < 33 && (ch = getchar()) != '\n' ) {
        if (ch == '.' || ch == '?' || ch == '!') {
            lastChar = ch;
            break;            
        }
        sentence[i] = ch;
        i++;
    }

    printf("Reversal of sentence: ");
    i=31;
    int inicioPalabra = i, finalPalabra= i;

    while(i>=0){
        finalPalabra = i;
        while(sentence[i]!=' '){
            i--;
            if(i <0){
                break;
            }
        }
        inicioPalabra = i+1;

        for(int j = inicioPalabra; j <= finalPalabra; j++){
            putchar(sentence[j]);
        }
        
        i--;
        if(i>0){
            putchar(' ');
        }

    }

    printf("%c\n", lastChar);



    return 0;
}