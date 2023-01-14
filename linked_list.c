#include<stdlib.h>
#include<stdio.h>
#include "my.h"

typedef struct node
{
    int x;
    struct node *next;
}
node;

void print_list(node *li);
void insert(int num);
void free_list(node *li);

node *list = NULL;

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 9; i++)
    {
        insert(nums[i]);
    }
    print_list(list);
    printf("\n");
    print_list(list);
    free_list(list);
}

void insert(int num)
{
    node *new_node = malloc(sizeof(node));
    new_node->x = num;
    new_node->next = NULL;

    new_node->next = list;
    list = new_node;
}


void print_list(node *li)
{
    if (li == NULL)
    {
        print("Empty list...\n");
        return;
    }

    while (li != NULL)
    {
        printf("%d\n", li->x);
        li = li->next;
    }
}

void free_list(node *li)
{
    if (li == NULL)
        return;

    node *tmp;
    while (li != NULL)
    {
        tmp = li->next;
        free(li);
        li = tmp;
    }
}
