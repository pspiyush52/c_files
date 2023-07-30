#include <stdio.h>

typedef struct{
    int tval : 1;
} __attribute__((__packed__))
array;

int main(void)
{
    printf("%d", sizeof(array));
    return 0;
}