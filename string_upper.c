#include <stdio.h>
#include <stdlib.h>

void strupper(char* s);

int main()
{
    system("cls");
    char s[50];
    printf("Enter something: ");
    fgets(s, 50, stdin);
    strupper(s);
    printf("Uppercased: %s", s);
}

void strupper(char* s)
{
    char* ptr = s;
    while (*ptr != '\0')
    {
        if (*ptr > 96 && *ptr < 123)
            *ptr -= 32;
        ptr++;
    }
}
