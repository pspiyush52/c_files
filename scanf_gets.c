#include <stdio.h>
#include <stdlib.h>

char* get_string(char* prompt);

int main(void)
{
    char* name;
    name = get_string("Enter your name: ");
    printf("Hello %s", name);
    free(name);
}

char* get_string(char* prompt)
{
    char* str = malloc(100 * sizeof(char));
    printf("%s", prompt);
    fgets(str, 100, stdin);
    return str;
}
