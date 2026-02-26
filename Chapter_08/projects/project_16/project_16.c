#include <ctype.h>
#include <stdio.h>

int main(void) 
{
    char c;
    int i, occurence[26] = {0};    

    printf("Enter first word: ");
    while ((c = getchar()) != '\n') {
        c = tolower(c);
        if (isalpha(c)) 
            occurence[c - 'a']++;
    }

    printf("Enter second word: ");
    while ((c = getchar()) != '\n') {
        c = tolower(c);
        if (isalpha(c)) 
            occurence[c - 'a']--;
    }
    
    for (i = 0; i < 26; i++) {
        if (occurence[i] != 0) {
            printf("The words are not anagrams.\n");
            return 1;
        }   
    }
    printf("The words are anagrams.\n");

    return 0;
}