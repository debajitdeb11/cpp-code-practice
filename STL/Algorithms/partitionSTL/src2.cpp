/*

stable_partition(beg, end, condition) :- This function is used to partition the elements 
on basis of condition mentioned in its arguments in such a way that the relative order of 
the elements is preserved..

partition_point(beg, end, condition) :- This function returns an iterator pointing to the 
partition point of container i.e. the first element in the partitioned range [beg,end) for 
which condition is not true. The container should already be partitioned for this 
function to work.

*/

#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

int main(){
    vector <int> vect;
    for (int i = 0; i < 50; i++)
    {
        vect.push_back(i);
    }
    

    for(auto i:vect)
        cout << i << " ";
    cout << "\n";

    stable_partition(vect.begin(), vect.end(), [](int x){
        return x%2 == 0;
    });

    // To display the vector partition
    cout << "Vector Partition is :\n";
    for(auto i: vect)
        cout << i << " ";
    cout << "\n";

    // Declaring Iteration
    vector<int> :: iterator it1;

    auto it = partition(vect.begin(), vect.end(), [](int x){
        return x%2 == 0;
    } );

    // Display partition vector
    cout << "The vector elements returning true condition are: ";
    for(it1 = vect.begin(); it1!=it; it1++)
        cout << *it1 <<" ";
    cout << "\n";

    return 0;
}