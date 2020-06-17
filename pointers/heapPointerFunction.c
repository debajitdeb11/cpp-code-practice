// Program to demostrate the implementation of heap

#include <stdio.h>
#include <stdlib.h>

int *add(int *x, int *y)
{

    int *total = (int *)malloc(sizeof(int)); // This will allocate memory to heap

    *total = *x + *y; // value of total is equals to value of x + value of y;

    return total; // here, total is the address malloc returns;
}

int main()
{
    int x, y;
    printf("Enter the value of X & Y: ");
    scanf("%d %d", &x, &y);

    int *sum = add(&x, &y);

    printf("Sum = %d", *sum);

    return 0;
}