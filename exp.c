#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: exp base exp");
        return -1;
    }
    long long int sq = 1, base = atoi(argv[1]), exp = atoi(argv[2]);
    for (; exp-- != 0; sq *= base);
    printf("%lld", sq);
}
