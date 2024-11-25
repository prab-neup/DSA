#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *add_at_end(struct node *ptr, int data)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}

struct node *del_first(struct node *head)
{
    if (head == NULL)
        printf("The linked list is already empty");
    else
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        temp = NULL;
    }
    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);

    head = del_first(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("The value of node : %d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}