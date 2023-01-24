#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* get_ext(char*);
char* get_fname(char*);
void strip(char*);

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Usage: shrink filename.ext");
        exit(-1);
    }
    char ch;
    FILE* fr = fopen(argv[1], "r");
    char outfile[50];
    strcpy(outfile, get_fname(argv[1]));
    strcat(outfile, "-o");
    strcat(outfile, get_ext(argv[1]));
    printf("%s", outfile);
    FILE* fw = fopen(outfile, "w");
    while((ch = fgetc(fr)) != EOF)
    {
        if (ch != ' ' && ch != '\n')
            fputc(ch, fw);
    }
    fclose(fr);
    fclose(fw);
}

char* get_fname(char* s)
{
    char* ptr = s;
    static char fname[50];
    char* ptr2 = fname;
    while (*ptr != '.')
        *ptr2++ = *ptr++;
    return fname;
}

char* get_ext(char* s)
{
    char* ptr = s;
    static char ext[10];
    char* ptr2 = ext;
    while (*ptr != '.')
        ptr++;
    while (*ptr != '\0')
        *ptr2++ = *ptr++;
    return ext;
}

void strip(char* s)
{
    char* c = s;
    char* d = s;
    while (*c != '\0')
    {
        if (*c == ' '||*c=='\n')
            c++;
        else
        {
            *d++ = *c++;
        }
    }
    *d++ = '\0';
}
