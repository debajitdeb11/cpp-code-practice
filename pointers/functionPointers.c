// Function Pointers
// Calling a function using a pointer

#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int sum;

    int (*call)(int, int);

    call = &add;

    sum = (*call)(5, 6); // De-referencing & execution the function.

    printf("%d", sum);

    return 0;
}