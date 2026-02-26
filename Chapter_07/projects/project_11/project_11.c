#include <stdio.h>

int main(void)
{
    char ch, name; 

    printf("Enter a first and a last name: ");

    ch = getchar();

    while (getchar() != ' ')
        continue;

    while ((name = getchar()) != '\n' && name != ' ') {
        putchar(name);
    }

    printf(", %c.\n", ch);

    return 0;
}