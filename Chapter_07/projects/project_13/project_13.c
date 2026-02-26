#include <stdio.h> 

int main(void)
{
    // One to handle spaceless word at the end  
    int word = 1, len = 0;
    char ch;

    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n') {
        if (ch == ' ')
            word++;
        else
           len++;
    } 

    float length = (float) len / word;

    printf("Average word length: %.1f", length);

    return 0;
}