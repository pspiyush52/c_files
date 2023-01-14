#include<stdio.h>
#include<stdlib.h>

void fun(const char *filename);
int main()
{
    char *c = "abc.txt";
    fun("abc.txt");
}

void fun(const char *filename)
{
    FILE *file = fopen(filename, "r");
    char *s;
    fscanf(file, "%s", s);
    printf("%s", s);
    fclose(file);
}
