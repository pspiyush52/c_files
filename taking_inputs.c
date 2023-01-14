#include <stdio.h>

int main(void)
{
    int num;
    int x=0, y=0, answer=0;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nThe cube of the number is: %d\n\n", num*num*num);
    printf("\nEnter the first number: ");
    scanf("%d", &x);
    printf("\nEnter the second number: ");
    scanf("%d", &y);
    printf("\nThe sum of the two numbers is: %d", x+y);
    printf("\n\n");
}
