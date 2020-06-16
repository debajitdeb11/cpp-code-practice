#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *p;
    p = &a;

    cout << "a = " << a << "\n";

    *p = 20; // a = 20;

    cout << "a = " << a << "\n";

    return 0;
}