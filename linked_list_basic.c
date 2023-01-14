#include<stdlib.h>
#include<stdio.h>
#include <stdint.h>

typedef struct node
{
    int num;
    struct node *next;
}
node;

int main()
{
    node *list = NULL;

    // add a number to the list,
    node *n = malloc(sizeof(node));

    // safety check
    if (n == NULL)
        return -1;

    n->num = 1;
    n->next = NULL;

    // update list to point to newly created node,
    list = n;

    // add another number to the list,
    n = malloc(sizeof(node));

    // safety check
    if (n == NULL)
    {
        free(list);
        return -1;
    }
    n->num = 2;
    n->next = NULL;

    // update the list to point to the newly created node,
    list->next = n;

    // add another number to the list,
    n = malloc(sizeof(node));

    // safety check
    if (n == NULL)
    {
        free(list->next);
        free(list);
        return -1;
    }
    n->num = 3;
    n->next = NULL;

    // update the list to point to the newly created node,
    list->next->next = n;

    // print the numbers,
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
        printf("%d\n", tmp->num);

    // freeing the memory used by the linked list
    while (list != NULL)
    {
        // storing the address of the second node in the linked list,
        node *temp = list->next;

        // freeing the memory used by the first node of the linked list since the list variable
        // stores the address of the first node of the list,
        free(list);

        // assigning the temp which is the next node of the linked list to the list to be freed in
        // the next iteration of this while loop,
        list = temp;
    }
    return 0;
}
