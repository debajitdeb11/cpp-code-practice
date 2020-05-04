/*
3. min() :- This function returns the smallest element of valarray.

4. max() :- This function returns the largest element of valarray.
*/

// Program to demostrate the use of max() & min() in STL
#include <iostream>
#include <valarray>
using namespace std;

int main()
{
    valarray<int> val(20);
    int t, value;

    cout << "How many elements you want to insert into Val Array: ";
    cin >> t;
    for (auto i = 0; i < t; i++)
    {
        cin >> value;
        val[i] = value;
    }

    cout << "The maximum & minimum elements are:"
         << val.max() << " & " << val.min() << "\n";

    return 0;
}