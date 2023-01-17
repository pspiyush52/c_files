#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 50

char* stcat(char* s1, char* s2);
void strip(char* s);

int main(void)
{
    char s[N];
    printf("Enter your name: ");
    fgets(s, N, stdin);
    system("cls");
    strip(s);
    if (isupper(s[0]))
        fputs(stcat(s, " Singh"), stdout);
    else
        fputs(stcat(s, " singh"), stdout);
}

char* stcat(char* s1 ,char* s2)
{
    int n1 = strlen(s1), n2 = strlen(s2);
    int n = n1 + n2;
    char* st = malloc((n+1) * sizeof(char));
    for (int i=0; i<n1; i++)
        st[i] = s1[i];
    
    for (int i=n1, j=0; i<n; j++, i++)
        st[i] = s2[j];

    st[n] = '\0';
    return st;
}

void strip(char* s)
{
    int n = strlen(s), front = 0, j;
    int rear = n;

    // Skipping the whitespace and getting to the actual beginning of the
    // string
    while (s[front] == ' ' || s[front] == '\n' || s[front] == '\t' || s[front] == '\0')
        front++;
    
    // Doing the same for the rear end of the string
    while (s[rear] == ' ' || s[rear] == '\n' || s[rear] == '\t'|| s[rear] == '\0')
        rear--;

    // Calculating the amount of memory blocks required to store the
    // whitespace free string
    // '+2' is for the additional null character at the end of the string
    n = rear - front + 2;
    
    // Allocating the required amount of memory
    char* st = malloc(n * sizeof(char));

    // Initializing the memory block with null values
    for (int i=0; i<n; i++)
        st[i] = 0;
    
    // Storing the characters one by one after skipping all the whitespace
    // in a separate location
    for (int i=0, j=front; j < rear+1; j++, i++)
        st[i] = s[j];
    st[n-1] = '\0';
    // Writing the whitespace free string into the original string
    strcpy(s, st);
}
