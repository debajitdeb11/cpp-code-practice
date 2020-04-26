/*

A template is a simple and yet very powerful tool in C++. 
The simple idea is to pass data type as a parameter so that 
we don’t need to write the same code for different data types. 
For example, a software company may need sort() for different data types. 
Rather than writing and maintaining the multiple codes, 
we can write one sort() and pass data type as a parameter

*/


/*
1. A template is a simple and yet very powerful tool in C++. 
The simple idea is to pass data type as a parameter so that 
we don’t need to write the same code for different data types. 
For example, a software company may need sort() for different data types. 
Rather than writing and maintaining the multiple codes, 
we can write one sort() and pass data type as a parameter
*/

#include <iostream>
using namespace std;

// One function works for all data types.  This would work 
// even for user defined types if operator '>' is overloaded

template <typename T>

T mymax(T x, T y){
    return(x > y) ? x : y;
}

int main(){

    cout << mymax<int>(3,5) <<"\n";
    cout << mymax<double>(33.2123456789, 33.2);
    return 0;
}