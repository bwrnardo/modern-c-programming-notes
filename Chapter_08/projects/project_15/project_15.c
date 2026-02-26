#include <stdio.h>

int main(void) 
{
    char ch[80], encrypted[80], c;
    int n = 0, i = 0;

    printf("Enter a message to be encrypted: ");
    while ((c = getchar()) != '\n') {
        ch[i++] = c;

        if (i > 80) 
            break;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    for (int j = 0; j < i; j++) {
        if (ch[j] >= 'A' && ch[j] <= 'Z') {
            encrypted[j] = ((ch[j] - 'A') + n) % 26 + 'A';
            printf("%c", encrypted[j]);
        }
        else if (ch[j] >= 'a' && ch[j] <= 'z') {
            encrypted[j] = ((ch[j] - 'a') + n) % 26 + 'a';
            printf("%c", encrypted[j]);
        }
        else {
            encrypted[j] = ch[j];
            printf("%c", encrypted[j]);
        }        
    }
    printf("\n");

    return 0;
}