/*
copy_n()

copy_n() copies one array elements to new array. 
This type of copy creates a deep copy of array. This function takes 
3 arguments, source array name, size of array and the target array name.
*/

#include <bits/stdc++.h>
using namespace std;

#define foo(n) for(int i=0;i<n;i++)
#define ln cout << "\n"

int ARR1[10];
int ARR2[10];

int main(){

    int val,n;

    printf("Enter the initial values into the array: ");
    cin >> n;

    foo(n){
        cin >> val;
        ARR1[i] = val;
    }

    cout << "ARRAY1 : ";
    ln;

    foo(n) { cout << ARR1[i] << " "; }
    ln;

    // To copy the ARR1 to ARR2
    copy_n(ARR1, n ,ARR2);  

    cout << "Output of ARRAY 2 is :\n";
    foo(n) {cout << ARR2[i] << " ";}
    ln;

    return 0;
}