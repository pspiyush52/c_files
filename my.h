#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED
#include <stdio.h>
#include <conio.h>
#include <string.h>

char* strip(char* s);

int get_int(char *text)
{
    int num;
    printf("%s", text);
    scanf("%d", &num);
    return num;
}

char* get_string(char *text)
{
    char* str = malloc(50 * sizeof(char));
    printf("%s", text);
    fgets(str, 50, stdin);
    strip(str);
    return str;
}

void print(char *text)
{
    printf("%s", text);
}

int get_num(char* s)
{
    int x = 0;
    int mul = 1;

    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        x += (s[i] - 48) * mul;
        mul *= 10;
    }
    return x;
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

char* strip(char* s)
{
    char* front = s;
    char* rear = s;
    char* st = s;
    while (*front == ' ' || *front == '\t')
        front++;
    while (*rear != '\0')
        rear++;
    rear--;
    while (*rear == ' '|| *rear == '\t' || *rear == '\n')
        rear--;

    while (front != rear)
    {
        *st++ = *front++;
    }
    *st = *rear;
    *++st = '\0';
    return s;
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

int checkpass(char* prompt, char* pass)
{
    printf("%s", prompt);
    unsigned int n = len(pass) + 1;
    char s[n];
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
    } while (ch != 13 && counter < n-1);

    *ptr = '\0';
    if (is_same(s, pass))
        return 1;
    
    return 0;
}

void sprint(char* s, int n)
{
    for (int i=0; i<n; i++)
        printf("\n\t<Value at index %d: %d>", i, s[i]);
    printf("\n\n");
}

void iprint(int* arr, int n)
{
    for (int i=0; i<n; i++)
        printf("\n\t<Value at index %d: %d>", i, *arr++);
    printf("\n\n");
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

#endif // MY_H_INCLUDED
