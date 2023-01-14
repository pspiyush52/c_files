#include <stdio.h>

int hex_fmt(void)
{
    int x, choice;
    printf("\n\nEnter a number to view it's hexadecimal notation: ");
    scanf("%d", &x);
    printf("\nDo you want the hex notation in:\n 1. Uppercase\n 2. Lowercase\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: printf("\n\nHexadecimal notation of %d is 0x%X", x, x);
                break;
        case 2: printf("\n\nHexadecimal notation of %d is 0x%x", x, x);
                break;
        default: printf("\n\nIncorrect Response!\n\nmoving on...");
                 break;
    }
    printf("\n\n");
}

int octal_fmt(void)
{
    int x;
    printf("\n\nEnter a number to view it's Octal notation: ");
    scanf("%d", &x);
    printf("\n\nOctal notation of %d is %o", x, x);
    printf("\n\n");
}

int main(void)
{
    int oct = 01121;
    printf("\n\nOctal number: %o", oct);
    printf("\n\nDecimal value of 0%o: %d", oct, oct);
    printf("\n\n");
    hex_fmt();
    octal_fmt();
    getch();
}
