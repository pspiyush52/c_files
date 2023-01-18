#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void endl();

int main(void)
{
    char s[50];
    // fgets(s, 50, stdin);
    gets(s);
    // fputs(s, stdout);
    // printf("%s", s);
    puts(s);
    printf("--ENDL--");
}

void endl()
{
    printf("\n");
}
