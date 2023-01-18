#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "my.h"

#define PASS "foo-bar"

int checkpass(char* prompt, char* pass);

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
