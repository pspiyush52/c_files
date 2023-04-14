#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 50

char* strip(char* s);

int main(void)
{
    char s[N];
    printf("\n\tEnter your name: ");
    fgets(s, N, stdin);
    strip(s);
    printf("\n\t");
    if (isupper(s[0]))
        fputs(strcat(s, " Singh"), stdout);
    else
        fputs(strcat(s, " singh"), stdout);
    printf("\n\n");
}

char* strip(char* s)
{
    char* front = s;
    char* rear = s;
    char* st = s;

    // Traverse to where the string actually begins skipping all the
    // whitespace along the way
    while (*front == ' ' || *front == '\t' || *front == '\n')
        front++;
    // Traverse to the null character of the string
    while (*rear != '\0')
        rear++;

    // Shifting one character to the left of the null character to actually
    // begin eating up the whitespace
    rear--;

    // Getting the rear pointer to where the string actually ends skipping
    // all the whitespace along the way
    while (*rear == ' '|| *rear == '\t' || *rear == '\n')
        rear--;
    
    // Begin replacing the characters of the string with the characters which
    // start from the head of the string
    while (front != rear)
    {
        *st++ = *front++;
    }

    // Since the loop stops when the front matches the rear so we have to
    // manually add the last non-whitespace character to the string
    *st = *rear;

    // Terminating the string with the null character
    *++st = '\0';

    // Returning the string in case the return value is needed
    return s;
}
