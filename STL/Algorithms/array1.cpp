// Useful array algorithm

/*
Feature Available from C++11 onwards
all_of()

This function operates on whole range of array elements and can save 
time to run a loop to check each elements one by one. 
It checks for a given property on every element and returns true when 
each element in range satisfies specified property, else returns false.
*/

// C++ code to demonstrate working of all_of() 

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

    // check if all the elements are positive.....
    all_of(ARR, ARR+n, [] (int x){ return x > 0;}) ? 
        cout << "All the elements are positive\n" :
        cout << "all the elements are not positive\n";

    return 0;
}