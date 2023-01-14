#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int** arr = malloc(3 * sizeof(int));
    
    for(int i=0; i<3; i++)
    {
        int* ptr = malloc(3 * sizeof(int));
        *(arr + i) = ptr;
    }
    
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, count=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            *(*(arr + i) + j) = nums[count];
            count++;
        }
    }

    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ", *(*(arr + i) + j));

        printf("\n");
    }

    // Using square bracket notation
    printf("\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
            printf("%d ", arr[i][j]);

        printf("\n");
    }

    // Freeing the allocated memory
    for (int i=0; i<3; i++)
	{
		int* tmp = *(arr + i);
		free(tmp);
	}
	free(arr);
}
