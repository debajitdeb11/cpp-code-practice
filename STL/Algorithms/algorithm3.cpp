// Program to demostrate the working of 
//lower_bound() & upper_bound() in STL

/*
lower_bound(first_iterator, last_iterator, x) – returns an 
iterator pointing to the first element in the range [first,last) 
which has a value not less than ‘x’.

upper_bound(first_iterator, last_iterator, x) – returns an 
iterator pointing to the first element in the range [first,last) 
which has a value greater than ‘x’.

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define foo(n) for(int i=0;i<n;i++)
#define ln cout<<"\n"

void show(vector<int> V){
    for(auto i: V)
        cout <<i<<" ";
}

int main(){
    vector<int> vect;
    int val, n, key;
    cout << "How many element you want to push: ";
    cin >> n;
    foo(n){
        cin >> val;
        vect.push_back(val);
    }
    cout << "Inital Data inside a Vector is: ";
    show(vect);
    ln;

    // To sort the vector
    sort(vect.begin(), vect.end());
    cout << "After Sorting: ";
    show(vect);
    ln;

    cout << "Enter the key: ";
    cin >> key;

    auto p = lower_bound(vect.begin(), vect.end(), key);
    auto q = upper_bound(vect.begin(), vect.end(), key);

    cout << "Lower Bound: " << p-vect.begin();
    ln;

    cout << "Upper Bound: " << q-vect.begin();
    ln;

    return 0;
}