#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char* fun();

int main()
{
    system("cls");
    printf("\nHello, %s\n\n", get_string("Enter your name: "));
}

char* fun()
{
    static char s[] = "this_is_fun";
    return s;
}