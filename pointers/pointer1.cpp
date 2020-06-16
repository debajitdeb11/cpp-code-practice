#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *p = &a;

    cout << p << "\n";
    cout << *p << "\n";
    cout << *&p << "\n";
    cout << &*p << "\n";

    return 0;
}