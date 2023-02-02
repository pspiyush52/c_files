#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col, i, j;
    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter columns: ");
    scanf("%d", &col);
    int *ptr = calloc(row * col, sizeof(int));
    printf("Enter values: ");
    for (i=0; i < row; i++)
    {
        for (j=0; j < col; j++)
            scanf("%d", (ptr + (i*col + j)));
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d  ", *(ptr + (i*col + j)));
        printf("\n");
    }
    free(ptr);
}
