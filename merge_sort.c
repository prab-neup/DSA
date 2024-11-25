#include <stdio.h>

void Merge(int A[], int l, int m, int h)
{
    int B[h++];
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= h)
    {
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for (; i <= m; i++)
        B[k++] = A[i];
    for (; j <= h; j++)
        B[k++] = A[j];
    for (i = l; i <= h; i++)
        A[i] = B[i];
}

void mergeSort(int A[], int l, int h)
{
    if (l < h)
    {
        int m = (l + h) / 2;
        mergeSort(A, l, m);
        mergeSort(A, m + 1, h);
        Merge(A, l, m + 1, h);
    }
}

int main()
{
    int A[100], n, i, l, h;
    printf("Enter the number of data items:\n");
    scanf("%d", &n);
    printf("Enter %d data items:\n", n);
    l = 0;
    h = n - 1;

    for (i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("The data items before sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);

    mergeSort(A, l, h);

    printf("\nThe data items after sorting:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);

    return 0;
}
