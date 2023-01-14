#include<stdio.h>
#include<string.h>
#include<ctype.h>

int convert(char ch[]);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Usage: ./hex [low] [high]");
        return -1;
    }
    int low = convert(argv[1]);
    int high = convert(argv[2]);
    int col = 0;
    for (int i = low; i <= high; i++)
    {
        if (col == 10)
        {
            printf("\n\n");
            col = 0;
        }
        col++;
        printf("%3d: 0x%X  ", i, i);
    }
    printf("\n\n");
}

int convert(char ch[])
{
    int num = 0, mul = 1;
    for (int i = strlen(ch) - 1; i >=0; i--)
    {
        num += (((int) ch[i]) - 48) * mul;
        mul *= 10;
    }
    return num;
}
