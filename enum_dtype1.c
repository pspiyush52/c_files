#include <stdio.h>

enum first {x, y, z};
enum second {m, n, first};

int main(void)
{
    enum first r;
    enum second s;
    printf("Size of first: %d\n", sizeof(r));
    printf("Size of second: %d\n", sizeof(s));
}
