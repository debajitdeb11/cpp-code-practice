#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *A, int *n)
{

    int i, j, temp;

    for (i = 0; i < *n; i++)
    {
        for (j = 0; j < (*n) - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[] = {9, 3, 6, 5, 1, 1, 2, 5, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}