#include <iostream>
using namespace std;

void increment(int *p)
{
    *p = *(p) + 1;
}

int main()
{

    int a = 10;

    cout << "Before: a = " << a;
    increment(&a);
    cout << "After: a = " << a;

    return 0;
}