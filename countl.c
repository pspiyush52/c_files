#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: countl filename.ext");
        return -1;
    }

    FILE* fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("Could not open %s", argv[1]);
        return 1;
    }

    char ch;
    int count = 1;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
            count++;
    }
    printf("Number of lines in %s: %d", argv[1], count);
    fclose(fp);
}
