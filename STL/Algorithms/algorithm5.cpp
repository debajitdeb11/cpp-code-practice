// Deletion of elements from a vector
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

    cout << "Enter the index you want to delete: ";
    cin >> del;

    /*
    > arr.erase(position to be deleted) – This erases selected element in vector 
    and shifts and resizes the vector elements accordingly.

    > arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences 
    in sorted vector in a single line.
    */

    vect.erase(vect.begin()+del);

    cout << "Vector After Deletion: ";
    show(vect);

    cout << "If you want to delete the duplicate Occurences Enter '1' : ";
    cin >> choice;

    if(choice == 1){

        // To enable unique(), We have to sort the array first
        sort(vect.begin(), vect.end());

        vect.erase(unique(vect.begin(), vect.end()), vect.end());
        show(vect);

    }

    return 0;
}