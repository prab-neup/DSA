#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    // p =(struct Rectangle *)malloc(sizeof(struct Rectangle));  for c program we use this code to set memory location at heap

    p->length = 15;
    p->breadth = 7;

    return p;
}
// void fun(struct Rectangle *p)
// {
//     p->length = 20;
//     cout << "Length " << p->length << endl
//          << "Breadth " << p->breadth << endl;
// };
int main()
{
    // struct Rectangle r = {10, 5};
    // fun(&r);

    struct Rectangle *ptr = fun();

    printf("Length %d\n Breadth %d\n", ptr->length, ptr->breadth);

    return 0;
}