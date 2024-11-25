#include <stdio.h>
#include <conio.h>

int BubbleSort(int A[], int n)
{
    int i, j, temp, flag = 0;
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
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
    BubbleSort(A, n);
    printf("\nThe data items after sorting\n");
    for (i = 0; i < n; i++)
        printf("%d\t", A[i]);
}