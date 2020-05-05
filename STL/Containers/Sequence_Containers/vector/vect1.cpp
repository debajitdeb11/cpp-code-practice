// Program demostrate basic functionality about vector
#include <iostream>
#include <vector>
using namespace std;

#define foo(n) for (int i = 0; i < n; i++)
#define ln cout << "\n";

void display(vector<int> vect)
{
    for (auto i = vect.begin(); i != vect.end(); i++) // vect.begin() => start && vect.end() => end
        cout << *i << " ";
}

int main()
{
    vector<int> vect;
    cout << "The maximun No. of elements can vector Hold: " << vect.max_size(); // Return maximum elements can a vector hold
    ln;
    int n, value;
    cout << "How many Elements you want to Push: ";
    cin >> n >> value;
    foo(n)
    {
        cin >> value;
        vect.push_back(value); // To push elements into an array
    }

    cout << "The vector contains: \n";
    display(vect);
    ln;

    // check whether Vector is empty or not
    if (vect.empty() == true)
        cout << "Vector is Empty\n";
    else
        cout << "Vector is not Empty\n";

    cout << "The Vector contains " << vect.size() << "elements"; // vect.size() returns the no of elements stored in a vector
    ln;

    return 0;
}