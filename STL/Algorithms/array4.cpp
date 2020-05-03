/*
iota()

This function is used to assign continuous values to array. 
This function accepts 3 arguments, the array name, size, and the starting number.
*/

#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int arr[100];
    iota(arr, arr+50, 0);
    
    // To display the array
    for (int i = 0; i < 50; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";
    
    return 0;
}