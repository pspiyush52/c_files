#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void insert_node(char _ch);
void display();
int compare();
void free_list();

typedef struct node
{
    char ch;
    struct node* next;
    struct node* prev;
} node;

node* head = NULL;
node* tail = NULL;
int count=0;

int main(void)
{
    char c;
    for (int i=0; (c = getch()) != '\r'; i++)
    {
        printf("*");
        insert_node(c);
    }
    printf("\n");
    printf("You entered: ");
    display();
    if (compare() == 0)
        printf("Correct Password.");
    else
        printf("Incorrect Password.");
    free_list();
}

void insert_node(char _ch)
{
    node* new_node = malloc(sizeof(node));
    new_node->ch = _ch;
    new_node->next = NULL;
    if (head == NULL)
    {
        new_node->next = head;
        head = new_node;
        tail = new_node;
        tail->next = NULL;
        count++;
    }
    else
    {
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
        count++;
    }
}

void display()
{
    node* tmp = tail;
    while (tmp != head)
    {
        printf("%c", tmp->ch);
        tmp = tmp->prev;
    }
    printf("%c", head->ch);
    printf("\n");
}

int compare()
{
    char* pwd = "something_or_the_other";
    if (strlen(pwd) != count)
        return -1;

    node* tmp = tail;
    int i=0;
    while(tmp != head)
    {
        if (tmp->ch != pwd[i])
        {
            return -1;
        }
        tmp = tmp->prev;
        i++;
    }
    if (head->ch != pwd[i])
        return -1;

    return 0;
}

void free_list()
{
    node* tmp;
    while(tmp != tail)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
    free(tail);
}
