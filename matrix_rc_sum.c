#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col;

    // Getting the number of columns and rows from the user
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &row);
    printf("\nEnter the number of columns of the matrix: ");
    scanf("%d", &col);

    // Creating an integer pointer to pointer which will be used to point
    // to an array of integer pointers which in turn will be pointing
    // towards an integer array which will hold one column of the matrix
    int** arr = malloc(row * sizeof(int));

    // Creating pointers to point at each row of the integer array holding
    // one row of the matrix
    // The size of a single row is equal to the number of columns hence the
    // size of allocated memory is equal to col * size of 1 integer.
    for (int i=0; i<row; i++)
    {
        int* ptr = malloc(col * sizeof(int));
        *(arr + i) = ptr;
    }
    system("cls");

    // Getting the values of the matrix one by one row-wise
    printf("Enter the matrix values one by one row-wise: ");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
            scanf("%d", (*(arr + i) + j));
    }
    system("cls");


    // Displaying the matrix as it is
    printf("The matrix: \n");
    for (int i=0; i<row; i++)
    {
        printf("\t\t");
        for (int j=0; j<col; j++)
            printf("%6d", arr[i][j]);
        printf("\n");
    }

    // Creating two integer pointers to point at two arrays which will
    // each store the row and column sums
    int* rsum = malloc(row * sizeof(int));
    int* colsum = malloc(col * sizeof(int));

    // Initializing the two arrays with zero values so that the sum does
    // not contain any garbage values
    for (int i=0; i<row; i++)
        *(rsum + i) = 0;
    for (int j=0; j<col; j++)
        *(colsum + j) = 0;
    printf("\n");


    // Loops to calculate and display the row and column sums
    printf("Row sums: \n");
    for (int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            *(rsum + i) += arr[i][j];
            *(colsum + j) += arr[i][j];
        }
        printf("Sum of row %d is: %d\n", i+1, *(rsum + i));
    }

    printf("\nColumn sums: \n");
    for (int j=0; j<col; j++)
        printf("Sum of column %d is: %d\n", j+1, *(colsum + j));

    // Freeing up allocated memory
    for (int i=0; i<row; i++)
        free(*(arr + i));
    free(arr);
    free(colsum);
    free(rsum);
}
