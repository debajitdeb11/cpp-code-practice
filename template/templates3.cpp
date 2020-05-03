//TODO: PROGRAM IS INCOMPLETES


// CPP code for bubble sort 
// using template function

#include <iostream>
using namespace std;

// A template function to implement bubble sort. 
// We can use this for any data type that supports 
// comparison operator < and swap works for it.

template <class T>

void bubbleSort(T a[], int n){
    for(int i  = 0; i < n ; i++)
        for(int j = i+1; j < n; j++)
            if(a[i] == a[j])
                swap(a[i], a[j]);
}
    
int main(){

    int a[] = {10, 100, 20, 30, 80, 10, 60};
    bubbleSort(a, 7);

    int n = sizeof(a)/sizeof(a[0]);

    bubbleSort(a, n);

    cout << "Sorted Array\n";

    for (int i = 0; i < n ; i++)
        cout << a[i] << " ";

    cout << endl;
    return 0;
}