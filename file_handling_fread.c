#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls");
    FILE* fp = fopen("file_handling_fread.c", "r");
    if (fp == NULL)
    {
        printf("Error");
        exit(-1);
    }
    char ch=0;
    while (fread(&ch, sizeof(char), 1, fp))
        printf("%c", ch);
    fclose(fp);
}

/*
size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);

The fread function is used to read nmemb items of data each size bytes long,
from the stream pointed to by *stream and stores it at the location pointed
to by *ptr.

On success, fread() returns the number of items read.
*/
