// Basic program to implement Sorting using STL
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100];
#define fo(n) for(int i = 0; i < n; i++)

int main(){

    int value, n;
    cout << "How many Values you want to insert: ";
    cin >> n;

    // To insert the value to the array
    fo(n){
        cin >> value;
        arr[i] = value;
    }

    // To display the values of the array
    cout << "Original Aray before Sorting :";
    fo(n) cout << arr[i] << " ";
    cout << "\n";

    /*
        sort(startaddress, endaddress)

        startaddress: the address of the first element of the array
        endaddress: the address of the next contiguous location
        of the last element of the array.
        So actually sort() sorts in the range of [startaddress,endaddress)
    */
    sort(arr, arr+n);

    cout << "Array after sorting: ";

    fo(n) cout << arr[i] << " ";
    cout << "\n";

return 0;
}