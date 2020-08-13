#include <stdio.h>

int linear_search(int arr[], int n, int i, int key)
{

    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }

    return linear_search(arr, n, i + 1, key);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", linear_search(arr, n, 0, 6));
    printf("%d\n", linear_search(arr, n, 0, 100));

    return 0;
}