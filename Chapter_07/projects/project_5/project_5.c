#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char ch;
    int scrabble = 0;

    printf("Enter a word: ");

    while ((ch = getchar()) != '\n') {
        
        switch (toupper(ch)) {
            case 'A': case 'E': case 'I': case 'L': case 'N':
            case 'O': case 'R': case 'S': case 'T': case 'U':
                scrabble += 1;
                break;
            case 'D': case 'G':
                scrabble += 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                scrabble += 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                scrabble += 4;
                break;
            case 'K':
                scrabble += 5;
                break;
            case 'J': case 'X':
                scrabble += 8;
                break;
            case 'Q': case 'Z':
                scrabble += 10;
                break;
        }        
    }
    printf("Scrabble value: %d\n", scrabble);

    return 0;
}