#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    for (int *i = 0; i < arr + 5; i++)
    {
        cout << i;
    }

    return 0;
}