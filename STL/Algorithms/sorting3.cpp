// Program to perform STL sort () using own comparator
#include <iostream>
#include <algorithm>
using namespace std;

#define foo(n) for(int i = 0; i < n; i++)
#define nl cout << "\n"

// An Interval has start time & end time.
class Interval{
    public:
        int start, end;
};

// Compare two Intervals according to starting times.
bool compareInterval(Interval i1, Interval i2){
    return (i1.start < i2.start);
}


int main(){
    Interval arr[100];
    int start, end, n;
    cout << "Declare the Size of the array: ";
    cin >> n;

    cout << "Insert the elements into the array\n";
    foo(n){
        cin >> start >> end;
        arr[i].start = start;
        arr[i].end = end;
    }

    cout << "initial state of the array\n";
    foo(n){  cout<<"[" <<arr[i].start <<","<<arr[i].end<<"]";}
    nl;
    // Sorting ............
    sort(arr, arr+n, compareInterval);

    // After Sorting
    cout << "After Sorting: ";
    foo(n)  {  cout <<"[" << arr[i].start << "," << arr[i].end <<"]"; }
    nl;
    return 0;
}