#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

void swap(char* s);

int main(void)
{
    system("cls");
    char s[50], ch;
    printf("Enter a string to be reversed: ");
    fgets(s, 50, stdin);
    strip(s);
    swap(s);
    printf("\n\tReversed string: %s\n\n", s);
}

void swap(char* s)
{
    int n = strlen(s) - 1;
    char ch;
    char* ptr = s;
    for (int i=0, j=n; i < j; i++, j--)
    {
        ch = s[i];
        s[i] = s[j];
        s[j] = ch;
    }
}
