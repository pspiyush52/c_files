#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void print_row(int);
void pattern(int);

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        int num = get_num(argv[1]);
        if (num > 0 && num <50)
            pattern(num);
        else
            pattern(5);
    }
    else if (argc == 1)
        pattern(5);
    else
    {
        printf("Usage: recursion_pattern [num]\n");
        exit(-1);
    }
}

void pattern(int n)
{
    if (n==0)
        return;
    else
    {
        print_row(n);
        printf("\n");
        pattern(n-1);
    }
}

void print_row(int n)
{
    while (n-- > 0)
        printf("#");
}
