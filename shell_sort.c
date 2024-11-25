#include <stdio.h>

void shellSort(int A[], int n)
{
    int gap, i, j, temp;
    for (gap = n / 2; gap > 0; gap /= 2)
    {
        for (i = gap; i < n; i++)
        {
            temp = A[i];
            j = i;
            while (j >= gap && A[j - gap] > temp)
            {
                A[j] = A[j - gap];
                j -= gap;
            }
            A[j] = temp;
        }
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

    printf("The data items before sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);

    shellSort(A, n);

    printf("\nThe data items after sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);

    return 0;
}
