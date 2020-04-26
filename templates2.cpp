// Templates: Print an array

#include <iostream>
using namespace std;

template <typename T>

T printArray(T x[], T n){
    for(int i = 0; i < n ; i++){
        cout << x[i] << " ";
    }
    cout <<endl;
}


int main(){

    double x[] = {1.9, 2.6, 3.7, 6.666675, 7.21, 8.19, 9.32, 10.56, 11.7, 12};
    int n = sizeof(x)/sizeof(x[0]);

    printArray<double>(x, n);

    return 0;
}