#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int x = 45;
    void* ptr = &x;
    void* ptr = NULL;
    for (int i=0; i<15; i++)
        printf("%p\n", (char*)(ptr + i));
}