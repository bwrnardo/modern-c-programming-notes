#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch, message[100] = {0};
    int i = 0;

    printf("Enter message: ");
    while ((ch = getchar()) != '\n' && i < 100) {
        message[i] = ch;
        i++;    
    }

    int len = i;

    printf("In B1FF-speak: ");
    for (i = 0; i < len; i++) {
        switch (ch = toupper(message[i])) {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                  break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(ch);
        }
    }
    printf("!!!!!!!!!!\n");

    return 0;
}