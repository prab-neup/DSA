#include <stdio.h>
#include <conio.h>

int SelectionSort(int A[], int n)
{
    int i, j, least, index, temp;
    least = A[i];
    index = i;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < A[i])
            {
                least = A[j];
                index = j;
            }
        }
        if (i != index)
        {
            temp = A[i];
            A[i] = A[index];
            A[index] = temp;
        }
    }
}

void main()
{
    int n = 5;
    int A[100], i;
    printf("Enter the number of data items:\n");
    scanf("%d", &n);
    printf("Enter %d data items:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);
    printf("The data items before sorting\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);
    SelectionSort(A, n);
    printf("\nThe data items after sorting\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);
}