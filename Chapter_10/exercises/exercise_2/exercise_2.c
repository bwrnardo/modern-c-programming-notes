#include <stdio.h>

int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}

/*

a) The f function -> b (local), c, d
b) The g function -> a, b, c (local)
c) Block -> b, c (g function), a (local), d
d) Main -> b, c (local), d

*/