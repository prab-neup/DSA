#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int stack_arr[MAX];
int top = -1;

int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("stack is full.\n");
        return;
    }

    top = top + 1;
    stack_arr[top] = data;
}

int pop()
{
    int value;
    if (isEmpty())
    {
        printf("stack is empty.\n");
        exit(1);
    }

    value = stack_arr[top];
    top--;
    return value;
}

int peek()
{
    if (isEmpty())
    {
        printf("stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

void print()
{
    if (top == -1)
    {
        printf("stack underflow\n");
        return;
    }
    for (int i = top; i >= 0; i--)
        printf("%d ", stack_arr[i]);
    printf("\n");
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            data = pop();
            printf("The deleted element is %d\n", data);
            break;
        case 3:
            printf("The topmost element of the stack is %d\n", peek());
            break;
        case 4:
            print();
            break;
        case 5:
            printf("The program is exiting ....\n");
            exit(0);

        default:
            printf("You input the wrong choice!!!\n");
        }
    }
    return 0;
}
