#include <stdio.h>
#include <stdbool.h>

bool isMaxHeap(int arr[], int n)
{
    // Start from the parent of the last node and move upwards
    for (int i = (n - 1) / 2; i >= 0; i--)
    {
        int leftChild = 2 * i + 1;
        int rightChild = 2 * i + 2;

        // Check if the left child exists and is greater than the parent
        if (leftChild < n && arr[leftChild] > arr[i])
        {
            return false;
        }

        // Check if the right child exists and is greater than the parent
        if (rightChild < n && arr[rightChild] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {77, 66, 59, 34, 23, 12, 53, 10, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isMaxHeap(arr, n))
    {
        printf("The given array is a max heap.\n");
    }
    else
    {
        printf("The given array is not a max heap.\n");
    }

    return 0;
}
