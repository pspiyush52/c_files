#include<stdio.h>
#include<string.h>
#include<ctype.h>
void print_step(int num_tabs, int num_step);

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        print_step(j, i);
        j = 0;
        print_step(j, i);
    }

    getchar();
}


void print_step(int num_tabs, int num_step)
{
    while (num_tabs < num_step)
    {
        printf("    ");
        num_tabs++;
    }
    printf("# #\n");
}
