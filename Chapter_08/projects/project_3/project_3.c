#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    long n;
    
    printf("Enter a number (0 to terminate): ");
    scanf("%ld", &n);

    while (n > 0) {
        int repeated[10] = {0}; 
        int digit = 0;

        while (n > 0) {
            digit = n % 10;
            repeated[digit] += 1;
    
            n /= 10;
        }
    
        printf("Digit:     ");
        for (int i = 0; i < 10; i++) {
            printf(" %d ", i);
        }
        printf("\nOccurences:");
        for (int j = 0; j < 10; j++) {
            printf(" %d ", repeated[j]);
        }
        
        printf("\n\nEnter a number (0 to terminate): ");
        scanf("%ld", &n);
    }
    return 0;
}