#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

void _strlower(char*);

int main()
{
    system("cls");
    char s[] = "AlPInet";
    _strlower(s);
    printf("%s\n", s);
}

void _strlower(char* s)
{
    while (*s != '\0')
    {
        if (*s < 123 && *s > 96)
            *s -= 32;
        s++;
    }
}
