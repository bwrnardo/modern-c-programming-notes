#include <stdio.h>

#define FIB_LENGTH 40

int main(void) 
{
    unsigned long fib_numbers[FIB_LENGTH];
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;

    printf("Fibonacci sequence: %lu %lu", fib_numbers[0], fib_numbers[1]);

    for (int i = 2; i < FIB_LENGTH; i++)
    {
        fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
        printf(" %lu", fib_numbers[i]); 
    }
    printf("\n");
    
    return 0;
}