#include <iostream>
using namespace std;

int main()
{

    int n, k;
    int total, result;
    int arr[1000];
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        total = total + 5 * (i + 1);
        arr[i] = total;
    }

    result = 4 * 60 - k;

    int j = 0;
    while (arr[j] <= result)
    {
        j++;
    }

    cout << j + 1 << "\n";

    return 0;
}