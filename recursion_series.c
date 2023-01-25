#include <stdio.h>
#include <stdlib.h>
#include "my.h"

long long series(int, int);
long long ans = 0;

int main(int argc, char* argv[])
{
    if (argc == 2)
    {
        int b=get_num(argv[1]), e=10;
        if (b>0 && b<101)
            series(b, e);
        else
            exit(0);
    }
    else if (argc == 1)
        series(1, 10);
    else
    {
        printf("Usage: recursion_series [num]");
        exit(-1);
    }
}

long long series(int b, int e)
{
    if (e == 0)
        return b;
    else
        ans += series(b, e-1);
    printf("%lld, ", ans);
    return ans;
}
