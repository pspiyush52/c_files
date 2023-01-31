#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    system("cls");
    char ch = 0;
    FILE* fp = fopen("test_a+.txt", "a+");
    if (fp == NULL)
    {
        printf("Error.");
        exit(-1);
    }
    fprintf(fp, "%ld\n", time(NULL));
    rewind(fp);
    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);
    fclose(fp);
}