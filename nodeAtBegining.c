#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *add_beg(struct node *head, int d)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->next = NULL;

    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = 98;
    ptr->next = NULL;

    head->next = ptr;

    int data = 3;

    head = add_beg(head, data);
    ptr = head;
    while (ptr != NULL)
    {
        printf("The value of node : %d\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}