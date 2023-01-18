#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

void endl();
void swap(char* s);

int main(void)
{
    int a[3] = {1, 2, 3}, b[3] = {19, 83, 47};
    int* i=a;
    int* j=b;
    *i++ = *j++;
    printf("%d :: %d\n", *i, *j);
    for (int i=0; i<3; i++)
        printf("\na[%d] = %d, b[%d] = %d", i, a[i], i, b[i]);
}

void endl()
{
    printf("\n");
}
