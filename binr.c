#include <stdio.h>

/*
Program to get the 32 bit binary representation of any integer as stored in
the computer's memory.
It is NOT a conversion tool for decimal to binary but only a program to see
how a decimal is being stored in the computer memory.
*/

int get_num(const char*);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: binr num\n");
        return 1;
    }
    int num = get_num(argv[1]);
    printf("\n");
    for (int i=31; i>=0; i--)
    {
        if ((1<<i) & num)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int get_num(const char* s)
{
    int num = 0, mul = 1, n = 0, flag = 0;
    if (*s == '-')
    {
        flag = 1;
        s++;
    }
    while (*s++ != '\0')
        n++;
    s-=2;
    while (n > 0)
    {
        num += (*s - 48) * mul;
        mul *= 10;
        s--; n--;
    }
    if (flag == 0)
        return num;
    else
        return -1*num;
}
