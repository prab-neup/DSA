#include <stdio.h>
#include <conio.h>

int InsertionSort(int A[], int n)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
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
    InsertionSort(A, n);
    printf("\nThe data items after sorting\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);
}