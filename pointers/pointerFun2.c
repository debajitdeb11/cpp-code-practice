// Program to implement the pointer as
// the return type of the function

#include <stdio.h>
#include <stdlib.h>

int fsum; // so that the value doesn't wiped out after the stack call

int *add(int *x, int *y)
{
    fsum = *x + *y;
    return &fsum;
}

int main()
{
    int x, y;
    printf("Enter the value of x & y: ");
    scanf("%d %d", &x, &y);

    int *sum = add(&x, &y);

    printf("Sum = %d", *sum);

    return 0;
}