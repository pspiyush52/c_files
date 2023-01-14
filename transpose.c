#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int** arr = malloc(3 * sizeof(int));
    for (int i=0; i<3; i++)
    {
        int* ptr = malloc(3 * sizeof(int));
        *(arr + i) = ptr;
    }
    int nums[] = {1, 5, 7, -4, 5, 3, 0, 1, 9};
    int count = 0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            *(*(arr + i) + j) = nums[count];
            printf("%2d", nums[count]);
            count++;
        }
        printf("\n");
    }
    printf("\nTranspose of the matrix:\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
            printf("%2d ", *(*(arr + j) + i));
        printf("\n");
    }
}
