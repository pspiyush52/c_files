#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    system("cls");
    float num_1=0, num_2=0, answer=0;
    int choice=0;
    char operation;

    printf("\n\nEnter the first number: ");
    scanf("%f", &num_1);
    
    printf("\n\nSelect the operation, (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("\n\nEnter the second number: ");
    scanf("%f", &num_2);

    switch(operation)
    {
        case '+': answer = num_1 + num_2;
                  break;
        case '-': answer = num_1 - num_2;
                  break;
        case '*': answer = num_1 * num_2;
                  break;
        case '/': answer = num_1 / num_2;
                  break;
        default: printf("\n\nIncorrect choice! Press any key to exit...\n\n");
                 getch();
                 exit(0);
    }

    printf("\n\n\t%f %c %f = %f", num_1, operation, num_2, answer);
    printf("\n\nPress any key to exit...");
    getch();
}