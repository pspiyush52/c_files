#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int get_int(char *text)
{
    int num;
    printf("%s", text);
    scanf("%d", &num);
    return num;
}

char *get_string(char *text)
{
    char *str;
    printf("%s", text);
    gets(str);
    return str;
}

void print(char *text)
{
    printf("%s", text);
}

int get_num(char* s)
{
    int x = 0;
    int mul = 1;

    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        x += (s[i] - 48) * mul;
        mul *= 10;
    }
    return x;
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

#endif // MY_H_INCLUDED
