// TODO: Incomplete

/*
C++98 introduced a special container called valarray to hold and provide mathematical 
operations on arrays efficiently.

It supports element-wise mathematical operations and various forms of generalized subscript operators, 
slicing and indirect access.
As compare to vectors, valarrays are efficient in certain mathematical operations than vectors also
------------------------------------------------------------------------------------------------------
apply() :- This function applies the manipulation given in its arguments to all
the valarray elements at once and returns a new valarray with manipulated values.

sum() :- This function returns the summation of all the elements of valarrays at once.
*/

#include <iostream>
#include <valarray>
using namespace std;

#define foo(n) for (int i = 0; i < n; i++)

template <typename T>

T display(T arr, int n)
{
    for (auto i = 0; i < n; i++)
        cout << i << " ";
}

int main()
{

    valarray<int> val(100);
    valarray<int> val1;

    // Insert Elements into valarray
    cout << "How many Elements you want to insert: ";
    int n, value;
    cin >> n;
    foo(n)
    {
        cin >> value;
        val[i] = value;
    }

    display(val, n);
    cout << "\n";

    val1 = val.apply([](int x) { return x += 5; });

    // display the val1 array
    for (auto &i : val1)
        cout << i << " ";

    return 0;
}