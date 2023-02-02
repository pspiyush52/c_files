#include <stdio.h>

int main(void)
{
    // This is a predefined macro which is a string representing today's date
    printf("Date: %s\n", __DATE__);

    // Predefined macro for time
    printf("Current Time: %s\n", __TIME__);

    // Predefined macro for current timestamp
    printf("%s\n", __TIMESTAMP__);

    // gives the full path and file name of the current file
    printf("%s\n", __FILE__);

    // this macro contains the line number where it appears in the code
    printf("%d\n", __LINE__);

    // macro to check whether the C compiler is according to the ANSI standard
    // or not
    printf("%d\n", __STDC__);
}