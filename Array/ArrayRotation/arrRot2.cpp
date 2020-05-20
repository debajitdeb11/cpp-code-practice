// Rotate Array one-by-one
#include <iostream>

#define fo(i, n) for (int i = 0; i < n; i++)
#define revfo(i) for (int i = MAX - 1; i >= 0; i--)
#define MAX 10
using namespace std;

int *LeftShift(int arr[], int n)
{
    int temp;
    fo(i, n)
    {
        temp = arr[0];
        fo(j, MAX)
            arr[j] = arr[j + 1];

        arr[MAX - 1] = temp;
    }

    return arr;
}

int *RightShift(int arr[], int n)
{

    int temp;
    fo(i, n)
    {
        temp = arr[MAX - 1];
        revfo(j)
            arr[j] = arr[j - 1];

        arr[0] = temp;
    }

    return arr;
}

int main()
{
    int arr[MAX];

    // Inilized values into the Array
    fo(i, MAX)
        arr[i] = i + 1;

    // Initial Elements of the array
    cout << "Initial Elements of the Array are: ";
    fo(i, MAX)
            cout
        << " " << arr[i];

    int choice;

    cout << "\n Enter 1 for LeftShift & 2 for RightShift :";
    cin >> choice;

    int n;
    int *newArr;
    if (choice == 1)
    {
        cout << "\nHow many values you want shift: ";
        cin >> n;
        newArr = LeftShift(arr, n);
    }

    else if (choice == 2)
    {
        cout << "\nHow many values you want shift: ";
        cin >> n;
        newArr = RightShift(arr, n);
    }

    cout << "\n";

    // Display Array after Rotation
    fo(i, MAX)
            cout
        << " " << *(newArr + i);

    cout << "\n";

    return 0;
}