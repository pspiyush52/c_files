#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

void print_hex(int x);

int main(int argc, char* argv[])
{
    if (argc < 2 || argc > 4)
    {
        printf("Usage: hex num1[, [num2, [num3]]]\n");
        getch();
        exit(-1);
    }
    printf("#");
    for (int i = 1, n = argc; i < n; i++)
    {
        print_hex(get_num(argv[i]));
    }
    getch();
}

void print_hex(int x)
{
    int q, r, hd[20];
    int i = 0;
    if (x < 16)
    {
        hd[1] = 0;
        hd[0] = x % 16;
        i = 2;
    }
    else
    {
        while (x != 0)
        {
            r = x % 16;
            hd[i] = r;
            x = x / 16;
            i++;
        }
    }

    char *hex_nums = "0123456789abcdef";
    for (int j = i - 1; j >=0; j--)
    {
        printf("%c", hex_nums[hd[j]]);
    }
}
