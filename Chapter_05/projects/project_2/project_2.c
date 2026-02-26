#include <stdio.h>

int main(void)
{
    int hours, minutes;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    if (hours >= 13 && hours <= 24) {
        hours -= 12;
        printf("Equivalent 12-hour time: %d:%.2d PM", hours, minutes);
    }

    else 
        printf("Equivalent 12-hour time: %d:%.2d AM", hours, minutes);
    

    return 0;
}