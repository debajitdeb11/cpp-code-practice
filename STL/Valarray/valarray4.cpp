/*
7. swap() :- This function swaps one valarray with other.
*/

// Program to demostrate the function of swap
#include <iostream>
#include <valarray>
using namespace std;

int main()
{

    // Initialized Valarray-1
    int n, value;

    cout << "How many elements you want to insert valarray-1 :\n";
    cin >> n;
    valarray<int> valArr1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        valArr1[i] = value;
    }
    cout << "Output of ValArray-1: \n";
    // Display the valArray
    for (int i = 0; i < n; i++)
    {
        cout << valArr1[i] << " ";
    }
    cout << "\n";

    // Initialized Valarray-2
    valarray<int> val2(n);
    cout << "Enter the values in val array-2 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        val2[i] = value;
    }

    cout << "To display the value of val array-2\n";
    for (int i = 0; i < n; i++)
    {
        cout << val2[i] << " ";
    }
    cout << "\n";

    // Performing Swap
    valArr1.swap(val2);

    cout << "Output of ValArray-1: ";
    for (int i = 0; i < n; i++)
    {
        cout << valArr1[i] << " ";
    }
    cout << "\n";

    cout << "Output of valArray-2: ";
    for (int i = 0; i < n; i++)
    {
        cout << val2[i] << " ";
    }
    cout << "\n";

    return 0;
}