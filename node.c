#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *add_at_end(struct node *p, int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->next = NULL;
    p->next = temp;
    return temp;
}

void add_at_pos(struct node *head, int data, int pos)
{
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->next = NULL;

    pos--;
    while (pos != 1)
    {
        ptr = ptr->next;
        pos--;
    }
    ptr2->next = ptr->next;
    ptr->next = ptr2;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    add_at_end(head, 98);
    add_at_end(head, 3);

    int data = 67, position = 3;

    add_at_pos(head, data, position);
    struct node *ptr = head;
    
    while (ptr != NULL)
    {
        printf("The value of node : %d\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}