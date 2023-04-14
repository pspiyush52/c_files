#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
    long int num = 0;
    char* endptr;

    // Input string
    char s[] = "somestring";
    errno = 0;
    num = strtol(s, &endptr, 10);
    if (errno != 0)
    {
        perror("strol");
        exit(EXIT_FAILURE);
    }
    if (endptr == s)
    {
        printf("No digits found.");
    }
}
