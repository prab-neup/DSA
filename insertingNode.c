#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void print_nodes(struct node *head)
{
    if (head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("The value of node : %d\n", ptr->data);
        ptr = ptr->next;
    }
};

struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);
    ptr = add_at_end(ptr, 67);
    ptr = head;

    print_nodes(ptr);
    return 0;
}