#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[100];
    printf("\n\nInput a string to capitalize: ");
    gets(s);
    printf("\n\nOutput string: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n\n");
    getchar();
}
