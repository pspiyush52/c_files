#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int x;
    struct node *next;
}
node;

// Hash Table
node *table[4];

int main()
{
    FILE *file = fopen("abc.txt", "r");
    char ch;
    char *s;
    while (fscanf(file, "%s", s) != EOF)
    {
        printf("%c\n", s[0]);
    }

    fclose(file);
}

int hashnum(char *text)
{
    int x = toupper(text[0]) - 65;
    return x;
}
