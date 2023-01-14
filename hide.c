#include<stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch;
    char s[20];
    int i=0;
    while ((ch = getch()) != '\r')
    {
        s[i] = ch;
        printf("*");
        i++;
    }

    printf("\n\nYou entered: ");
    for (int j = 0; j < i; j++)
        printf("%c", s[j]);
    printf("\n");
}

