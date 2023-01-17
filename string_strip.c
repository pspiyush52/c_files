#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 50

char* strip(char* s);

int main(void)
{
    char s[N];
    printf("Enter your name: ");
    fgets(s, N, stdin);
    system("cls");
    strip(s);
    if (isupper(s[0]))
        fputs(strcat(s, " Singh"), stdout);
    else
        fputs(strcat(s, " singh"), stdout);
}

char* strip(char* s)
{
    char* d = s;
    char* c = s;
    while (*c != '\0')
    {
        if (*c == ' ' || *c == '\n' || *c == '\t')
            c++;
        else
            *d++ = *c++;
    }
    *(d) = '\0';
    return s;
}
