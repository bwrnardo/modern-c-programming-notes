#include <stdio.h>

int main(void)
{
    int digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &digit);
    
    if (digit == 10) printf("ten.\n");
    else if (digit == 11) printf("eleven.\n");
    else if (digit == 12) printf("twelve.\n"); 
    else if (digit == 13) printf("thirteen.\n");
    else if (digit == 14) printf("fourteen.\n");
    else if (digit == 15) printf("fifteen.\n");
    else if (digit == 16) printf("sixteen.\n");
    else if (digit == 17) printf("seventeen.\n");
    else if (digit == 18) printf("eighteen.\n");
    else if (digit == 19) printf("nineteen.\n");
    else {
        switch (digit / 10) {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break; 
            case 4: 
                printf("fourty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6: 
                printf("sixty");
                break;
            case 7: 
                printf("seventy");
                break;
            case 8: 
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break; 
        }
        switch (digit % 10) {
            case 1:
                printf("-one.\n");
                break;
            case 2:
                printf("-two.\n");
                break;
            case 3:
                printf("-three.\n");
                break; 
            case 4: 
                printf("-four.\n");
                break;
            case 5:
                printf("-five.\n");
                break;
            case 6: 
                printf("-six.\n");
                break;
            case 7: 
                printf("-seven.\n");
                break;
            case 8: 
                printf("-eight.\n");
                break;
            case 9:
                printf("-nine.\n");
                break; 
            default:
                printf(".\n");
        }
    }
    return 0;
}