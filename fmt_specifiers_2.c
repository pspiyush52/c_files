#include<stdio.h>

int main(void)
{
    float num = 3.14;
    char fmt[5] = "%f";
    char fmt2[5] = "%g";
    printf("\nDeclaring a variable named \"num\",");
    printf("\n\n\tfloat num = 3.14");

    printf("\n\n\n\nPrinting the value of the variable using the \"%s\" format specifier as follows,", fmt);
    printf("\n\n\tprintf(\"The value of the variable num is: %s\", num);", fmt);

    printf("\n\n\n\nThe above line generates the following output:");
    printf("\n\n\tThe value of the variable num is: %f\n", num);

    printf("\n\n\nPrinting the value of the variable using the \"%s\" format specifier as follows,", fmt2);
    printf("\n\n\tprintf(\"The value of the variable num is: %s\", num);", fmt2);

    printf("\n\n\n\nThe above line generates the following output:");
    printf("\n\n\tThe value of the variable num is: %g\n", num);
    getch();
}
