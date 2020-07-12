#include <iostream>
using namespace std;

int main()
{

    int a = 1;
    int b = 2;

    if (a & b)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    int c = 1;
    int d = 2;

    if (c | d)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}