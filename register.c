#include <stdio.h>

int main(void)
{
    register int a = 25;
    {
        register int a = 1;
        printf("<%d>\n", a);
    }
    printf("<%d>\n", a);
}