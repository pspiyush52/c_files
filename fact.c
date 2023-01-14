#include<stdio.h>
#include<string.h>

long fact(int n);
long get_num(char* s);

void main(int argc, char* argv[])
{
    if (argc < 2)
    {
        printf("Usage: .\\fact num");
        return;
    }
    else
    {
        long num = get_num(argv[1]);
        printf("\n\n\tFactorial %ld: %lu\n\n", num, fact(num));
        getchar();
    }
}

long fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

long get_num(char* s)
{
    long x = 0;
    int mul = 1;

    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        x += (s[i] - 48) * mul;
        mul *= 10;
    }
    return x;
}
