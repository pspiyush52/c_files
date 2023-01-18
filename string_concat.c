#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concat(char* s1, char* s2);
unsigned int len(char* s);

int main()
{
    system("cls");
    char s[30] = "Piyush ";
    char* cs = concat(s, "Singh");
    printf("\tConcatenated string: %s\n\n", cs);
    printf("\tLength: %d\n\n", strlen(cs));
    printf("\tLength: %d\n\n", len(cs));
    printf("\tTerminating character: %d\n\n", cs[12]);
    free(cs);
}

char* concat(char* s1, char* s2)
{
    int n1 = len(s1), n2 = len(s2);
    int new_len = n1 + n2 + 1;
    char* s = malloc(new_len * sizeof(char));
    char* ptr = s1;
    char* n = s;
    while (*ptr != '\0')
    {
        *n = *ptr;
        ptr++;
        n++;
    }
    ptr = s2;
    while (*ptr != '\0')
    {
        *n = *ptr;
        ptr++;
        n++;
    }
    *n = '\0';
    return s;
}

unsigned int len(char* s)
{
    char* ptr = s;
    unsigned int count = 0;
    while (*ptr != '\0')
    {
        ptr++;
        count++;
    }
    return count;
}
