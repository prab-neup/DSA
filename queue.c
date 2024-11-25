#include <stdio.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
        printf("Overflow");
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    rear++;
    queue[rear] = x;
}
void dequeue()
{
    if (rear == -1 && front == -1)
        printf("underflow");
    else if (front == rear)
    {
        front = rear = -1;
    }
    printf("%d", queue[front]);
    front++;
}

void main()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
}
