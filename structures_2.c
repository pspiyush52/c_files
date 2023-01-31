#include <stdio.h>
#include <stdlib.h>

typedef struct s {
    int a;
    float b;
    int c;
}s;

int main(void)
{
    s obj = {.b=1, .c=10, .a=15};
    printf("%d :: %f :: %d\n",obj.a, obj.b, obj.c);
}
