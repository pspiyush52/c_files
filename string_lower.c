#include <stdio.h>
#include <stdlib.h>

void strlower(char* s);

int main()
{
    system("cls");
    char s[50];
    printf("Enter something: ");
    fgets(s, 50, stdin);
    strlower(s);
    printf("Lowercased: %s", s);
}

void strlower(char* s)
{
    char* ptr = s;
    while (*ptr != '\0')
    {
        if (*ptr > 64 && *ptr < 91)
            *ptr += 32;
        ptr++;
    }
}
