#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int x = 0;
    scanf("%d", &x);
    // int* arr = malloc(x * sizeof(int));
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < x; j++)
        printf("%d\n", arr[j]);

    // free(arr);
}