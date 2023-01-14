#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// For defining spacing to the left of the matrices which will be printed on 
// the screen
// Increasing this value will result in greater margin towards the left of the
// matrices
#define TABS 4

void hr(int width);
void print_matrix(int** arr, int r, int c);
void heading(char* s);
void rprint(char ch, int count);

int main(void)
{
    int row1, row2, col1, col2, i, j, k;
    // Input the number of rows and columns of the two matrices

    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &row1);
    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &col1);

    printf("Enter the number of rows in the second matrix: ");
    scanf("%d", &row2);
    printf("Enter the number of columns in the second matrix: ");
    scanf("%d", &col2);
    
    // Checking if the matrices are multiplicable or not
    if (col1 != row2)
    {
        printf("These matrices cannot be multiplied.\n");
        exit(-1);
    }

    // This will be the width of the horizontal rule to be drawn between the
    // matrices for a cleaner output
    int width = col1;
    if (col2 > col1)
        width = col2;
    width = (width - 1) * 6;

    // Declaring a pointer to point towards an array of pointers each of whom
    // will point towards an array containing one row of the matrix
    int** arr1 = malloc(row1 * sizeof(int));
    for (i=0; i<row1; i++)
    {
        int* ptr = malloc(col1 * sizeof(int));
        *(arr1 + i) = ptr;
    }

    // Declaring another pointer to pointers for the second matrix
    int** arr2 = malloc(row2 * sizeof(int));
    for (i=0; i<row2; i++)
    {
        int* ptr = malloc(col2 * sizeof(int));
        *(arr2 + i) = ptr;
    }

    // Getting the matrix values one by one for both the matrices
    system("cls");
    printf("Enter the values of the first %dx%d matrix one by one row-wise: ", row1, col1);
    for (i=0; i<row1; i++)
    {
        for (j=0; j<col1; j++)
            scanf("%d", *(arr1 + i) + j);
    }

    system("cls");
    printf("Enter the values of the second %dx%d matrix one by one row-wise: ", row2, col2);
    for (i=0; i<row2; i++)
    {
        for (j=0; j<col2; j++)
            scanf("%d", *(arr2 + i) + j);
    }

    // Displaying the two matrices on screen before calculating and displaying
    // the result
    system("cls");

    heading("The two matrices:");
    print_matrix(arr1, row1, col1);
    hr(width);
    print_matrix(arr2, row2, col2);

    // Declaring another pointer to point towards an array of pointers each
    // of whom will further point towards an array of integers which contain
    // the values of the resultant matrix
    int** prod = malloc(row1 * sizeof(int));
    for (i=0; i<row1; i++)
    {
        int* ptr = malloc(col2 * sizeof(int));
        *(prod + i) = ptr;
    }
    // prod can then be used to return a pointer from a function if the purpose
    // is to return the result rather than displaying it

    // Initializing the rows of the matrix which will store the result for
    // of the mulitplication
    for (i=0; i<row1; i++)
    {
        for (j=0; j<col2; j++)
            *(*(prod + i) + j) = 0;
    }

    // Begin calculating the sum starting with declaring a variable to hold
    // the sum of products for each point
    int sum;
    for (i=0; i<row1; i++)
    {
        for (j=0; j<col2; j++)
        {
            sum = 0;
            for (k=0; k<col1; k++)
                sum += (*(*(arr1 + i) + k)) * (*(*(arr2 + k) + j));
            *(*(prod + i) +  j) = sum;
        }
    }

    // Displaying the result of the multiplication
    hr(width);
    heading("Matrix product:");
    print_matrix(prod, row1, col2);
    hr(width);

    // Freeing up all the allocated memory one by one
    for (i=0; i<row1; i++)
        free(*(arr1 + i));

    for (i=0; i<row2; i++)
        free(*(arr2 + i));

    for (i=0; i<row1; i++)
        free(*(prod + i));

    free(arr1);
    free(arr2);
    free(prod);
}

// Function to print a matrix
void print_matrix(int** arr, int r, int c)
{
    for (int i=0; i<r; i++)
    {
        for (int k=0; k<TABS; k++)
            printf("\t");
        for (int j=0; j<c; j++)
            printf("%6d", *(*(arr + i) + j));
        printf("\n\n");
    }
}

// Function to print a string with an underline and appropriate spacing
void heading(char* s)
{
    printf("%s\n", s);
    rprint('-', strlen(s));
    printf("\n\n");
}

// Function to print a horizontal line of a fixed width
void hr(int width)
{
    int i, prev = (TABS * 8) + 6;
    rprint('=', prev);
    rprint('=', width);
    rprint('=', prev);
    printf("\n\n");
}

// Function to repeatedly print a character count number of times
void rprint(char ch, int count)
{
    for (int i=0; i<count; i++)
        printf("%c", ch);
}
