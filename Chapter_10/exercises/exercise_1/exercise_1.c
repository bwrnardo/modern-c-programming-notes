#include <stdio.h>

int a;

void f(int b) 
{
    int c;
}

void g(void) 
{
    int d;
    {
        int e;
    }
}

int main(void)
{
    int f;
}

/*

a) The f function -> a, b and c
b) The g function -> a, and d
c) Block -> a, d and e
d) Main -> a and f

*/