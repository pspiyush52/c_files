#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
    printf("\n\n");
    if (argc == 2)
    {
        printf("\tHello! %s", argv[1]);
    }
    printf("\n\tFile Location: %s\n\n\n\n", argv[0]);
    return 0;
}
