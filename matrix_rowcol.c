#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns in the matrix: ");
    scanf("%d", &col);
    int** arr = malloc(row * sizeof(int));
    for (int i=0; i<row; i++)
    {
        int* ptr = malloc(col * sizeof(int));
        *(arr + i) = ptr;
    }

    int rsum, colsum;
    printf("\nEnter the items in the matrix is a row-wise order: ");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            scanf("%d", *(arr + i) + j);
    }

    system("cls");
    printf("The matrix:\n");
    for (int i=0; i<row; i++)
    {
        printf("\t\t");
        for (int j=0; j<col; j++)
            printf("%6d", *(*(arr + i) + j));
    printf("\n");
    }

    printf("\nThe sum of rows is as follows: ");
    for (int i=0; i<row; i++)
    {
        rsum = 0;
        for (int j=0; j<col; j++)
            rsum += *(*(arr + i) + j);
        
        printf("\n\tSum of row %d: %d", i + 1, rsum);
    }

    printf("\n\nThe sum of columns is as follows: ");
    for (int i=0; i<col; i++)
    {
        colsum = 0;
        for (int j=0; j<row; j++)
            colsum += *(*(arr + j) + i);
        
        printf("\n\tSum of column %d: %d", i + 1, colsum);
    }

    for (int i=0; i<row; i++)
        free(*(arr + i));
    free(arr);
}