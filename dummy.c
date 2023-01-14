#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    short i=1;
    while(i)
    {
        printf("<--%d-->", i);
        i += 16383;
    }
}
