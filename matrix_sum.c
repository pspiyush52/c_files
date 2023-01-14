#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns in the matrix: ");
    scanf("%d", &col);

    int** arr1 = malloc(row * sizeof(int));
    int** arr2 = malloc(row * sizeof(int));
    for (int i=0; i<row; i++)
    {
        int* ptr1 = malloc(col * sizeof(int));
        *(arr1 + i) = ptr1;
        int* ptr2 = malloc(col * sizeof(int));
        *(arr2 + i) = ptr2;
    }

    printf("\nEnter the matrix values one by one row-wise: ");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            scanf("%d", *(arr1 + i) + j);
    }

    system("cls");
    printf("\nEnter the values of the second matrix one by one row-wise: ");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            scanf("%d", *(arr2 + i) + j);
    }

    system("cls");
    printf("The matrices: \n");
    for (int i=0; i<row; i++)
    {
        printf("\t\t");
        for (int j=0; j<col; j++)
            printf("%6d", *(*(arr1 + i) + j));
        printf("\t\t");
        for (int j=0; j<col; j++)
            printf("%6d", *(*(arr2 + i) + j));
        printf("\n");
    }

    printf("\n\nThe sum of matrices: \n");
    for (int i=0; i<row; i++)
    {
        printf("\t\t\t    ");
        for (int j=0; j<col; j++)
            printf("%6d", *(*(arr1 + i) + j) + *(*(arr2 + i) + j));
        printf("\n");
    }

    for (int i=0; i<row; i++)
    {
        free(*(arr1 + i));
        free(*(arr2 + i));
    }
    free(arr1);
    free(arr2);
    printf("\n");
}