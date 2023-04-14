#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("Enter a string : ");
    fgets(s, 99, stdin);
    int n = strlen(s) - 1;
    for (int i = 0; i < n; i++)
    {
        printf("%-*.*s\n", n, i + 1, s);
    }
    for (int i = n; i > 0; i--)
    {
        printf("%-*.*s\n", n, i, s);
    }
}
