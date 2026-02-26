// Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere.

#include <stdio.h>

int main(void)
{
    float pi = 3.14159265359f;
    float r;
    
    printf("Enter the radius for a sphere: ");
    scanf("%f", &r);

    printf("The volume of the sphere with radius %.f is %.2f.\n", r, 4.0f / 3.0f * pi * (r * r * r)); 

    return 0;
}