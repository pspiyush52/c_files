#include <stdio.h>
#include <stdlib.h>
#include "my.h"

typedef struct names {
    char fname[50];
    char ext[10];
} names;

names name;
names get_names(char*);
int is_dot(char*);

int main()
{
    char s[100];
    printf("Enter a filename with extension: ");
    fgets(s, 100, stdin);
    strip(s);
    names name = get_names(s);
    printf("Filename: %s\n", name.fname);
    printf("Extension: %s\n", name.ext);
}

names get_names(char* s)
{
    static names name;
    char* f = name.fname;
    char* e = name.ext;
    char* ptr = s;
    while (*ptr != '.' && *ptr != '\0')
        *f++ = *ptr++;
    if (is_dot(s))
	{
		ptr++;
		while (*ptr != '\0')
			*e++ = *ptr++;
	}
    return name;
}

int is_dot(char* s)
{
	char* ptr = s;
	int flag = 0;
	while (*ptr++ != '\0')
	{
		if (*ptr == '.')
			flag = 1;
	}
	return flag;
}
