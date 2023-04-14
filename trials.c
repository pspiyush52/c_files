#include <stdio.h>
#include <string.h>
#define print printf

int main(void)
{
    print("\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 0; j < 10; j++)
            print("%5d", 10*j + i);
        print("\n\n");
    }

    return 0;
}


// 1 11 21 31 ...
// 2 12 22 32 ...
// n     10*i + n      10*i + n