#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void e();

int main()
{
    system("cls");
    system("color 0a");
    int n = 400000;
    void* ptr = &n;
    for (int i=0; i<4; i++)
        printf("<Value at 0x%08x: %d>\n", ptr + i, *(char*)(ptr + i));
    e();
    printf("Integer value: %d\n\n", *(int*)ptr);
}

void e()
{
    printf("\n");
}
