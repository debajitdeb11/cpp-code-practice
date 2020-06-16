#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter the size of the array\n");
    scanf("%d", &n);

    int *Arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        Arr[i] = i;
    }

    // free(Arr);

    for (int i = 0; i < n; i++)
    {
        printf(" %d", Arr[i]);
    }
}