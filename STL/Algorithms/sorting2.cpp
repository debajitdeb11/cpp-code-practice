// Sorting a array in decreasing order using STL
#include <iostream>
#include <algorithm>
using namespace std;

#define foo(n) for(int i; i < n; i++)
#define nl cout << "\n"

int main(){
    int n, value;
    cout << "How many element you want to insert into the array: ";
    cin >> n;
    // Initialized an array of size n
    int arr[100];

    // Insert elements into the array
    foo(n){
        cin >> value;
        arr[i] = value;
    }

    // To display the initial state of the array
    foo(n) {  cout << arr[i] << " ";  }
    nl;

    // Sorting .....................
    sort(arr, arr+n, greater<int>());   // greater<int>() : Sort the array in decreasing order

    // Display the array after sorting
    foo(n)  {  cout << arr[i] << " "; }
    nl;

    return 0;
}