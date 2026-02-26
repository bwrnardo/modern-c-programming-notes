/*
 * Write a program that computes the volume of a shpere with a 10-meter radius, using the formula v = 4/3πr³. 
 * Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) 
 * Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r³
 */

#include <stdio.h>

int main(void)
{
    float r = 10.0f;
    float pi = 3.14159265359f;
    // If you try to compute as 4/3, it comes out as 3141.59
    float v = 4.0f / 3.0f * pi * (r * r * r); 

    // 4188.79
    printf("%.2f\n", v);

    return 0;
}