#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    r = 25;

    int b = 30;
    r = b; // r is another name to a .... r is nothing but r.

    cout << a << endl
         << r << endl;
    return 0;
}