#include<stdio.h>
#include<string.h>

int main(void)
{
    int input_num = 0, num = 0, digit = 0, length = 0;
    printf("\n\nEnter a number: ");
    scanf("%d", &input_num);
    printf("\n\n\t");

    num = input_num;
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
        printf("%d ", digit);
        length++;
    }
    printf("\n\n");

    int exp = 1;
    num = input_num;
    for (int j = 0; j < (length - 1); j++)
    {
        exp *= 10;
    }

    printf("\t");
    for (int k = 0; k < length; k++)
    {
        digit = num / exp;
        num = num % exp;
        exp /= 10;
        printf("%d ", digit);
    }
    printf("\n\n");
}
