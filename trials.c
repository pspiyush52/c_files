#include <stdio.h>
#include <stdlib.h>

void endl();

int main(void)
{
    char s[] = "#0af";
    int n = sizeof(s) / sizeof(char);
    printf("\nSizeof array: %d\n\n", n);
    for (int i=0; i<n; i++)
    {
        printf("%c ", s[i]);
        if (s[i] == '\0')
            printf("NULL");
        endl();
    }
    endl();
}

void endl()
{
    printf("\n");
}
