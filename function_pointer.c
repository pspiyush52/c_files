#include <stdio.h>
#include <stdlib.h>

int sum(int, int);

int main()
{
    system("cls");
    int (*ptr)(int, int) = &sum;
    int m = 414, n=27;
    printf("< 0x%x >\n", ptr);
    printf("Sum of %d and %d is: %d\n", m, n, (*ptr)(m, n));
    
    // Gives the same output as above:
    printf("Sum of %d and %d is: %d\n", m, n, ptr(m, n));
}

int sum(int x, int y)
{
    return x + y;
}
