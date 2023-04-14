#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < 10; j++)
            printf("%5d", 10*j + i);
        printf("\n\n");
    }

    return 0;
}
