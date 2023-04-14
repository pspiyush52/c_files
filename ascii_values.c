#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
    char ch;
    printf("\nEnter a character to display it's ASCII value: ");
    scanf("%c", &ch);
    printf("\n\nThe ASCII value of %c is: %d\n\n", ch, ch);

    for(int i = 20, column = 1; i < 127; i++, column++)
    {
        printf(" %d = %c  ", i, i);
        if(column % 5 == 0)
            printf("\n");
    }
    printf("\n");
    getch();
}
