// C++ program to demonstrate working of next_permutation() 
// and prev_permutation() in STL

/*
next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation.
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
    int val, n;
    cout << "How many element you want to push: ";
    cin >> n;
    foo(n){
        cin >> val;
        vect.push_back(val);
    }

    cout << "Inital Data inside a Vector is: ";
    show(vect);
    ln;

    next_permutation(vect.begin(), vect.end());
    cout<< "Vector after performing next_permutation: ";
    show(vect);
    ln;

    prev_permutation(vect.begin(), vect.end());
    cout << "Vector after performing prev_permutation: ";
    show(vect);
    ln;

    return 0;
}