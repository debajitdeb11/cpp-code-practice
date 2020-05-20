// Array rotation using temp array
#include <iostream>

#define fo(i, n) for (int i = 0; i < n; i++)
using namespace std;

void rotate(int arr[])
{
    int temp[] = {arr[0], arr[1]};

    for (int i = 2; i < 10; i++)
        arr[i - 2] = arr[i];

    arr[8] = temp[0];
    arr[9] = temp[1];

    cout << "The Array after Rotation is: ";
    fo(i, 10)
            cout
        << " " << arr[i];

    cout << "\n";
}

int main()
{
    int arr[10];

    cout << "Initializing Elements into the array: ";
    fo(i, 10)
        arr[i] = i + 1;
    fo(i, 10)
            cout
        << " " << arr[i];
    cout << "\n";

    rotate(arr);

    return 0;
}

// The above example is not a very good practice