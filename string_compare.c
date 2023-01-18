#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_same(char* s1, char* s2);
unsigned int len(char* s);

int main()
{
    system("cls");
    char s[] = "foo-bar";
    char st[30];
    printf("Enter: ");
    scanf("%s", st);
    if (is_same(s, st))
        printf("\tCorrect.\n\n");
    else
        printf("\tIncorrect.\n\n");
}

int is_same(char* s1, char* s2)
{
    unsigned int len1 = len(s1);
    unsigned int len2 = len(s2);
    if (len1 != len2)
        return 0;
    char* ptr1 = s1;
    char* ptr2 = s2;
    while (*ptr1 != '\0')
    {
        if (*ptr1 != *ptr2)
            return 0;
        ptr1++;
        ptr2++;
    }
    return 1;
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
