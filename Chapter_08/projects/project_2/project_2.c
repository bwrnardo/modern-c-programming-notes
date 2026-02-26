#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int repeated[10] = {0}; 
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);

    
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

    return 0;
}