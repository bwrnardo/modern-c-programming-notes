#include <ctype.h>
#include <stdio.h>

#define ALPHABET 26

int main(void)
{
    char ch;
    int count = 0;
    int scrabble[ALPHABET] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
                              1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {
        count += scrabble[toupper(ch) - 65]; // ascii for A
    }
    printf("Scrabble value: %d\n", count);

    return 0;
}