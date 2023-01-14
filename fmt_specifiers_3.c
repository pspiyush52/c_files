#include<stdio.h>
#include<string.h>

int main(void)
{
    double num = 3.14159265358979;
    char fmt[3] = "%e";
    printf("\n\nThe value of num variable is: %.15g", num);
    printf("\n\n\t->  Using the \"%s\" notation: the value of num is: %e", fmt, num);
    printf("\n\n\t->  Using the \"%s\" notation: the value of num is: %E\n\n", strupr(fmt), num);
    printf("The address value of the variable num in hex form is: %p", num);
    getch();
}
