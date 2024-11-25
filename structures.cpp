#include <iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
} r1, r2, r3;

struct rectangle r;
int main()
{
    struct rectangle r = {10, 5};
    r.length = 15;
    r.breadth = 10;
    // cout << r.length << endl;
    cout << sizeof(r1) << endl;
    printf("Area of Rectangle is %d square centimeter.", r.length * r.breadth);

    return 0;
}