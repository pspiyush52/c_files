#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls");
    FILE* fp = fopen("file_handling_r.c", "r");
    char ch=0;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}
