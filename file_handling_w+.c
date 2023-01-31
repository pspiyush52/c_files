#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls");
    FILE* fp = fopen("test_w+.txt", "w+");
    fputs("This is a sample txt file to test the w+ file mode.", fp);
    
    // Seeking the file cursor 15 characters from the end of the file
    fseek(fp, -15, SEEK_END);
    char ch = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}

/*
Opening a file in w+ mode opens it for both reading and writing but in this
case if the file does not exist, it will be created.
If the file already exists it will be truncated to zero size.
*/
