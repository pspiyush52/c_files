#include<stdio.h>
#include<string.h>

int main()
{
    char ch;
    printf("\nEnter a character to display it's ASCII value: ");
    scanf("%c", &ch);
    printf("\n\nThe ASCII value of %c is: %d\n\n", ch, ch);

    int column = 0;
    for(int i=20; i<127; i++)
    {
        printf(" %d = %c  ", i, i);
        column++;
        if(column>5)
        {
            printf("\n");
            column = 0;
        }
    }
    printf("\n");
    getch();
}
