#include <stdio.h>

int main(void) 
{
    char ch, terminating, sentence[100];
    int i = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch == '?' || ch == '!' || ch == '.') {
            terminating = ch;
            break;
        }
        sentence[i++] = ch;
    }

    for (int j = i - 1; j >= 0 ; j--) {        
        if (j == 0) {
            for (int k = j; k < i; k++) {
                if (sentence[k] == ' ') 
                    break;
                    
                printf("%c", sentence[k]);
            }
        }
        else if (sentence[j] == ' ') {
            for (int k = j + 1; k < i; k++) {
                if (sentence[k] == ' ')
                    break;

                printf("%c", sentence[k]);
            }
            printf(" ");    
        }    
    }
    printf("%c\n", terminating);
}