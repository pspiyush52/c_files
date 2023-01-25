#include <stdio.h>
#include <stdlib.h>

int sum(int, int);
int prod(int, int);
int calc(int, int, int (*fptr)(int, int));

int main(void)
{
    system("cls");
    int a = 45, b = 12;
    int (*s)(int, int) = &sum;
    int (*p)(int, int) = &prod;
    calc(a, b, sum);
    calc(a, b, prod);
    
}

int sum(int x, int y)
{
    printf("sum() called\n");
    return x + y;
}

int prod(int x, int y)
{
    printf("prod() called\n");
    return x * y;
}

int calc(int x, int y, int (*fptr)(int, int))
{
    printf("\tResult: %d\n", (*fptr)(x, y));
}
