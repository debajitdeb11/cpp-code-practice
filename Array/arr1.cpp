// Basic Operations with array
#include <iostream>

#define fo(i, n) for (int i = 0; i < n; i++)
#define MAX 100
using namespace std;

int main()
{

    // Initlisation of an Array
    int arr[MAX];

    // Initialization of Values into an Array
    fo(i, MAX)
        arr[i] = i;

    // Display the values of an Array
    fo(i, MAX)
            cout
        << " " << arr[i];
    cout << "\n";

    return 0;
}