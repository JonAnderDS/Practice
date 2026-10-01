
#include <stdio.h>

int main (void) {

    int dictionary[26] = {0};
    char ch;
    int i;

    printf("Enter first word: ");
    while((ch=getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            i = ch - 'a';
            dictionary[i] += 1;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            i = ch - 'A';
            dictionary[i] += 1;
        }
    }

    printf("Enter second word: ");
    while((ch=getchar()) != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            i = ch - 'a';
            dictionary[i] -= 1;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            i = ch - 'A';
            dictionary[i] -= 1;
        }
    }

    int isAnagram = 1;
    for(int i = 0; i < 26 ; i++) {
        if(dictionary[i]){
            isAnagram = 0;
            break;
        }
    }   

    if(isAnagram){
        printf("The words are anagrams.\n");
    }else{
        printf("The words are not anagrams.\n");
    }

    return 0;
}