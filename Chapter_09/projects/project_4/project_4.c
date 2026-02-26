#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) 
{
    int first_word[26] = {0}, second_word[26] = {0};    

    printf("Enter first word: ");
    read_word(first_word);

    printf("Enter second word: ");
    read_word(second_word);
    
    if (equal_array(first_word, second_word))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

void read_word(int counts[26])
{
    char c;
    while ((c = getchar()) != '\n') {
        c = tolower(c);
        if (isalpha(c)) 
            counts[c - 'a']++;
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i])
            return false;
    }
    return true;
}