#include<stdio.h>
#include<string.h>

int main(void)
{
    int length = 0;
    char name[20];
    printf("Enter your Name: ");
    scanf("%s", &name);
    length = strlen(name);
    printf("\n\nYour name is: %s", name);
    printf("\n\n\nLength of the string: %d", length);
    printf("\n\n");
}
