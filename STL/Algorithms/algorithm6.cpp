// C++ program to demostrate the working of distance() in STL
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define foo(n) for(int i=0; i<n; i++)
#define ln cout<<"\n"

void show(vector<int> V){
    for(auto i : V)
        cout << i << " ";
        ln;
}

int main(){

    vector<int> vect;
    int val, n, del, choice;

    cout << "No of Element you want to Insert: ";
    cin >> n;

    foo(n){
        cin >> val;
        vect.push_back(val);
    }

    show(vect);

    /*
    distance(first_iterator,desired_position) – It returns the distance of desired position 
    from the first iterator.This function is very useful while finding the index.
    */

    cout << "The distance between the first & Max element is: " << distance(vect.begin(), max_element(vect.begin(), vect.end()));

    return 0;
}