#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
    // struct rectangle r = {10, 5};
    // cout << r.length << endl;
    // cout << r.breadth << endl;

    // struct rectangle *p = &r;
    // cout << p->length << endl;
    // cout << p->breadth << endl;

    rectangle *p;
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    // p = new rectangle;

    p->length = 15;
    p->breadth = 7;

    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}