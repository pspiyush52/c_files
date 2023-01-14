#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "my.h"

void insert(int n);
void calculate(int* odd, int* even, float* sum, float* avg);
void clear();

typedef struct node
{
    int n;
    struct node* next;
} node;

node* list=NULL;
int count=0;

int main(void)
{
    int num, odd=0, even=0, i=1;
    float sum=0.0, avg=0.0;
    char s[10];
    while (1)
    {
        printf("%d. Enter a number: ", i);
        scanf("%s", &s);
        num = get_num(s);

        if (num == 72)
            break;

        insert(num);
        i++;
    }
    calculate(&odd, &even, &sum, &avg);
    printf("\nCount: %d\n", count);
    printf("\nNumber of odd numbers: %d", odd);
    printf("\nNumber of even numbers: %d\n", even);
    printf("\nSum: %.2f", sum);
    printf("\nAverage: %.2f\n", avg);
    getch();
    clear();
}


void insert(int n)
{
    node* new_node = malloc(sizeof(node));
    new_node->n = n;
    new_node->next = list;
    list = new_node;
    count++;
}

void calculate(int* odd, int* even, float* sum, float* avg)
{
    node* tmp = list;
    while (tmp != NULL)
    {
        if (tmp->n%2 == 0)
            *even += 1;
        else
            *odd += 1;
        *sum += tmp->n;

        tmp = tmp->next;
    }
    *avg = *sum / count;
}

void clear()
{
    node* tmp = list;
    while(tmp != NULL)
    {
        tmp = tmp->next;
        free(list);
        list = tmp;
    }
}
