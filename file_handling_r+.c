#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls");
    FILE* fp = fopen("test.txt", "r+");
    char ch = 0;
    int flag = 1;
    while (!feof(fp))
    {
        ch = fgetc(fp);
        if (ch == ':')
            break;
        printf("%c", ch);
    }
    fseek(fp, ftell(fp), SEEK_SET);
    fprintf(fp, "%s", "--added text--");
    fclose(fp);
}

/*
Opening a file in r+ mode opens it for both reading and writing. If the file
does not exist, it will 'not' be created.
Typically used for updating/editing existing files.
*/
