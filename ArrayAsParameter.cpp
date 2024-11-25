#include <iostream>
using namespace std;

// Array are always passed by address not by value
void fun(int *A, int n)
{
    A[0] = 15;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    // cout << sizeof(A) / sizeof(int) << endl;
}

int main()
{
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;
    fun(A, n);
    // cout << sizeof(A) / sizeof(int) << endl;

    for (int x : A)
        cout << x << " ";
    return 0;
}