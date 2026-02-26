#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int hour, minute;
    char format;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hour, &minute, &format);

    switch (toupper(format)) {
        case 'P':
            printf("Equivalent 24-hour time: %d:%d", hour+12, minute);
            break;
        case 'A':
            printf("Equivalent 24-hour time: %d:%d", hour, minute);
            break;    
        default:
            printf("Invalid time\n");
    }

    return 0;
}