// Binary Search in C++ using STL.
#include <iostream>
#include <algorithm>
using namespace std;

#define foo(n) for(int i=0;i<n;i++)
#define ln cout << "\n"

// To display the Elements of an array
void display(int a[], int n){
    foo(n){
        cout << a[i] << " ";
    }
    ln;
}

int main(){
    int arr[100];
    int value, n, t;
    
    cout << "How many Element you want to insert into an array: ";
    cin >> n;
    
    // Insertion of element onto an array
    foo(n){
        cin >> value;
        arr[i] = value;
    }

    ln;

    // Display the initial state of an array
    display(arr,n);

    ln;

    cout << "Enter the element you want to Search: ";
    cin >> t;

    /*
        binary_search(startaddress, endaddress, valuetofind)
        -----------------------------------------------------------
        startaddress: the address of the first element of the array.
        endaddress: the address of the last element of the array.
        valuetofind: the target value which we have to search for.
    */

    if(binary_search(arr, arr+n, t))
        cout << "Element is found\n";
    else
        cout <<"Element not found!\n";
    
    return 0;
}
