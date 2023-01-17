#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 50

char* stcat(char* s1, char* s2);
char* strip(char* s);

int main(void)
{
    char s[N];
    printf("Enter your name: ");
    fgets(s, N, stdin);
    system("cls");
    strip(s);
    if (isupper(s[0]))
        fputs(stcat(s, " Singh"), stdout);
    else
        fputs(stcat(s, " singh"), stdout);
}

char* stcat(char* s1 ,char* s2)
{
    int n1 = strlen(s1), n2 = strlen(s2);
    int n = n1 + n2;
    char* st = malloc((n+1) * sizeof(char));
    for (int i=0; i<n1; i++)
        st[i] = s1[i];
    
    for (int i=n1, j=0; i<n; j++, i++)
        st[i] = s2[j];

    st[n] = '\0';
    return st;
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
