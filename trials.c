#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void strp(char*);

int main(void)
{
    int num = 4;
    printf("%f", (float) num/3);
    return 0;
}

void strp(char* s)
{
    while (*++s != '\0');
    *--s = '\0';
}
