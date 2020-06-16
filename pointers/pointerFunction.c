// Program to demostrate the use of pointer to
// pass the address of x & y as reference

#include <stdio.h>
#include <stdlib.h>

int add(int *x, int *y)
{

    return (*x) + (*y);
}

int main()
{
    int x, y;
    printf("Enter the value of x & y: ");
    scanf("%d %d", &x, &y);

    printf("%d", add(&x, &y));

    return 0;
}