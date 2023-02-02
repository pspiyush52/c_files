#include <stdio.h>
#define MAX(x, y) x > y ? x : (x < y ? y : 0)

int main(void)
{
    // Using MAX will only substitute the expression defined for the macro
    printf("%d", MAX(17, 77));
}
