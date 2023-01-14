#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    typedef char* string;
    printf("  String: \n");
    string s = "hello";
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("\n%15c - 0x%p", *(s + i), s + i);
    }

    printf("\n\n");

    printf("  Array: \n");
    int nums[] = {11, 2, 7, 4};
    for (int i = 0; i < 4; i++)
    {
        printf("\n%15d - 0x%p", *(nums + i), &(*(nums + i)));
    }

    printf("\n\n");
    getchar();
}
