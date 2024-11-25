#include <stdio.h>

// Function to heapify a subtree rooted at node 'i' in the array 'arr' of size 'n'.
void heapify(int arr[], int n, int i)
{
    int largest = i;            // Initialize the largest as the root
    int leftChild = 2 * i + 1;  // Left child
    int rightChild = 2 * i + 2; // Right child

    // If the left child is larger than the root
    if (leftChild < n && arr[leftChild] > arr[largest])
    {
        largest = leftChild;
    }

    // If the right child is larger than the largest so far
    if (rightChild < n && arr[rightChild] > arr[largest])
    {
        largest = rightChild;
    }

    // If the largest is not the root, then swap and recursively heapify the affected subtree.
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

// The main function to perform heap sort
void heapSort(int arr[], int n)
{
    // Build a max heap from the array
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    // Extract elements from the heap one by one
    for (int i = n - 1; i >= 0; i--)
    {
        // Move the current root (maximum element) to the end of the array
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    heapSort(arr, n);

    printf("\nArray after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
