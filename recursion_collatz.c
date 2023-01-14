#include<stdio.h>
int collatz(int num);
int count = 0;

void main()
{
    int x;
    do
    {
        printf("\nEnter a number to find the number of steps it takes to reduce it to 1 by Collatz's Conjecture: ");
        scanf("%d", &x);
    }
    while (x < 0);

    int steps = collatz(x);

    if (steps == 0)
        printf("\n\tYou're already at 1 you dolt.\n");
    else if (steps == -1)
        printf("\n\tWhere are you even trying to go with this?\n");
    else
        printf("\n\t%d steps\n", steps);

}

int collatz(int num)
{
    if (num == 1)
        return count;

    else if (num == 0)
        return -1;

    else if (num % 2 == 0)
    {
        count++;
        return collatz(num / 2);
    }
    else
    {
        count++;
        return collatz(3*num + 1);
    }
}
