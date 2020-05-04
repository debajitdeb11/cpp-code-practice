/*
5. shift() :- This function returns the new valarray after shifting elements by the number 
mentioned in its argument. If the number is positive, left-shift is applied, 
if number is negative, right-shift is applied.

6. cshift() :- This function returns the new valarray after circularly shifting(rotating) 
elements by the number mentioned in its argument. If the number is positi
*/

#include <iostream>
#include <valarray>
using namespace std;

int main()
{
    // Initialized an valarray
    int n, value;

    cout << "How many elements you want to insert :\n";
    cin >> n;
    valarray<int> val(n);
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        val[i] = value;
    }

    // Display the valArray
    for (int i = 0; i < n; i++)
    {
        cout << val[i] << " ";
    }
    cout << "\n";

    // To perform shift
    valarray<int> val1(n);
    cout << "For how many positions you want to shift the val array: ";
    int sh;
    cin >> sh;
    val1 = val.shift(sh); // This will shift the valarray

    // After Shifting ..........
    for (int &i : val1)
        cout << i << " ";
    cout << "\n";

    // To perform circular shift
    valarray<int> val2(n);
    cout << "For How many units you want to perform shift for Circular Valarray: \n";
    int cs;
    cin >> cs;
    val2 = val.cshift(cs);

    // After Circular Shifting
    for (int &i : val2)
        cout << i << " ";
    cout << "\n";

    return 0;
}