#include <stdio.h>

int main(void)
{
    char ch, last_name[20];
    int i = 0; 

    printf("Enter a first and a last name: ");

    ch = getchar();

    while (getchar() != ' ')
        continue;

    while ((last_name[i] = getchar()) != '\n' && last_name[i] != ' ') {
        putchar(last_name[i++]);
    }

    printf(", %c.\n", ch);

    return 0;
}