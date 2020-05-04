/*
1. partition(beg, end, condition) :- This function is used to partition 
the elements on basis of condition mentioned in its arguments.

2. is_partitioned(beg, end, condition) :- This function returns boolean true 
if container is partitioned else returns false.

*/

// C++ code to demonstrate the working of  
// partition() and is_partitioned() 
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main(){
    vector<int> vect;
    for(int i=0; i<21; i++)
        vect.push_back(i);

    // partitioning vector using partition() 
    partition(vect.begin(), vect.end(), [](int x){
        return x % 2 == 0;
    });

    // Checking if vector is partitioned  
    // using is_partitioned() 
    is_partitioned(vect.begin(), vect.end(), [](int x) 
    { 
        return x%2==0; 
          
    })? 
    cout << "Now, vector is partitioned after partition operation": 
    cout << "Vector is still not partitioned after partition operation"; 
    cout << endl;

    // Displaying partitioned Vector 
    cout << "The partitioned vector is : "; 
    for (int &x : vect) cout << x << " ";  
    return 0;
}