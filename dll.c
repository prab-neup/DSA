#include <stdio.h>
#include <stdlib.h>

// Define the structure for a doubly linked list node
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

// Function to insert a node at the kth position
void insertAtK(struct Node **head, int data, int k)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;

    // If k is 1, insert at the beginning
    if (k == 1)
    {
        newNode->next = *head;
        newNode->prev = NULL;
        if (*head != NULL)
            (*head)->prev = newNode;
        *head = newNode;
        return;
    }

    struct Node *current = *head;
    int count = 1;

    // Traverse to the (k-1)th node or the end of the list
    while (current != NULL && count < k - 1)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
    {
        printf("Invalid position. List length is less than %d.\n", k);
        free(newNode);
        return;
    }

    // Insert the new node after the (k-1)th node
    newNode->next = current->next;
    newNode->prev = current;
    if (current->next != NULL)
        current->next->prev = newNode;
    current->next = newNode;
}

// Function to delete a node at the kth position
void deleteAtK(struct Node **head, int k)
{
    if (*head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    // If k is 1, delete the first node
    if (k == 1)
    {
        struct Node *temp = *head;
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return;
    }

    struct Node *current = *head;
    int count = 1;

    // Traverse to the kth node
    while (current != NULL && count < k)
    {
        current = current->next;
        count++;
    }

    if (current == NULL)
    {
        printf("Invalid position. List length is less than %d.\n", k);
        return;
    }

    // Delete the kth node
    current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;
    free(current);
}

// Function to print the doubly linked list
void printList(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;

    // Inserting elements into the doubly linked list
    insertAtK(&head, 1, 1); // 1
    insertAtK(&head, 2, 2); // 1 2
    insertAtK(&head, 3, 2); // 1 3 2
    insertAtK(&head, 4, 1); // 4 1 3 2

    // Printing the list
    printf("Doubly Linked List: ");
    printList(head);

    // Deleting elements from the doubly linked list
    deleteAtK(&head, 3); // 4 1 2
    deleteAtK(&head, 1); // 1 2

    // Printing the modified list
    printf("Doubly Linked List after deletion: ");
    printList(head);

    return 0;
}
