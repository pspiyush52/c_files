#include<stdio.h>

int main(void)
{
    char answer;
    char ch = 'x';
    
    printf("\nEnter your response: ");
    scanf("%c", &answer);

    if (answer == 'y')
    {
        printf("\n\nCorrect!");
    }
}