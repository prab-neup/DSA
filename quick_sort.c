#include <stdio.h>

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l;
    int j = h + 1;

    while (1)
    {
        do
        {
            i++;
        } while (A[i] < pivot && i <= h);

        do
        {
            j--;
        } while (A[j] > pivot);

        if (i >= j)
        {
            break;
        }

        // Swap A[i] and A[j]
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }

    // Swap A[l] and A[j]
    int temp = A[l];
    A[l] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int l, int h)
{
    if (l < h)
    {
        int p = partition(A, l, h);
        quickSort(A, l, p - 1);
        quickSort(A, p + 1, h);
    }
}

int main()
{
    int A[100], n, i;
    printf("Enter the number of data items:\n");
    scanf("%d", &n);
    printf("Enter %d data items:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    quickSort(A, 0, n - 1);

    printf("The data items after sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);

    return 0;
}
