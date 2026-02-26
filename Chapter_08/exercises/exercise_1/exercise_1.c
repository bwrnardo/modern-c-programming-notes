#include <stdio.h>

int main(void)
{
    int a[5];
    
    printf("%zu\n", sizeof(a) / sizeof(a[0]));
    printf("%zu\n", sizeof(a) / sizeof(int));
    
    return 0;
}

/*

my guess is that if I were to change the variable type I would need to change to statement, while using sizeof(a[0]) I dont need to change anything

*/