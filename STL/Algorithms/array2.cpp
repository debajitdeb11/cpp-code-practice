/*
any_of()

This function checks for a given range if there’s even one element 
satisfying a given property mentioned in function. 
Returns true if at least one element satisfies the property else returns false.
*/

// C++ code to demonstrate working of any_of() 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define foo(n) for(int i=0;i<n;i++)
#define MAX_SIZE 100

int ARR[MAX_SIZE];

int main(){

    int val, n;
    printf("How many Values you want to insert: ");
    cin >> n;

    foo(n){
        cin >> val;
        ARR[i] = val;
    }

    printf("The array Contains \n");
    foo(n) 
        cout << ARR[i] <<" ";
    cout << "\n";

    any_of(ARR, ARR+n, [](int x) {return x < 0; } ) ? 
    cout << "There exist a negative element\n" :
    cout << "There exist no negative element\n";

    return 0;
}