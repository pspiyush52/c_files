#include<stdio.h>

int main(void)
{
    int n;
    char block;

    printf("\nWhat is the size of the square you want to display?: ");
    scanf("%d", &n);

    printf("\nWhat is the character with which you want to build?: ");
    scanf(" %c", &block);

    printf("\n\n\n");
    for (int i=0; i<n; i++)
    {
        printf("\t");
        for(int j = 0; j<n; j++)
        {
            printf("%c ", block);
        }
        printf("\n");
    }
    printf("\n\n");
    getch();
}
