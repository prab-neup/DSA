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

void del_last(struct node *head)
{
    if (head == NULL)
        printf("The linked list is already empty");
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct node *temp = head;
        struct node *temp2 = head;
        while (temp->next != NULL)
        {
            temp2 = temp;
            temp = temp->next;
        }
        temp2->next = NULL;
        free(temp);
        temp = NULL;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->next = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 98);
    ptr = add_at_end(ptr, 3);

    del_last(head);
    ptr = head;
    while (ptr != NULL)
    {
        printf("The value of node : %d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}