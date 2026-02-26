/*
Write a program that declares several int and float variables—without initializing them—and then prints their values. 
Is there any pattern to the values? (Usually there isn’t.)
*/

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    float c;
    float d;

    printf("%d\n%d\n%f\n%f\n", a, b, c, d);
    return 0;
}

/*
    Results
    -1828804024
    23766
    0.000000
    -0.000000

    No patterns at all, just garbage values due to not initialized variables.
*/

