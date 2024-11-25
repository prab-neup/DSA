#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    //     int a = 10;
    //     int *p;
    //     p = &a;

    //     printf("%d\n", &a);
    //     cout << a << endl;
    //     printf("using pointer %d\n", *p);

    // int A[5] = {2, 4, 6, 8, 10};
    int *p;
    // p = (int *)malloc(5 * sizeof(int));
    p = new int[5];

    p[0] = 10;
    p[1] = 15;
    p[2] = 14;
    p[3] = 13;
    p[4] = 19;

    for (int i = 0; i < 5; i++)
        cout << p[i] << endl;

    cout << sizeof(p) << endl; // pointer takes 8 bytes for 64-bit processor whatever the data type we use for making pointer.

    delete[] p;
    // free(p);
    return 0;
}