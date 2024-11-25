#include <stdio.h>
#include <stdlib.h> // Include this for the 'exit' function
#define SIZE 5

struct cqueue
{
    int item[SIZE];
    int rear;
    int front;
};
typedef struct cqueue cq;

void display(cq *q)
{
    int i;
    if (q->rear == q->front)
        printf("Queue is empty\n");
    else
    {
        printf("The items in the queue are: ");
        // Change the loop condition and fix the increment statement
        for (i = (q->front + 1) % SIZE; i != (q->rear + 1) % SIZE; i = (i + 1) % SIZE)
        {
            printf("%d\t", q->item[i]);
        }
        printf("\n"); // Print a newline character to separate output
    }
}

void insert(cq *q)
{
    int d;
    if ((q->rear + 1) % SIZE == q->front)
        printf("Queue is Full\n");
    else
    {
        q->rear = (q->rear + 1) % SIZE;
        printf("Enter the element to be inserted: ");
        scanf("%d", &d);
        q->item[q->rear] = d;
    }
}

void delete(cq *q) // Changed the function name to avoid confusion with the 'delete' keyword
{
    if (q->rear == q->front)
        printf("Queue is empty\n");
    else
    {
        q->front = (q->front + 1) % SIZE;
        printf("Deleted item is: %d\n", q->item[q->front]);
    }
}

int main()
{
    cq q; // Create a cq struct instead of a pointer
    q.front = SIZE - 1;
    q.rear = SIZE - 1;
    int choice;
    printf("Menu for program\n");
    printf("1. Enqueue\n2. Dequeue\n3. Print all the elements\n4. Quit\n");
    do
    {
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert(&q); // Pass a pointer to the cq struct
            break;
        case 2:
            delete (&q); // Pass a pointer to the cq struct
            break;       // Add a break statement to exit the switch case
        case 3:
            display(&q); // Pass a pointer to the cq struct
            break;       // Add a break statement to exit the switch case
        case 4:
            exit(0); // Exit with a status of 0 (success)
            break;

        default:
            printf("You input the wrong choice!!!\n");
            break;
        }

    } while (choice != 4); // Change the loop condition
    return 0;
}
