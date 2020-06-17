#include <stdio.h>
#include <stdlib.h>

void A()
{
    printf("Hello");
}

// Function B() takes function pointer as argument
void B(void (*ptr)())
{
    ptr(); // call-back function that ptr points to
}

int main()
{

    // void (*p)() = &A;
    // B(p);

    B(&A); // A is a call-back function

    return 0;
}