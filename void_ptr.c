#include <stdio.h>

int main(void)
{
    int x = 129;
    void* ptr = &x;
    printf("%d", *( char*) ptr);
}