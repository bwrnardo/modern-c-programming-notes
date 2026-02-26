#include <stdio.h>

int main(void)
{
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5f;
    double d = 7.5;

    /*
    
    a) c * i -> -3, int type, char becomes int
    b) s + m -> 7, long type, short promotes to long
    c) f / c -> 6.5, float type, char becomes float
    d) d / s -> 3,75, double type, short becomes double
    e) f - d -> -1.0, double type, float promotes to double
    f) (int) f -> 7, int type, float gets casted to int    
    
    */
}