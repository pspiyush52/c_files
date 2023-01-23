#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int main()
{
    char* s = get_string("Enter your name: ");
    strip(s);
    printf("\nHello, %s\n\n", s);
}
