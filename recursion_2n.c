#include <stdio.h>
#include <stdlib.h>

int sum(int);
int s = 0;

int main(void)
{
    int n=5;
    printf("<%d>\n", sum(n));
}

int sum(int n)
{
    if (n == 0)
        return 2;
    else
        s += sum(n-1);
}
