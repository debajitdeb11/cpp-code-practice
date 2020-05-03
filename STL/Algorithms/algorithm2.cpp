// Program to count the Occurence of a number

/*

count(first_iterator, last_iterator,x) – To count the occurrences of x in vector.
find(first_iterator, last_iterator, x) – Points to last address of vector 
((name_of_vector).end()) if element is not present in vector.

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define foo(V) for(auto i:V)
#define fo(n) for(int i = 0; i<n; i++)
#define ln cout<<"\n";

void show(vector<int> V){
    foo(V) { cout << i << " "; }
}

int main(){
    vector<int> vect;
    int t,val,n,num;
    cout << "How many elements you want to push: ";
    cin >> t;
    fo(t){
        cin >> val;
        vect.push_back(val); 
    }

    cout << "Vector contains: ";
    show(vect);
    ln;
    
    cout << "You want to find the cout of occurence for: ";
    cin >> n;

    cout << n << ": occurs " << count(vect.begin(), vect.end(), n);
    ln;

    cout << "Which number you want to search in the Vector: ";
    cin >> num;

    find(vect.begin(), vect.end(), num) != vect.end() ? 
        cout << "\n Element is found" : cout << "\nElement is not found"; 

    return 0;
}