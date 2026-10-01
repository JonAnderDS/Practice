
#include <stdio.h>
#include <ctype.h> //isalpha() es para mirar si un char es una letra

int main(void) 
{
    int dictionary[26] = {0};
    int ch;
    int isAnagram = 1;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isalpha(ch)) {
            dictionary[tolower(ch) - 'a']++;
        }
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isalpha(ch)) {
            dictionary[tolower(ch) - 'a']--;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (dictionary[i] != 0) {
            isAnagram = 0;
            break;
        }
    }   

    if (isAnagram) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}