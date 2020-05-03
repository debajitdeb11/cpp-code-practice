/*
> sort(first_iterator, last_iterator) – To sort the given vector.
> reverse(first_iterator, last_iterator) – To reverse a vector.
> *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
> *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
> accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
*/


#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

#define foo(n) for(int i=0;i<n;i++)
#define ln cout <<"\n"

vector<int> V;

void display(vector<int> V){
    for(auto i:V)
        cout <<i<<" ";
}


int main(){

    int key, n;
    
    cout << "How many element you want to push: ";
    cin >> n;
    foo(n){
        cin >> key;
        V.push_back(key);
    }

    display(V);
    ln;
    
    // Sort in Ascending Order
    sort(V.begin(), V.end());
    cout << "After Sorting: ";
    display(V);
    ln;

    //Reverse the 
    reverse(V.begin(), V.end());
    cout << "After Reversing: ";
    display(V);    
    ln;

    // Maximun Element in the array
    cout <<"The Maximum element of the Vector is: "<< *max_element(V.begin(), V.end());
    ln;

    // Minimum Element in the array
    cout <<"The Minimun element of the Vector is: "<< *min_element(V.begin(), V.end());
    ln;

    // Summation of all the elements
    cout << "The sum of all the values of the Vectors are: "<< accumulate(V.begin(), V.end(), 0);
    ln;

    return 0;
}