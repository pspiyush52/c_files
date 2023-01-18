#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define PASS "foo-bar"

int checkpass(char* prompt, char* pass);
int is_same(char* s1, char* s2);
unsigned int len(char* s);

int main(void)
{
    system("cls");
    if (checkpass("\tEnter password: ", PASS))
        printf("\n\n\tCorrect.\n\n");
    else
        printf("\n\n\tIncorrect.\n\n");
}

int checkpass(char* prompt, char* pass)
{
    printf("%s", prompt);
    int N = len(pass) + 1;
    char s[N];
    char* ptr = s;
    char ch = 0;
    int counter = 0;
    do
    {
        ch = getch();
        printf("*");
        *ptr = ch;
        ptr++;
        counter++;
    } while (ch != 13 && counter < N-1);

    *ptr = '\0';
    if (is_same(s, pass))
        return 1;
    
    return 0;
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
