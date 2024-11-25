#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *S;
};

void create(struct stack *st)
{
    printf("Enter size");
    scanf("%d", &st->size);
    st->top = -1;
    st->S = (int *)malloc(st->size * sizeof(int));
}

void Display(stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
        printf("%d", st.S[i]);
    printf("\n");
}
void push(stack *st, int x)
{
    if (st->top == st->size - 1)
        printf("Stack is Full\n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

int pop(stack *st)
{
    int x = -1;
    if (st->top == -1)
        printf("stack is empty\n");
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}
int main()
{
    stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);

    printf("%d\n", pop(&st));
    printf("%d\n", pop(&st));
    printf("%d\n", pop(&st));
    printf("%d\n", pop(&st));
    printf("%d\n", pop(&st));
    printf("%d\n", pop(&st));

    Display(st);
    return 0;
}